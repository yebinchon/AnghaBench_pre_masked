
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; TYPE_1__* module; } ;
typedef TYPE_2__ VC_CONTAINER_IO_T ;
struct TYPE_4__ {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (void*,int,size_t,int ) ;

__attribute__((used)) static size_t FUNC_2(VC_CONTAINER_IO_T *VAR_2, void *VAR_3, size_t VAR_4)
{
   size_t VAR_5 = FUNC_1(VAR_3, 1, VAR_4, VAR_2->module->stream);
   if(VAR_5 != VAR_4)
   {

      if( ((int)VAR_5) < 0 ) VAR_5 = 0;

      if( FUNC_0(VAR_2->module->stream) ) VAR_2->status = VAR_0;
      else VAR_2->status = VAR_1;
   }
   return VAR_5;
}
