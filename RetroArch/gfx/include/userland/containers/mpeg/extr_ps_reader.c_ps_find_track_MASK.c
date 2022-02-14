
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
struct TYPE_13__ {unsigned int tracks_num; TYPE_3__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
struct TYPE_11__ {TYPE_1__* module; } ;
struct TYPE_10__ {scalar_t__ stream_id; scalar_t__ substream_id; } ;


 int FUNC_0 (TYPE_4__*,char*,scalar_t__) ;
 unsigned int VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int) ;

__attribute__((used)) static VC_CONTAINER_TRACK_T *FUNC_2( VC_CONTAINER_T *VAR_1, uint32_t VAR_2,
   uint32_t VAR_3, bool VAR_4 )
{
   VC_CONTAINER_TRACK_T *VAR_5 = 0;
   unsigned int VAR_6;

   for(VAR_6 = 0; VAR_6 < VAR_1->tracks_num; VAR_6++)
      if(VAR_1->tracks[VAR_6]->priv->module->stream_id == VAR_2 &&
         VAR_1->tracks[VAR_6]->priv->module->substream_id == VAR_3) break;

   if(VAR_6 < VAR_1->tracks_num)
      VAR_5 = VAR_1->tracks[VAR_6];

   if(!VAR_5 && VAR_4 && VAR_6 < VAR_0)
   {

      VAR_1->tracks[VAR_6] = VAR_5 =
         FUNC_1(VAR_1, sizeof(*VAR_1->tracks[0]->priv->module));
      if(VAR_5)
      {
         VAR_5->priv->module->stream_id = VAR_2;
         VAR_5->priv->module->substream_id = VAR_3;
         VAR_1->tracks_num++;
      }
   }

   if(!VAR_5 && VAR_4)
      FUNC_0(VAR_1, "could not create track for stream id: %i", VAR_2);

   return VAR_5;
}
