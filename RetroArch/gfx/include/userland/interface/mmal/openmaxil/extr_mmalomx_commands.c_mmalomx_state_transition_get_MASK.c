
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; scalar_t__ request; } ;
typedef scalar_t__ OMX_STATETYPE ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(OMX_STATETYPE VAR_2, OMX_STATETYPE VAR_3)
{
   unsigned int VAR_4;

   for (VAR_4 = 0; VAR_1[VAR_4].state != VAR_0; VAR_4++)
      if (VAR_1[VAR_4].state == VAR_2 &&
          VAR_1[VAR_4].request == VAR_3)
         break;

   return VAR_1[VAR_4].state != VAR_0 ? VAR_4 : 0;
}
