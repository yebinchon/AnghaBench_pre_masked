
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int VC_CONTAINER_STATUS_T ;
typedef scalar_t__ VC_CONTAINER_FOURCC_T ;
struct TYPE_7__ {scalar_t__ codec; int es_type; TYPE_2__* type; } ;
typedef TYPE_3__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_6__ {TYPE_1__ video; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

VC_CONTAINER_STATUS_T FUNC_3(uint8_t *VAR_5,
   unsigned int VAR_6, unsigned int *VAR_7, unsigned int *VAR_8,
   VC_CONTAINER_ES_FORMAT_T *VAR_9)
{
   VC_CONTAINER_FOURCC_T VAR_10;

   if(!VAR_5 || VAR_6 < VAR_0) return VAR_2;

   VAR_9->type->video.width = (VAR_5[7] << 24) | (VAR_5[6] << 16) | (VAR_5[5] << 8) | VAR_5[4];
   VAR_9->type->video.height = (VAR_5[11] << 24) | (VAR_5[10] << 16) | (VAR_5[9] << 8) | VAR_5[8];
   FUNC_1(&VAR_10, VAR_5 + 16, 4);

   VAR_9->es_type = VAR_3;
   VAR_9->codec = FUNC_2(VAR_10);


   if (VAR_9->codec == VAR_10 && (VAR_10 = FUNC_0(VAR_10)) != VAR_1)
      VAR_9->codec = VAR_10;

   if(VAR_7) *VAR_7 = VAR_0;
   if(VAR_8)
   {
      if (VAR_6 > VAR_0)
         *VAR_8 = VAR_6 - VAR_0;
      else
         *VAR_8 = 0;
   }

   return VAR_4;
}
