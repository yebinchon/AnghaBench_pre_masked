
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef long long int64_t ;
typedef int dummy ;
struct TYPE_18__ {long long duration; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_19__ {TYPE_5__* track; int extradata; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_20__ {int num_frames; int constant_c5; int constant_4; int constant_c; int framerate; int struct_b; } ;
struct TYPE_17__ {TYPE_4__* format; } ;
struct TYPE_16__ {int extradata_size; TYPE_3__* type; int extradata; } ;
struct TYPE_14__ {int frame_rate_num; int frame_rate_den; void* width; void* height; } ;
struct TYPE_15__ {TYPE_2__ video; } ;
struct TYPE_13__ {TYPE_7__* module; } ;
typedef TYPE_8__ RCV_FILE_HEADER_T ;


 int FUNC_0 (int*) ;
 void* FUNC_1 (int*) ;
 int FUNC_2 (TYPE_6__*,int*,int) ;
 int FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6(VC_CONTAINER_T *VAR_2)
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_2->priv->module;
   RCV_FILE_HEADER_T VAR_4;
   uint8_t VAR_5[36];

   if(FUNC_2(VAR_2, VAR_5, sizeof(VAR_5)) != sizeof(VAR_5)) return VAR_0;

   VAR_4.num_frames = FUNC_0(VAR_5);
   VAR_4.constant_c5 = VAR_5[3];
   VAR_4.constant_4 = FUNC_1(VAR_5+4);


   FUNC_5(VAR_3->extradata, VAR_5+8, 4);
   VAR_3->track->format->extradata = VAR_3->extradata;
   VAR_3->track->format->extradata_size = 4;

   VAR_3->track->format->type->video.height = FUNC_1(VAR_5+12);
   VAR_3->track->format->type->video.width = FUNC_1(VAR_5+16);

   VAR_4.constant_c = FUNC_1(VAR_5+20);
   FUNC_5(VAR_4.struct_b, VAR_5+24, 8);
   VAR_4.framerate = FUNC_1(VAR_5+32);

   if(VAR_4.constant_c5 != 0xc5 || VAR_4.constant_4 != 0x4 || VAR_4.constant_c != 0xc)
      return VAR_1;

   if(VAR_4.framerate != 0 && VAR_4.framerate != 0xffffffffUL)
   {
      VAR_3->track->format->type->video.frame_rate_num = VAR_4.framerate;
      VAR_3->track->format->type->video.frame_rate_den = 1;
   }


   if(VAR_4.num_frames != (1<<24)-1 && VAR_4.framerate != 0 && VAR_4.framerate != 0xffffffffUL)
      VAR_2->duration = ((int64_t) VAR_4.num_frames * 1000000LL) / (int64_t) VAR_4.framerate;


   FUNC_3(VAR_2, sizeof(VAR_5));

   return FUNC_4(VAR_2);
}
