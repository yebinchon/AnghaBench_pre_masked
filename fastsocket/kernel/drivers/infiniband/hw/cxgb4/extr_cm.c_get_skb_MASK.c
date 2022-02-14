
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int gfp_t ;


 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct sk_buff *VAR_0, int VAR_1, gfp_t VAR_2)
{
 if (VAR_0 && !FUNC_3(VAR_0) && !FUNC_1(VAR_0)) {
  FUNC_5(VAR_0, 0);
  FUNC_2(VAR_0);
  FUNC_4(VAR_0);
 } else {
  VAR_0 = FUNC_0(VAR_1, VAR_2);
 }
 return VAR_0;
}
