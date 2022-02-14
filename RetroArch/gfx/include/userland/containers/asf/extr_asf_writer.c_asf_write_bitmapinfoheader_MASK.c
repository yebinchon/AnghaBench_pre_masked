
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {TYPE_3__* format; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {int extradata_size; char* extradata; int codec; TYPE_2__* type; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_7__ {TYPE_1__ video; } ;


 int FUNC_0 (int *,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_1,
   VC_CONTAINER_TRACK_T *VAR_2 )
{
   uint32_t VAR_3;


   FUNC_3(VAR_1, VAR_2->format->type->video.width, "Encoded Image Width");
   FUNC_3(VAR_1, VAR_2->format->type->video.height, "Encoded Image Height");
   FUNC_4(VAR_1, 0, "Reserved Flags");
   FUNC_2(VAR_1, 40 + VAR_2->format->extradata_size, "Format Data Size");


   FUNC_3(VAR_1, 40 + VAR_2->format->extradata_size, "Format Data Size");
   FUNC_3(VAR_1, VAR_2->format->type->video.width, "Image Width");
   FUNC_3(VAR_1, VAR_2->format->type->video.height, "Image Height");
   FUNC_2(VAR_1, 0, "Reserved");
   FUNC_2(VAR_1, 0, "Bits Per Pixel Count");
   VAR_3 = FUNC_5(VAR_2->format->codec);
   FUNC_1(VAR_1, (char *)&VAR_3, 4);
   FUNC_0(VAR_1, "Compression ID: %4.4s", (char *)&VAR_3);
   FUNC_3(VAR_1, 0, "Image Size");
   FUNC_3(VAR_1, 0, "Horizontal Pixels Per Meter");
   FUNC_3(VAR_1, 0, "Vertical Pixels Per Meter");
   FUNC_3(VAR_1, 0, "Colors Used Count");
   FUNC_3(VAR_1, 0, "Important Colors Count");

   FUNC_1(VAR_1, VAR_2->format->extradata, VAR_2->format->extradata_size);

   return VAR_0;
}
