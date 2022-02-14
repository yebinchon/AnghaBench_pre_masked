
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
typedef float int16_t ;
struct TYPE_21__ {unsigned int length; int flags; scalar_t__ offset; scalar_t__ data; } ;
struct TYPE_20__ {int queue; } ;
struct TYPE_19__ {TYPE_1__* priv; } ;
struct TYPE_18__ {TYPE_4__* format; TYPE_6__* component; } ;
struct TYPE_17__ {scalar_t__ encoding; TYPE_3__* es; } ;
struct TYPE_15__ {int bits_per_sample; } ;
struct TYPE_16__ {TYPE_2__ audio; } ;
struct TYPE_14__ {TYPE_7__* module; } ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;
typedef TYPE_7__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_8__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__,unsigned int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_8__*) ;
 TYPE_8__* FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_8__*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7( void *VAR_3, uint8_t *VAR_4, int VAR_5 )
{
   MMAL_PORT_T *VAR_6 = (MMAL_PORT_T *)VAR_3;
   MMAL_COMPONENT_T *VAR_7 = VAR_6->component;
   MMAL_COMPONENT_MODULE_T *VAR_8 = VAR_7->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_9;
   unsigned int VAR_10, VAR_11;

   while (VAR_5 > 0)
   {
      VAR_9 = FUNC_4(VAR_8->queue);
      if (!VAR_9)
      {
         FUNC_0("audio underrun");
         return;
      }

      if (VAR_6->format->encoding == VAR_2 &&
          VAR_6->format->es->audio.bits_per_sample == 16)
      {
         VAR_11 = VAR_9->length;
         if (VAR_11 > (unsigned int)VAR_5) VAR_11 = VAR_5;
         FUNC_1(VAR_4, VAR_9->data + VAR_9->offset, VAR_11);
         VAR_9->offset += VAR_11;
         VAR_9->length -= VAR_11;
         VAR_4 += VAR_11;
         VAR_5 -= VAR_11;
      }
      else if (VAR_6->format->es->audio.bits_per_sample == 32)
      {
         VAR_11 = VAR_9->length;
         if (VAR_11 > 2 * (unsigned int)VAR_5) VAR_11 = 2 * VAR_5;
         FUNC_6(!(VAR_11&0x3));

         if (VAR_6->format->encoding == VAR_1)
         {
            float *VAR_12 = (float *)(VAR_9->data + VAR_9->offset);
            int16_t *VAR_13 = (int16_t *)VAR_4;
            for (VAR_10 = 0; VAR_10 < VAR_11 / 4; VAR_10++)
            {
               if (*VAR_12 >= 1.0) *VAR_13 = 32767;
               else if (*VAR_12 < -1.0) *VAR_13 = -32768;
               else *VAR_13 = *VAR_12 * 32768.0;
               VAR_12++; VAR_13++;
            }
         }
         else if (VAR_6->format->encoding == VAR_2)
         {
            int32_t *VAR_14 = (int32_t *)(VAR_9->data + VAR_9->offset);
            int16_t *VAR_15 = (int16_t *)VAR_4;
            for (VAR_10 = 0; VAR_10 < VAR_11 / 4; VAR_10++)
               *VAR_15++ = (*VAR_14++) >> 16;
         }
         VAR_9->offset += VAR_11;
         VAR_9->length -= VAR_11;
         VAR_4 += VAR_11 / 2;
         VAR_5 -= VAR_11 / 2;
      }

      if (VAR_9->length)
      {

         FUNC_5(VAR_8->queue, VAR_9);
         continue;
      }


      if (VAR_9->flags & VAR_0)
         FUNC_2(VAR_6);

      VAR_9->offset = 0;
      FUNC_3(VAR_6, VAR_9);
   }
}
