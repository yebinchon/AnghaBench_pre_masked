
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {scalar_t__ tm; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct layer2*,int ,int ) ;
 int FUNC_1 (struct layer2*,int) ;
 int FUNC_2 (struct layer2*,int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct layer2 *VAR_5 = VAR_2->userdata;
 struct sk_buff *VAR_6 = VAR_4;

 FUNC_3(VAR_6, FUNC_1(VAR_5, 1));




 if (VAR_5->tm)
  FUNC_0(VAR_5, VAR_1, 0);
 FUNC_2(VAR_5, VAR_0, VAR_6);
}
