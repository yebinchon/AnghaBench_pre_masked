
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_3__* format; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_9__ {scalar_t__ codec; TYPE_2__* type; int extradata; int extradata_size; scalar_t__ codec_variant; } ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_8__ {TYPE_1__ video; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char,char,char,char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_4__*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7(VC_CONTAINER_T *VAR_4,
   VC_CONTAINER_TRACK_T *VAR_5, int VAR_6)
{
   VC_CONTAINER_STATUS_T VAR_7;
   int VAR_8 = 0, VAR_9 = 0;

   if(VAR_5->format->codec == VAR_1 ||
      VAR_5->format->codec == FUNC_2('v','p','6','a'))
   {

      uint8_t VAR_10 = FUNC_3(VAR_4);
      FUNC_4(VAR_4);
      VAR_9 = FUNC_3(VAR_4) * 16;
      VAR_8 = FUNC_3(VAR_4) * 16;
      VAR_8 -= VAR_10 >> 4;
      VAR_9 -= VAR_10 & 0xf;
   }
   else if(VAR_5->format->codec == VAR_0)
   {
      uint8_t VAR_11 = FUNC_3(VAR_4); VAR_6--;
      if(VAR_11 || VAR_6 <= 8) return VAR_2;
      FUNC_5(VAR_4); VAR_6-=3;

      VAR_5->format->codec_variant = FUNC_2('a','v','c','C');
      VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
      if(VAR_7 != VAR_3) return VAR_7;
      VAR_5->format->extradata_size = FUNC_0(VAR_4, VAR_5->format->extradata, VAR_6);
   }

   VAR_5->format->type->video.width = VAR_8;
   VAR_5->format->type->video.height = VAR_9;

   return FUNC_1(VAR_4);
}
