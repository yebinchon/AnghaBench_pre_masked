
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ cardstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__** VAR_4 ;

u16 FUNC_0(void)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4[VAR_5] && VAR_4[VAR_5]->cardstate == VAR_3)
   return VAR_1;
 }
 return VAR_2;
}
