
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_18__ {TYPE_2__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_19__ {unsigned int tracks_num; TYPE_5__** tracks; TYPE_4__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_16__ {int start; } ;
struct TYPE_20__ {TYPE_3__ packet_state; int data_offset; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_17__ {TYPE_7__* module; } ;
struct TYPE_15__ {TYPE_1__* module; } ;
struct TYPE_14__ {TYPE_3__* p_packet_state; } ;


 int FUNC_0 (TYPE_6__*,char*) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_0, int64_t VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_0->priv->module;
   unsigned int VAR_3;
   FUNC_5(VAR_1);

   FUNC_0(VAR_0, "File ID");
   FUNC_2(VAR_0, "Total Data Packets");
   FUNC_1(VAR_0, "Reserved");
   VAR_2->data_offset = FUNC_3(VAR_0);


   VAR_2->packet_state.start = VAR_2->data_offset;
   for(VAR_3 = 0; VAR_3 < VAR_0->tracks_num; VAR_3++)
   {
      VC_CONTAINER_TRACK_T *VAR_4 = VAR_0->tracks[VAR_3];
      VAR_4->priv->module->p_packet_state = &VAR_2->packet_state;
   }

   return FUNC_4(VAR_0);
}
