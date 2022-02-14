
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int dummy; } ;
typedef int param ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ipw_priv*,int ,int,int *) ;

__attribute__((used)) static int FUNC_3(struct ipw_priv *VAR_3, u32 VAR_4)
{
 __le32 VAR_5;

 if (!VAR_3) {
  FUNC_0("Invalid args\n");
  return -1;
 }



 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_1(VAR_1);
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_2);
  break;
 default:
  VAR_5 = FUNC_1(VAR_4);
  break;
 }

 return FUNC_2(VAR_3, VAR_0, sizeof(VAR_5),
    &VAR_5);
}
