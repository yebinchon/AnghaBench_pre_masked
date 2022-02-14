
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int size; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {int tracks_add_done; int null; int moov_size; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_9__ {TYPE_3__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_2->priv->module;
   VC_CONTAINER_STATUS_T VAR_4 = VAR_1;
   if(VAR_3->tracks_add_done) return VAR_4;


   if(!FUNC_3(VAR_2, &VAR_3->null))
   {
      VAR_4 = FUNC_1(VAR_2, VAR_0);
      VAR_3->moov_size = FUNC_0(VAR_2);
      VAR_2->size = VAR_3->moov_size;
   }
   FUNC_2(VAR_2, &VAR_3->null);

   if(VAR_4 == VAR_1) VAR_3->tracks_add_done = 1;
   return VAR_4;
}
