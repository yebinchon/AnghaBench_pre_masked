
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_4__ {int size; int * data; } ;
typedef TYPE_1__ VC_CONTAINER_PACKET_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,TYPE_1__*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1(VC_CONTAINER_T *VAR_3,
      VC_CONTAINER_TRACK_T *VAR_4,
      VC_CONTAINER_PACKET_T *VAR_5,
      uint32_t VAR_6)
{
   VC_CONTAINER_STATUS_T VAR_7;


   VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
   if (VAR_7 != VAR_2)
      return VAR_7;

   if (VAR_5 && !(VAR_6 & (VAR_1 | VAR_0)))
   {
      uint8_t *VAR_8, *VAR_9;


      VAR_5->size &= ~1;


      for (VAR_8 = VAR_5->data, VAR_9 = VAR_8 + VAR_5->size; VAR_8 < VAR_9; VAR_8 += 2)
      {
         uint8_t VAR_10 = VAR_8[0];
         VAR_8[0] = VAR_8[1];
         VAR_8[1] = VAR_10;
      }
   }

   return VAR_7;
}
