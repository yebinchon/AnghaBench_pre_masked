
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct rpng_process {scalar_t__ stream; TYPE_2__* stream_backend; struct rpng_process* inflate_buf; int inflate_initialized; } ;
struct TYPE_8__ {unsigned int width; unsigned int height; } ;
struct TYPE_10__ {struct rpng_process* process; TYPE_1__ ihdr; } ;
typedef TYPE_3__ rpng_t ;
struct TYPE_9__ {int (* stream_free ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpng_process*) ;
 int FUNC_1 (TYPE_3__*,int **) ;
 int FUNC_2 (TYPE_3__*,int **) ;
 struct rpng_process* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(rpng_t *VAR_2,
      void **VAR_3, size_t VAR_4, unsigned *VAR_5, unsigned *VAR_6)
{
   uint32_t **VAR_7 = (uint32_t**)VAR_3;

   (void)VAR_4;

   if (!VAR_2->process)
   {
      struct rpng_process *VAR_8 = FUNC_3(VAR_2);

      if (!VAR_8)
         goto error;

      VAR_2->process = VAR_8;
      return VAR_1;
   }

   if (!VAR_2->process->inflate_initialized)
   {
      if (FUNC_2(VAR_2, VAR_7) == -1)
         goto error;
      return VAR_1;
   }

   *VAR_5 = VAR_2->ihdr.width;
   *VAR_6 = VAR_2->ihdr.height;

   return FUNC_1(VAR_2, VAR_7);

error:
   if (VAR_2->process)
   {
      if (VAR_2->process->inflate_buf)
         FUNC_0(VAR_2->process->inflate_buf);
      if (VAR_2->process->stream)
         VAR_2->process->stream_backend->stream_free(VAR_2->process->stream);
      FUNC_0(VAR_2->process);
   }
   return VAR_0;
}
