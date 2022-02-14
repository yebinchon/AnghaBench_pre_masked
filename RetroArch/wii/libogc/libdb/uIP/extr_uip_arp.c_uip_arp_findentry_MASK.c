
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8_t ;
struct uip_ip_addr {int dummy; } ;
typedef size_t s8_t ;
struct TYPE_2__ {scalar_t__ state; size_t time; int ipaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_0 (struct uip_ip_addr*,int *) ;
 int FUNC_1 (int *,struct uip_ip_addr*) ;

__attribute__((used)) static s8_t FUNC_2(struct uip_ip_addr *VAR_7,u8_t VAR_8)
{
 s8_t VAR_9 = VAR_4, VAR_10 = VAR_4;
 s8_t VAR_11 = VAR_4;
 u8_t VAR_12 = 0,VAR_13 = 0,VAR_14 = 0;




 for(VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
  if(VAR_11==VAR_4 && VAR_6[VAR_12].state==VAR_0) {
   VAR_11 = VAR_12;
  } else if(VAR_6[VAR_12].state==VAR_1) {
   if(VAR_7 && FUNC_0(VAR_7,&VAR_6[VAR_12].ipaddr)) return VAR_12;
   else if(VAR_6[VAR_12].time>=VAR_13) {
    VAR_9 = VAR_12;
    VAR_13 = VAR_6[VAR_12].time;
   }
  } else if(VAR_6[VAR_12].state==VAR_2) {
   if(VAR_7 && FUNC_0(VAR_7,&VAR_6[VAR_12].ipaddr)) return VAR_12;
   else if(VAR_6[VAR_12].time>=VAR_14) {
    VAR_10 = VAR_12;
    VAR_14 = VAR_6[VAR_12].time;
   }
  }
 }
 if(VAR_11==VAR_4 && !(VAR_8&VAR_3)) return VAR_5;

 if(VAR_11<VAR_4) VAR_12 = VAR_11;
 else if(VAR_10<VAR_4) VAR_12 = VAR_10;
 else if(VAR_9<VAR_4) VAR_12 = VAR_9;
 else return VAR_5;

 VAR_6[VAR_12].time = 0;
 VAR_6[VAR_12].state = VAR_0;
 if(VAR_7!=((void*)0)) FUNC_1(&VAR_6[VAR_12].ipaddr,VAR_7);

 return (s8_t)VAR_12;
}
