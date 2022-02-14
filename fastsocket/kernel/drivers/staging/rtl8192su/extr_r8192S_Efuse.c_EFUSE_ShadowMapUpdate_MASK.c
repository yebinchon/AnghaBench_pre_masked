
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int AutoloadFailFlag; int ** EfuseMap; } ;
struct net_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int,int) ;

extern void FUNC_4(struct net_device* VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->AutoloadFailFlag == 1){
  FUNC_3(&(VAR_4->EfuseMap[VAR_0][0]), 0xff, 128);
 }else{
  FUNC_0(VAR_3, &VAR_4->EfuseMap[VAR_0][0]);
 }


 FUNC_2(&VAR_4->EfuseMap[VAR_1][0],
  &VAR_4->EfuseMap[VAR_0][0], VAR_2);

}
