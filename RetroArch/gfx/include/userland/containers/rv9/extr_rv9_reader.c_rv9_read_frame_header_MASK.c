
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {int len; int num_segments; void* flags; void* sequence; void* timestamp; } ;
struct TYPE_10__ {int* data; int data_len; int frame_len; int type; TYPE_2__ hdr; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_7__ {TYPE_4__* module; } ;


 void* FUNC_0 (int*) ;
 void* FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3(VC_CONTAINER_T *VAR_5)
{
   VC_CONTAINER_MODULE_T *VAR_6 = VAR_5->priv->module;
   uint32_t VAR_7 = (uint32_t) -1;
   uint8_t *VAR_8 = VAR_6->data + VAR_0;

   if(FUNC_2(VAR_5, VAR_6->data, VAR_0) != VAR_0) return VAR_2;
   VAR_6->data_len = VAR_0;

   VAR_6->hdr.len = FUNC_1(VAR_6->data);
   VAR_6->hdr.timestamp = FUNC_1(VAR_6->data+4);
   VAR_6->hdr.sequence = FUNC_0(VAR_6->data+8);
   VAR_6->hdr.flags = FUNC_0(VAR_6->data+10);
   VAR_6->hdr.num_segments = FUNC_1(VAR_6->data+16);

   VAR_6->frame_len = VAR_0 + (VAR_6->hdr.num_segments * 8) + VAR_6->hdr.len;





   if(VAR_6->hdr.num_segments <= VAR_1)
   {
      uint32_t VAR_9;

      if(FUNC_2(VAR_5, VAR_8, 8*VAR_6->hdr.num_segments) != 8*VAR_6->hdr.num_segments) return VAR_2;
      VAR_6->data_len += (VAR_6->hdr.num_segments * 8);

      for (VAR_9=0; VAR_9<VAR_6->hdr.num_segments; VAR_9++)
      {
         uint32_t VAR_10;
         uint32_t VAR_11;

         VAR_10 = FUNC_1(VAR_8);
         VAR_11 = FUNC_1(VAR_8+4);

         if (VAR_10 && VAR_7 > VAR_11)
            VAR_7 = VAR_11;


         if(VAR_10 > 1) return VAR_3;

         VAR_8 += 8;
      }
   }

   if(VAR_7 == 0)
   {
      if (FUNC_2(VAR_5, VAR_8, 1) != 1) return VAR_2;
      VAR_6->data_len += 1;

      VAR_6->type = (*VAR_8 >> 5) & 3;
   }
   else
      VAR_6->type = (uint8_t) -1;

   return VAR_4;
}
