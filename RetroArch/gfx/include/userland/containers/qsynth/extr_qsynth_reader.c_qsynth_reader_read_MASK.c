
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ current_time ;
struct TYPE_10__ {int duration; TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {int size; int dts; int pts; int buffer_size; char* data; int flags; scalar_t__ track; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
struct TYPE_12__ {int sent; int timestamp; int seek; TYPE_2__* pass; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_9__ {int len; int data; struct TYPE_9__* next; } ;
struct TYPE_8__ {TYPE_5__* module; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_8,
                                              VC_CONTAINER_PACKET_T *VAR_9,
                                              uint32_t VAR_10 )
{
   VC_CONTAINER_MODULE_T *VAR_11 = VAR_8->priv->module;

   if(VAR_11->pass)
   {
      VAR_9->size = VAR_11->pass->len - VAR_11->sent;
      VAR_9->dts = VAR_9->pts = 0;
      VAR_9->track = 0;
      VAR_9->flags = VAR_11->sent ? 0 : VAR_4;
   }
   else
   {
      if(VAR_11->timestamp > VAR_8->duration)
         return VAR_1;

      VAR_9->size = 5;
      VAR_9->dts = VAR_9->pts = VAR_11->timestamp;
      VAR_9->track = 0;
      VAR_9->flags = VAR_2;
   }

   if(VAR_10 & VAR_6)
   {
      if(VAR_11->pass)
      {
         VAR_11->pass = VAR_11->pass->next;
         VAR_11->sent = 0;
      }
      else
      {

         VAR_11->seek = 1;
         VAR_11->timestamp += 40;
      }

      return VAR_7;
   }

   if(VAR_10 & VAR_5)
      return VAR_7;


   if(VAR_11->pass)
   {
      uint32_t VAR_12 = FUNC_0(VAR_9->size, VAR_9->buffer_size);
      FUNC_1(VAR_9->data, VAR_11->pass->data + VAR_11->sent, VAR_12);
      VAR_9->size = VAR_12;

      if((VAR_11->sent += VAR_12) == VAR_11->pass->len)
      {
         VAR_11->pass = VAR_11->pass->next;
         VAR_11->sent = 0;
         VAR_9->flags |= VAR_3;
      }
   }
   else
   {
      if(VAR_9->buffer_size < VAR_9->size)
         return VAR_0;

      if(VAR_11->seek)
      {
         uint32_t VAR_13 = VAR_11->timestamp / 1000;

         VAR_9->data[0] = 'S';
         VAR_9->data[1] = (uint8_t)((VAR_13 >> 24) & 0xFF);
         VAR_9->data[2] = (uint8_t)((VAR_13 >> 16) & 0xFF);
         VAR_9->data[3] = (uint8_t)((VAR_13 >> 8) & 0xFF);
         VAR_9->data[4] = (uint8_t)((VAR_13 ) & 0xFF);
         VAR_11->seek = 0;
      }
      else
      {
         VAR_9->data[0] = 'P';
         VAR_9->data[1] = 0;
         VAR_9->data[2] = 0;
         VAR_9->data[3] = 0;
         VAR_9->data[4] = 40;
         VAR_11->timestamp += 40 * 1000;
      }
   }

   return VAR_7;
}
