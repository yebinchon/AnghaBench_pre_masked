
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int ssize_t ;
struct TYPE_5__ {TYPE_1__* wavebufs; } ;
typedef TYPE_2__ libnx_audren_t ;
struct TYPE_4__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_0(libnx_audren_t* VAR_3)
{
   unsigned VAR_4;

   for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   {
      if (VAR_3->wavebufs[VAR_4].state == VAR_1
         || VAR_3->wavebufs[VAR_4].state == VAR_0)
      {
         return VAR_4;
      }
   }

   return -1;
}
