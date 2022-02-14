
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {scalar_t__ refcount; int * io; } ;
typedef TYPE_2__ VC_CONTAINER_WRITER_EXTRAIO_T ;
struct TYPE_8__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_IO_T ;
struct TYPE_6__ {int * io; } ;



int64_t FUNC_0(VC_CONTAINER_T *VAR_0, VC_CONTAINER_WRITER_EXTRAIO_T *VAR_1)
{
   VC_CONTAINER_IO_T *VAR_2;

   if(VAR_1->refcount)
   {
      VAR_1->refcount--;
      if(!VAR_1->refcount)
      {
         VAR_2 = VAR_0->priv->io;
         VAR_0->priv->io = VAR_1->io;
         VAR_1->io = VAR_2;
      }
   }
   return VAR_1->refcount;
}
