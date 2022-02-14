
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8_t ;
struct uip_netif {char num; char const* name; struct uip_netif* next; } ;


 struct uip_netif* VAR_0 ;

struct uip_netif* FUNC_0(const char *VAR_1)
{
 u8_t VAR_2;
 struct uip_netif *VAR_3;

 if(VAR_1==((void*)0)) return ((void*)0);

 VAR_2 = VAR_1[2] - '0';

 for(VAR_3=VAR_0;VAR_3!=((void*)0);VAR_3=VAR_3->next) {
  if(VAR_3->num==VAR_2 &&
   VAR_3->name[0]==VAR_1[0] &&
   VAR_3->name[1]==VAR_1[1]) return VAR_3;
 }

 return ((void*)0);
}
