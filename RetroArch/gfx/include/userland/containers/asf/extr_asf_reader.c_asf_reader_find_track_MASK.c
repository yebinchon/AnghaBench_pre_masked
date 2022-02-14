
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
struct TYPE_16__ {unsigned int tracks_num; TYPE_4__** tracks; TYPE_1__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
struct TYPE_17__ {unsigned int* stream_number_to_index; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
struct TYPE_14__ {TYPE_2__* module; } ;
struct TYPE_13__ {unsigned int stream_id; } ;
struct TYPE_12__ {TYPE_6__* module; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_5__*,char*,unsigned int) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int) ;

__attribute__((used)) static VC_CONTAINER_TRACK_T *FUNC_2( VC_CONTAINER_T *VAR_1, unsigned int VAR_2,
   bool VAR_3)
{
   VC_CONTAINER_TRACK_T *VAR_4 = 0;
   VC_CONTAINER_MODULE_T * VAR_5 = VAR_1->priv->module;
   unsigned int VAR_6;


   VAR_2 &= 0x7f;


   VAR_6 = VAR_5->stream_number_to_index[VAR_2];

   if(VAR_6 < VAR_1->tracks_num)
      VAR_4 = VAR_1->tracks[VAR_6];

   if(!VAR_4 && VAR_3 && VAR_1->tracks_num < VAR_0)
   {

      VAR_1->tracks[VAR_1->tracks_num] = VAR_4 =
         FUNC_1(VAR_1, sizeof(*VAR_1->tracks[0]->priv->module));
      if(VAR_4)
      {

         VAR_4->priv->module->stream_id = VAR_2;


         VAR_5->stream_number_to_index[VAR_2] = VAR_1->tracks_num;


         VAR_1->tracks_num++;
      }
   }

   if(!VAR_4 && VAR_3)
      FUNC_0(VAR_1, "could not create track for stream id: %i", VAR_2);

   return VAR_4;
}
