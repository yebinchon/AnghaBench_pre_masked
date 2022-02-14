
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_5__* out; TYPE_2__* in; TYPE_1__* priv; } ;
typedef TYPE_3__ VC_PACKETIZER_T ;
struct TYPE_10__ {int length_size; } ;
typedef TYPE_4__ VC_PACKETIZER_MODULE_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {int* extradata; unsigned int extradata_size; } ;
struct TYPE_8__ {int* extradata; int extradata_size; } ;
struct TYPE_7__ {TYPE_4__* module; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*,int*,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_PACKETIZER_T *VAR_2 )
{
   VC_PACKETIZER_MODULE_T *VAR_3 = VAR_2->priv->module;
   VC_CONTAINER_STATUS_T VAR_4;
   uint8_t *VAR_5, *VAR_6 = VAR_2->in->extradata + 5;
   uint8_t *VAR_7 = VAR_6 + VAR_2->in->extradata_size - 5;
   unsigned int VAR_8, VAR_9, VAR_10, VAR_11 = 0;

   if (VAR_2->in->extradata_size <= 5 ||
       VAR_2->in->extradata[0] != 1 )
      return VAR_0;

   VAR_4 = FUNC_1(VAR_2->out, VAR_2->in->extradata_size);
   if (VAR_4 != VAR_1)
      return VAR_4;

   VAR_5 = VAR_2->out->extradata;
   VAR_3->length_size = (*(VAR_2->in->extradata + 4) & 0x3) + 1;

   for (VAR_8 = 0; VAR_8 < 2 && VAR_6 < VAR_7 - 1; VAR_8++)
   {
      VAR_9 = *(VAR_6++) & (!VAR_8 ? 0x1F : 0xFF);
      for (; VAR_9 > 0 && VAR_6 < VAR_7 - 2; VAR_9--)
      {
         VAR_10 = (VAR_6[0] << 8) | VAR_6[1]; VAR_6 += 2;
         if (VAR_6 + VAR_10 > VAR_7)
         {
            VAR_6 = VAR_7;
            break;
         }

         VAR_5[0] = VAR_5[1] = VAR_5[2] = 0; VAR_5[3] = 1;
         FUNC_0(VAR_5 + 4, VAR_6, VAR_10);
         VAR_5 += VAR_10 + 4; VAR_6 += VAR_10;
         VAR_11 += VAR_10 + 4;
      }
   }

   VAR_2->out->extradata_size = VAR_11;
   return VAR_1;
}
