
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* data; } ;
struct TYPE_9__ {struct TYPE_9__* process; struct TYPE_9__* stream; TYPE_1__* stream_backend; struct TYPE_9__* inflate_buf; TYPE_2__ idat_buf; } ;
typedef TYPE_3__ rpng_t ;
struct TYPE_7__ {int (* stream_free ) (TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(rpng_t *VAR_0)
{
   if (!VAR_0)
      return;

   if (VAR_0->idat_buf.data)
      FUNC_0(VAR_0->idat_buf.data);
   if (VAR_0->process)
   {
      if (VAR_0->process->inflate_buf)
         FUNC_0(VAR_0->process->inflate_buf);
      if (VAR_0->process->stream)
      {
         if (VAR_0->process->stream_backend && VAR_0->process->stream_backend->stream_free)
            VAR_0->process->stream_backend->stream_free(VAR_0->process->stream);
         else
            FUNC_0(VAR_0->process->stream);
      }
      FUNC_0(VAR_0->process);
   }

   FUNC_0(VAR_0);
}
