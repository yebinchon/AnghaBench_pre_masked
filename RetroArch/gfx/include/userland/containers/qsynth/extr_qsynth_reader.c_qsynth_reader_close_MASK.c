
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int tracks_num; int * tracks; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {struct TYPE_10__* next; struct TYPE_10__* seg; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_8__ {TYPE_3__* module; } ;
typedef TYPE_3__ QSYNTH_SEGMENT_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   QSYNTH_SEGMENT_T *VAR_3 = VAR_2->seg;
   for(; VAR_1->tracks_num > 0; VAR_1->tracks_num--)
      FUNC_1(VAR_1, VAR_1->tracks[VAR_1->tracks_num-1]);
   while(VAR_3 != ((void*)0))
   {
      QSYNTH_SEGMENT_T *VAR_4 = VAR_3->next;
      FUNC_0(VAR_3);
      VAR_3 = VAR_4;
   }
   FUNC_0(VAR_2);
   return VAR_0;
}
