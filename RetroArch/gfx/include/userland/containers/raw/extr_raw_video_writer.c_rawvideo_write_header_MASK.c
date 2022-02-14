
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int line ;
struct TYPE_17__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_18__ {int non_standard; int header_done; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_16__ {TYPE_4__* format; } ;
struct TYPE_15__ {int codec; TYPE_3__* type; } ;
struct TYPE_13__ {int width; int height; int frame_rate_num; int frame_rate_den; int par_num; int par_den; } ;
struct TYPE_14__ {TYPE_2__ video; } ;
struct TYPE_12__ {TYPE_7__* module; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__*,char*,unsigned int) ;
 int FUNC_2 (TYPE_6__*,int) ;
 unsigned int FUNC_3 (char*,int,char*,...) ;
 scalar_t__ FUNC_4 (int ,char const**,int ,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   unsigned int VAR_3;
   char VAR_4[128];
   const char *VAR_5;

   VAR_3 = FUNC_3(VAR_4, sizeof(VAR_4), "YUV4MPEG2 W%i H%i",
      VAR_1->tracks[0]->format->type->video.width,
      VAR_1->tracks[0]->format->type->video.height);
   if (VAR_3 >= sizeof(VAR_4))
      return VAR_0;
   FUNC_1(VAR_1, VAR_4, VAR_3);

   if (VAR_1->tracks[0]->format->type->video.frame_rate_num &&
       VAR_1->tracks[0]->format->type->video.frame_rate_den)
   {
      VAR_3 = FUNC_3(VAR_4, sizeof(VAR_4), " F%i:%i",
         VAR_1->tracks[0]->format->type->video.frame_rate_num,
         VAR_1->tracks[0]->format->type->video.frame_rate_den);
      if (VAR_3 >= sizeof(VAR_4))
         return VAR_0;
      FUNC_1(VAR_1, VAR_4, VAR_3);
   }

   if (VAR_1->tracks[0]->format->type->video.par_num &&
       VAR_1->tracks[0]->format->type->video.par_den)
   {
      VAR_3 = FUNC_3(VAR_4, sizeof(VAR_4), " A%i:%i",
         VAR_1->tracks[0]->format->type->video.par_num,
         VAR_1->tracks[0]->format->type->video.par_den);
      if (VAR_3 >= sizeof(VAR_4))
         return VAR_0;
      FUNC_1(VAR_1, VAR_4, VAR_3);
   }

   if (FUNC_4(VAR_1->tracks[0]->format->codec, &VAR_5, 0, 0))
   {
      VAR_3 = FUNC_3(VAR_4, sizeof(VAR_4), " C%s", VAR_5);
   }
   else
   {
      VAR_2->non_standard = 1;
      VAR_3 = FUNC_3(VAR_4, sizeof(VAR_4), " C%4.4s",
         (char *)&VAR_1->tracks[0]->format->codec);
   }
   if (VAR_3 >= sizeof(VAR_4))
      return VAR_0;
   FUNC_1(VAR_1, VAR_4, VAR_3);

   FUNC_2(VAR_1, 0x0a);
   VAR_2->header_done = 1;
   return FUNC_0(VAR_1);
}
