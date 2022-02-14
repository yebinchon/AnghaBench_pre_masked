
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
struct TYPE_9__ {scalar_t__ frame_read; scalar_t__ data_len; scalar_t__ data; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_7__ {TYPE_3__* module; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_4(VC_CONTAINER_T *VAR_0, uint32_t VAR_1, uint8_t *VAR_2)
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_0->priv->module;
   uint32_t VAR_4 = 0;



   if(VAR_3->frame_read < VAR_3->data_len)
   {
      uint32_t VAR_5 = FUNC_0(VAR_1, VAR_3->data_len - VAR_3->frame_read);
      if(VAR_2)
      {
         FUNC_3(VAR_2, VAR_3->data + VAR_3->frame_read, VAR_5);
         VAR_2 += VAR_5;
      }
      VAR_4 += VAR_5;
      VAR_1 -= VAR_5;
   }


   if(VAR_1 > 0)
   {
      if(VAR_2)
         VAR_4 += FUNC_1(VAR_0, VAR_2, VAR_1);
      else
         VAR_4 += FUNC_2(VAR_0, VAR_1);
   }

   VAR_3->frame_read += VAR_4;
   return VAR_4;
}
