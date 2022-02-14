
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mISDNchannel {int st; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;

__attribute__((used)) static int
FUNC_2(struct mISDNchannel *VAR_1, struct sk_buff *VAR_2)
{
 if (!VAR_1->st)
  return -VAR_0;
 FUNC_0(VAR_2);
 FUNC_1(VAR_1->st, VAR_2);
 return 0;
}
