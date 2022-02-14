
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_13__ {TYPE_5__* format; TYPE_4__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {scalar_t__ codec; char* extradata; int extradata_size; TYPE_2__* type; } ;
struct TYPE_11__ {TYPE_3__* module; } ;
struct TYPE_10__ {char* extradata; } ;
struct TYPE_8__ {void* height; void* width; } ;
struct TYPE_9__ {TYPE_1__ video; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*,int) ;
 int FUNC_1 (int *,int,char*) ;
 void* FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_10( VC_CONTAINER_T *VAR_4,
   VC_CONTAINER_TRACK_T *VAR_5, int64_t VAR_6 )
{
   uint32_t VAR_7, VAR_8;
   uint32_t VAR_9;


   if(VAR_6 < 40 + 11) return VAR_2;


   FUNC_4(VAR_4, VAR_6, "Encoded Image Width");
   FUNC_4(VAR_4, VAR_6, "Encoded Image Height");
   FUNC_5(VAR_4, VAR_6, "Reserved Flags");
   VAR_8 = FUNC_1(VAR_4, VAR_6, "Format Data Size");


   if(VAR_8 < 40 || VAR_6 < VAR_8) return VAR_2;
   VAR_7 = FUNC_2(VAR_4, VAR_6, "Format Data Size");
   if(VAR_7 < 40 || VAR_7 > VAR_8) return VAR_2;


   VAR_5->format->type->video.width = FUNC_2(VAR_4, VAR_6, "Image Width");
   VAR_5->format->type->video.height = FUNC_2(VAR_4, VAR_6, "Image Height");
   FUNC_3(VAR_4, VAR_6, "Reserved");
   FUNC_3(VAR_4, VAR_6, "Bits Per Pixel Count");
   FUNC_0(VAR_4, VAR_6, (char *)&VAR_9, 4);
   FUNC_7(VAR_4, "Compression ID: %4.4s", (char *)&VAR_9);
   VAR_5->format->codec = FUNC_9(VAR_9);
   if(VAR_5->format->codec == VAR_1)
      VAR_5->format->codec = VAR_9;
   FUNC_4(VAR_4, VAR_6, "Image Size");
   FUNC_4(VAR_4, VAR_6, "Horizontal Pixels Per Meter");
   FUNC_4(VAR_4, VAR_6, "Vertical Pixels Per Meter");
   FUNC_4(VAR_4, VAR_6, "Colors Used Count");
   FUNC_4(VAR_4, VAR_6, "Important Colors Count");

   if(!(VAR_7 -= 40))return VAR_3;

   if(VAR_7 > VAR_0)
   {
      FUNC_6(VAR_4, "extradata truncated");
      VAR_7 = VAR_0;
   }
   VAR_5->format->extradata = VAR_5->priv->module->extradata;
   VAR_5->format->extradata_size = FUNC_0(VAR_4, VAR_6, VAR_5->format->extradata, VAR_7);

   return FUNC_8(VAR_4);
}
