
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8_t ;
struct TYPE_2__ {scalar_t__ time; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 TYPE_1__* VAR_7 ;

void
FUNC_0(void)
{
 u8_t VAR_8;

 for(VAR_8=0;VAR_8<VAR_6;VAR_8++) {
  VAR_7[VAR_8].time++;
  if(VAR_7[VAR_8].state==VAR_5 && VAR_7[VAR_8].time>=VAR_0) {
   VAR_7[VAR_8].state = VAR_3;
  } else if(VAR_7[VAR_8].state==VAR_4) {
   if(VAR_7[VAR_8].time>=VAR_1) VAR_7[VAR_8].state = VAR_3;
  }

  if(VAR_7[VAR_8].state==VAR_3) VAR_7[VAR_8].state = VAR_2;
 }
}
