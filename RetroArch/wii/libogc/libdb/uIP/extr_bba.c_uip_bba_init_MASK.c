
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_netif {int flags; } ;
typedef scalar_t__ s8_t ;
typedef int s32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct uip_netif*) ;
 int * VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct uip_netif*) ;

s8_t FUNC_7(struct uip_netif *VAR_5)
{
 s8_t VAR_6;
 s32_t VAR_7;

 VAR_6 = FUNC_2(VAR_5);
 if(VAR_6<0) return VAR_6;

 VAR_6 = FUNC_1();
 if(VAR_6<0) return VAR_6;

 VAR_7 = 0;
 do {
  FUNC_4(500);
  VAR_7++;
 } while((VAR_6=FUNC_0())==0 && VAR_7<10000);
 if(!VAR_6) return VAR_0;

 VAR_5->flags |= VAR_2;
 FUNC_6(VAR_5);
 FUNC_5();

 VAR_4 = ((void*)0);
 VAR_3 = FUNC_3();

 return VAR_1;
}
