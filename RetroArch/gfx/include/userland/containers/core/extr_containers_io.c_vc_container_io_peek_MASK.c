
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {int capabilities; size_t (* pf_read ) (TYPE_2__*,void*,size_t) ;int offset; int (* pf_seek ) (TYPE_2__*,int ) ;TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_IO_T ;
struct TYPE_8__ {scalar_t__ cache; } ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_2__*,void*,size_t) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 size_t FUNC_2 (TYPE_2__*,void*,size_t) ;
 int FUNC_3 (TYPE_2__*,int ) ;

size_t FUNC_4(VC_CONTAINER_IO_T *VAR_1, void *VAR_2, size_t VAR_3)
{
   size_t VAR_4;

   if(VAR_1->priv->cache)
   {

      int64_t VAR_5 = VAR_1->offset;
      VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
      FUNC_3(VAR_1, VAR_5);
      return VAR_4;
   }

   if (VAR_1->capabilities & VAR_0)
      return 0;

   VAR_4 = VAR_1->pf_read(VAR_1, VAR_2, VAR_3);
   VAR_1->pf_seek(VAR_1, VAR_1->offset);
   return VAR_4;
}
