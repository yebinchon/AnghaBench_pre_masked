
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {int uri_parts; int (* pf_close ) (TYPE_3__*) ;TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_IO_T ;
struct TYPE_12__ {TYPE_3__* mem; scalar_t__ dirty; } ;
struct TYPE_10__ {unsigned int cached_areas_num; TYPE_1__* cached_areas; TYPE_6__ caches; scalar_t__ caches_num; scalar_t__ async_io; } ;
struct TYPE_9__ {TYPE_3__* mem; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_6__*,int) ;
 int FUNC_4 (int ) ;

VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_IO_T *VAR_1 )
{
   unsigned int VAR_2;

   if(VAR_1)
   {
      if(VAR_1->priv)
      {
         if(VAR_1->priv->caches_num)
         {
            if(VAR_1->priv->caches.dirty)
               FUNC_3( VAR_1, &VAR_1->priv->caches, 1 );
         }

         if(VAR_1->priv->async_io)
            FUNC_0( VAR_1->priv->async_io );
         else if(VAR_1->priv->caches_num)
            FUNC_1(VAR_1->priv->caches.mem);

         for(VAR_2 = 0; VAR_2 < VAR_1->priv->cached_areas_num; VAR_2++)
            FUNC_1(VAR_1->priv->cached_areas[VAR_2].mem);

         if(VAR_1->pf_close)
            VAR_1->pf_close(VAR_1);
      }
      FUNC_4(VAR_1->uri_parts);
      FUNC_1(VAR_1);
   }
   return VAR_0;
}
