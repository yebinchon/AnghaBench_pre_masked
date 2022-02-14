
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int VC_PACKETIZER_T ;
typedef int VC_PACKETIZER_FLAGS_T ;
struct TYPE_16__ {size_t tracks_num; scalar_t__ position; TYPE_3__* priv; TYPE_2__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {size_t track; scalar_t__ dts; scalar_t__ pts; scalar_t__ size; int buffer_size; int data; } ;
typedef TYPE_5__ VC_CONTAINER_PACKET_T ;
struct TYPE_15__ {int packetizer_buffer; TYPE_5__ packetizer_packet; int packetizing; } ;
struct TYPE_14__ {TYPE_1__* priv; int is_enabled; } ;
struct TYPE_13__ {int * packetizer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_1 (int *,TYPE_5__**,int ) ;
 int FUNC_2 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_5__*,int) ;

VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_10, VC_CONTAINER_PACKET_T *VAR_11, uint32_t VAR_12 )
{
   VC_CONTAINER_STATUS_T VAR_13 = VAR_1;
   VC_PACKETIZER_FLAGS_T VAR_14 = 0;
   VC_PACKETIZER_T *VAR_15;
   uint32_t VAR_16 = VAR_12 & VAR_3;
   unsigned int VAR_17;

   if(!VAR_11 && !(VAR_12 & VAR_5))
      return VAR_2;
   if(!VAR_11 && (VAR_12 & VAR_4))
      return VAR_2;
   if(VAR_11 && !VAR_11->data && !(VAR_12 & (VAR_4 | VAR_5)))
      return VAR_2;
   if((VAR_12 & VAR_3) &&
      (!VAR_11 || VAR_11->track >= VAR_10->tracks_num || !VAR_10->tracks[VAR_11->track]->is_enabled))
      return VAR_2;


   if(!VAR_11)
      VAR_11 = &VAR_10->priv->packetizer_packet;


   if(!VAR_10->priv->packetizing)
   {
      VAR_13 = FUNC_0( VAR_10, VAR_11, VAR_12 );
      goto end;
   }

   if(VAR_12 & VAR_4)
      VAR_14 |= VAR_8;
   if(VAR_12 & VAR_5)
      VAR_14 |= VAR_9;



   for(VAR_17 = 0; VAR_17 < VAR_10->tracks_num; VAR_17++)
   {
      VC_PACKETIZER_T *VAR_18 = VAR_10->tracks[VAR_17]->priv->packetizer;
      if(!VAR_10->tracks[VAR_17]->is_enabled || !VAR_18 ||
         (VAR_16 && VAR_17 != VAR_11->track))
         continue;

      VAR_13 = FUNC_3(VAR_18, VAR_11, VAR_14);
      VAR_11->track = VAR_17;
      if(VAR_13 == VAR_6)
         break;
   }
   if(VAR_17 < VAR_10->tracks_num)
      goto end;


   while(1)
   {
      VC_CONTAINER_PACKET_T *VAR_19 = &VAR_10->priv->packetizer_packet;
      VAR_19->track = VAR_11->track;


      VAR_13 = FUNC_0( VAR_10, VAR_19, VAR_16|VAR_8 );
      if(VAR_13 != VAR_6)
         return VAR_13;

      if(!VAR_10->tracks[VAR_19->track]->priv->packetizer)
      {
         VAR_13 = FUNC_0( VAR_10, VAR_11, VAR_12 );
         break;
      }


      VAR_15 = VAR_10->tracks[VAR_19->track]->priv->packetizer;

      VAR_19->data = VAR_10->priv->packetizer_buffer;
      VAR_19->buffer_size = VAR_0;
      VAR_19->size = 0;
      VAR_13 = FUNC_0( VAR_10, VAR_19, VAR_16 );
      if(VAR_13 != VAR_6)
         return VAR_13;

      VAR_11->track = VAR_19->track;
      FUNC_2(VAR_15, VAR_19);
      FUNC_1(VAR_15, &VAR_19, VAR_7);

      VAR_13 = FUNC_3(VAR_15, VAR_11, VAR_14);
      if(VAR_13 == VAR_6)
         break;
   }

 end:
   if(VAR_13 != VAR_6)
      return VAR_13;

   if(VAR_11 && VAR_11->dts > VAR_10->position)
      VAR_10->position = VAR_11->dts;
   if(VAR_11 && VAR_11->pts > VAR_10->position)
      VAR_10->position = VAR_11->pts;

   return VAR_6;
}
