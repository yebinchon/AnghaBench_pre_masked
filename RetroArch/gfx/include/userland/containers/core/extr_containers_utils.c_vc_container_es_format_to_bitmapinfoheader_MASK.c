
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int extradata_size; scalar_t__ es_type; scalar_t__* extradata; TYPE_2__* type; int codec; } ;
typedef TYPE_3__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_6__ {TYPE_1__ video; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int*,scalar_t__*,int) ;
 int FUNC_2 (int*,int ,int) ;

unsigned int FUNC_3(VC_CONTAINER_ES_FORMAT_T *VAR_3,
                                                        uint8_t *VAR_4, unsigned int VAR_5)
{
   uint32_t VAR_6 = FUNC_0(VAR_3->codec);
   uint32_t VAR_7 = VAR_0 + VAR_3->extradata_size;

   if(VAR_3->es_type != VAR_2 ||
      VAR_6 == VAR_1) return 0;

   if(!VAR_4) return VAR_7;
   if(VAR_5 < VAR_7) return 0;


   FUNC_2(VAR_4, 0, VAR_0);
   VAR_4[0] = (VAR_7 >> 0) & 0xFF;
   VAR_4[1] = (VAR_7 >> 8) & 0xFF;
   VAR_4[2] = (VAR_7 >> 16) & 0xFF;
   VAR_4[3] = (VAR_7 >> 24) & 0xFF;
   VAR_4[4] = (VAR_3->type->video.width >> 0) & 0xFF;
   VAR_4[5] = (VAR_3->type->video.width >> 8) & 0xFF;
   VAR_4[6] = (VAR_3->type->video.width >> 16) & 0xFF;
   VAR_4[7] = (VAR_3->type->video.width >> 24) & 0xFF;
   VAR_4[8] = (VAR_3->type->video.height >> 0) & 0xFF;
   VAR_4[9] = (VAR_3->type->video.height >> 8) & 0xFF;
   VAR_4[10] = (VAR_3->type->video.height >> 16) & 0xFF;
   VAR_4[11] = (VAR_3->type->video.height >> 24) & 0xFF;
   FUNC_1(VAR_4 + 16, &VAR_6, 4);
   FUNC_1(VAR_4 + VAR_0, VAR_3->extradata, VAR_3->extradata_size);
   return VAR_7;
}
