
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_3__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ QSYNTH_SEGMENT_T ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__*,int *,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1(QSYNTH_SEGMENT_T *VAR_1,
                                               uint32_t *VAR_2, int64_t *VAR_3,
                                               uint32_t *VAR_4, uint32_t *VAR_5)
{
   uint32_t VAR_6 = 0;
   uint32_t VAR_7 = 8;
   uint8_t VAR_8 = 0;

   *VAR_3 = 0LL;
   *VAR_5 = 0;

   while(VAR_7 < VAR_1->len)
   {
      VC_CONTAINER_STATUS_T VAR_9;
      uint32_t VAR_10, VAR_11 = 0, VAR_12 = 0, VAR_13;
      if((VAR_9 = FUNC_0(VAR_1->data+VAR_7, &VAR_13, &VAR_8, &VAR_10, &VAR_11, &VAR_12)) != VAR_0)
         return VAR_9;

      VAR_7 += VAR_13;
      VAR_6 += VAR_10;

      if(VAR_11 != 0)
      {
         *VAR_3 += ((int64_t) (VAR_6 - *VAR_5)) * (*VAR_4);
         *VAR_4 = VAR_11;
         *VAR_5 = VAR_6;
      }

      if(VAR_12)
         break;
   }

   *VAR_2 = VAR_6;
   return VAR_0;
}
