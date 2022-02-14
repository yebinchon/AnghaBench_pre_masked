
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
typedef int h ;
struct TYPE_24__ {int tracks_num; TYPE_1__* priv; TYPE_7__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_25__ {int frame_header; unsigned int block_size; int yuv4mpeg2; int data_offset; TYPE_7__* track; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_26__ {int is_enabled; TYPE_4__* format; } ;
struct TYPE_23__ {TYPE_3__* type; int codec; int es_type; } ;
struct TYPE_21__ {int frame_rate_num; int frame_rate_den; int par_num; int par_den; unsigned int width; unsigned int height; } ;
struct TYPE_22__ {TYPE_2__ video; } ;
struct TYPE_20__ {int pf_seek; int pf_read; int (* pf_close ) (TYPE_5__*) ;TYPE_6__* module; int uri; } ;


 int FUNC_0 (TYPE_5__*,char*,...) ;
 int FUNC_1 (TYPE_5__*,char*,char*,unsigned int,unsigned int,int,int,unsigned int) ;
 int FUNC_2 (TYPE_5__*,int *,int) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_6__* FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int *,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_8 (TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (char const*,char*) ;
 TYPE_7__* FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (int ,int ,char*,char const**) ;
 char* FUNC_14 (int ) ;

VC_CONTAINER_STATUS_T FUNC_15( VC_CONTAINER_T *VAR_7 )
{
   VC_CONTAINER_STATUS_T VAR_8 = VAR_0;
   const char *VAR_9 = FUNC_14(VAR_7->priv->uri);
   VC_CONTAINER_MODULE_T *VAR_10 = 0;
   bool VAR_11 = 0;
   uint8_t VAR_12[10];


   FUNC_13(VAR_7->priv->uri, 0, "container", &VAR_9);


   if (FUNC_2(VAR_7, VAR_12, sizeof(VAR_12)) != sizeof(VAR_12))
      return VAR_1;
   if (!FUNC_5(VAR_12, "YUV4MPEG2 ", sizeof(VAR_12)))
      VAR_11 = 1;


   if (!VAR_11 &&
       !(VAR_9 && !FUNC_11(VAR_9, "yuv")))
      return VAR_1;

   FUNC_0(VAR_7, "using raw video reader");


   VAR_10 = FUNC_4(sizeof(*VAR_10));
   if (!VAR_10) return VAR_2;
   FUNC_6(VAR_10, 0, sizeof(*VAR_10));
   VAR_7->priv->module = VAR_10;
   VAR_7->tracks_num = 1;
   VAR_7->tracks = &VAR_10->track;
   VAR_7->tracks[0] = FUNC_12(VAR_7, 0);
   if (!VAR_7->tracks[0])
   {
      VAR_8 = VAR_2;
      goto error;
   }
   VAR_7->tracks[0]->format->es_type = VAR_3;
   VAR_7->tracks[0]->is_enabled = 1;
   VAR_7->tracks[0]->format->type->video.frame_rate_num = 25;
   VAR_7->tracks[0]->format->type->video.frame_rate_den = 1;
   VAR_7->tracks[0]->format->type->video.par_num = 1;
   VAR_7->tracks[0]->format->type->video.par_den = 1;

   if (VAR_11)
   {
      VAR_8 = FUNC_9(VAR_7);
      if (VAR_8 != VAR_4)
         goto error;

      VAR_10->data_offset = FUNC_3(VAR_7);

      VAR_8 = FUNC_10(VAR_7);
      if (VAR_8 != VAR_4)
         goto error;
      VAR_10->frame_header = 1;
   }
   else
   {
      VC_CONTAINER_FOURCC_T VAR_13;
      unsigned int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

      VAR_8 = FUNC_7(VAR_7, &VAR_13, &VAR_14, &VAR_15,
         &VAR_16, &VAR_17, &VAR_18);
      if (VAR_8 != VAR_4)
         goto error;
      VAR_7->tracks[0]->format->codec = VAR_13;
      VAR_7->tracks[0]->format->type->video.width = VAR_14;
      VAR_7->tracks[0]->format->type->video.height = VAR_15;
      if (VAR_16 && VAR_17)
      {
         VAR_7->tracks[0]->format->type->video.frame_rate_num = VAR_16;
         VAR_7->tracks[0]->format->type->video.frame_rate_den = VAR_17;
      }
      VAR_10->block_size = VAR_18;
   }





   FUNC_1(VAR_7, "rawvideo %4.4s/%ix%i/fps:%i:%i/size:%i",
      (char *)&VAR_7->tracks[0]->format->codec,
      VAR_7->tracks[0]->format->type->video.width,
      VAR_7->tracks[0]->format->type->video.height,
      VAR_7->tracks[0]->format->type->video.frame_rate_num,
      VAR_7->tracks[0]->format->type->video.frame_rate_den, VAR_10->block_size);
   VAR_7->priv->pf_close = FUNC_8;
   VAR_7->priv->pf_read = VAR_5;
   VAR_7->priv->pf_seek = VAR_6;
   VAR_10->yuv4mpeg2 = VAR_11;
   return VAR_4;

 error:
   FUNC_0(VAR_7, "rawvideo: error opening stream (%i)", VAR_8);
   FUNC_8(VAR_7);
   return VAR_8;
}
