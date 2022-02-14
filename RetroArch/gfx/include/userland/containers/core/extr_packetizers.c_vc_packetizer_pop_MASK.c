
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
typedef int VC_PACKETIZER_FLAGS_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {scalar_t__ size; int * data; struct TYPE_13__* next; struct TYPE_13__* framework_data; } ;
typedef TYPE_3__ VC_CONTAINER_PACKET_T ;
struct TYPE_14__ {TYPE_3__* current; TYPE_3__** last; TYPE_3__* first; } ;
typedef TYPE_4__ VC_CONTAINER_BYTESTREAM_T ;
struct TYPE_11__ {TYPE_4__ stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,scalar_t__) ;

VC_CONTAINER_STATUS_T FUNC_4( VC_PACKETIZER_T *VAR_4,
   VC_CONTAINER_PACKET_T **VAR_5, VC_PACKETIZER_FLAGS_T VAR_6)
{
   VC_CONTAINER_BYTESTREAM_T *VAR_7 = &VAR_4->priv->stream;
   VC_CONTAINER_PACKET_T *VAR_8, *VAR_9, **VAR_10;


   while((*VAR_5 = FUNC_0(VAR_7)) != ((void*)0))
   {
      if(*VAR_5 && (*VAR_5)->framework_data)
      {
         FUNC_1(*VAR_5);
         continue;
      }

      if(*VAR_5)
         return VAR_2;
   }

   if(!(VAR_6 & VAR_3))
      return VAR_0;


   for (VAR_8 = VAR_7->first, VAR_10 = &VAR_7->first;
        VAR_8 && VAR_8->framework_data; VAR_10 = &VAR_8->next, VAR_8 = VAR_8->next);

   if (!VAR_8 || (VAR_8 && VAR_8->framework_data))
      return VAR_0;




   VAR_9 = FUNC_2(sizeof(*VAR_8) + VAR_8->size);
   if(!VAR_9)
      return VAR_1;

   *VAR_9 = *VAR_8;
   VAR_9->framework_data = VAR_9;
   if(!VAR_9->next)
      VAR_7->last = &VAR_9->next;
   if(VAR_7->current == VAR_8)
      VAR_7->current = VAR_9;
   *VAR_10 = VAR_9;
   VAR_9->data = (uint8_t *)&VAR_9[1];
   FUNC_3(VAR_9->data, VAR_8->data, VAR_8->size);
   *VAR_5 = VAR_8;

   return VAR_2;
}
