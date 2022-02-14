
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


struct TYPE_12__ {TYPE_4__* out; TYPE_1__* priv; } ;
typedef TYPE_5__ VC_PACKETIZER_T ;
struct TYPE_13__ {int frame_rate_den; int frame_rate_num; int aspect_ratio_den; int aspect_ratio_num; int height; int width; } ;
typedef TYPE_6__ VC_PACKETIZER_MODULE_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {TYPE_3__* type; } ;
struct TYPE_9__ {int frame_rate_den; int frame_rate_num; int par_den; int par_num; int visible_height; int height; int visible_width; int width; } ;
struct TYPE_10__ {TYPE_2__ video; } ;
struct TYPE_8__ {TYPE_6__* module; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_PACKETIZER_T *VAR_1 )
{
   VC_PACKETIZER_MODULE_T *VAR_2 = VAR_1->priv->module;

   FUNC_0(0, "mpgv format: width %i, height %i, rate %i/%i, ar %i/%i",
             VAR_2->width, VAR_2->height, VAR_2->frame_rate_num, VAR_2->frame_rate_den,
             VAR_2->aspect_ratio_num, VAR_2->aspect_ratio_den);

   VAR_1->out->type->video.width = VAR_1->out->type->video.visible_width = VAR_2->width;
   VAR_1->out->type->video.height = VAR_1->out->type->video.visible_height = VAR_2->height;
   VAR_1->out->type->video.par_num = VAR_2->aspect_ratio_num;
   VAR_1->out->type->video.par_den = VAR_2->aspect_ratio_den;
   VAR_1->out->type->video.frame_rate_num = VAR_2->frame_rate_num;
   VAR_1->out->type->video.frame_rate_den = VAR_2->frame_rate_den;
   return VAR_0;
}
