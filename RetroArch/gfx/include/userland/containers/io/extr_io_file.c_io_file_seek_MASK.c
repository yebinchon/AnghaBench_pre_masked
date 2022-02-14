
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef void* VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {void* status; TYPE_1__* module; } ;
typedef TYPE_2__ VC_CONTAINER_IO_T ;
struct TYPE_4__ {int * stream; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,long,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_IO_T *VAR_5, int64_t VAR_6)
{
   VC_CONTAINER_STATUS_T VAR_7 = VAR_4;
   int VAR_8;






   if (VAR_6 > (int64_t)VAR_1)
   {
      VAR_5->status = VAR_2;
      return VAR_2;
   }
   VAR_8 = FUNC_1(VAR_5->module->stream, (long)VAR_6, VAR_0);

   if(VAR_8)
   {
      if( FUNC_0(VAR_5->module->stream) ) VAR_7 = VAR_2;
      else VAR_7 = VAR_3;
   }

   VAR_5->status = VAR_7;
   return VAR_7;
}
