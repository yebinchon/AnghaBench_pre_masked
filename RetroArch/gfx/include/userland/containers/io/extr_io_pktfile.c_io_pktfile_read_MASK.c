
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int length ;
struct TYPE_4__ {void* status; TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_5__ {int stream; int is_native_order; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (void*,int,size_t,int ) ;
 int FUNC_2 (int ,long,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static size_t FUNC_5(VC_CONTAINER_IO_T *VAR_3, void *VAR_4, size_t VAR_5)
{
   VC_CONTAINER_IO_MODULE_T *VAR_6 = VAR_3->module;
   uint32_t VAR_7 = 0;
   size_t VAR_8;

   VAR_8 = FUNC_1(&VAR_7, 1, sizeof(VAR_7), VAR_6->stream);
   if (VAR_8 != sizeof(VAR_7))
   {
      if( FUNC_0(VAR_6->stream) ) VAR_3->status = VAR_1;
      else VAR_3->status = VAR_2;
      return 0;
   }

   if (!VAR_6->is_native_order)
      VAR_7 = FUNC_3(VAR_7);

   if (VAR_7 > 1<<20)
   {
      VAR_3->status = VAR_2;
      return 0;
   }

   if (VAR_5 > VAR_7)
      VAR_5 = VAR_7;
   VAR_8 = FUNC_1(VAR_4, 1, VAR_5, VAR_6->stream);
   if(VAR_8 != VAR_5)
   {
      if( FUNC_0(VAR_6->stream) ) VAR_3->status = VAR_1;
      else VAR_3->status = VAR_2;
   }
   else if (VAR_7 > VAR_5)
   {

      VAR_7 -= VAR_5;
      FUNC_4((long)VAR_7 > 0);
      FUNC_2(VAR_6->stream, (long)VAR_7, VAR_0);
   }

   return VAR_8;
}
