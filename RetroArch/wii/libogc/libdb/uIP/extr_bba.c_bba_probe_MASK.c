
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uip_netif {int dummy; } ;
typedef int s8_t ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct uip_netif*) ;

__attribute__((used)) static s8_t FUNC_4(struct uip_netif *VAR_3)
{
 s32 VAR_4;
 u32 VAR_5;

 if(FUNC_0(VAR_1,VAR_2,((void*)0))==0) return -1;

 VAR_5 = FUNC_2();
 if(VAR_5!=VAR_0) {
  FUNC_1(VAR_1);
  return -1;
 }

 VAR_4 = FUNC_3(VAR_3);

 FUNC_1(VAR_1);
 return VAR_4;
}
