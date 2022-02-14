
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_18__ {int duration; scalar_t__ size; int capabilities; TYPE_1__* priv; int tracks_num; int tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {TYPE_2__* levels; } ;
struct TYPE_19__ {int duration; int timecode_scale; TYPE_3__ state; scalar_t__ tags_offset; scalar_t__ cues_offset; scalar_t__ cluster_offset; int is_doctype_valid; int elements_list; int tracks; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_16__ {scalar_t__ offset; } ;
struct TYPE_15__ {int pf_seek; int pf_read; int (* pf_close ) (TYPE_4__*) ;TYPE_5__* module; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,int*,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_5__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int VAR_9 ;
 int VAR_10 ;

VC_CONTAINER_STATUS_T FUNC_9(VC_CONTAINER_T *VAR_11)
{
   VC_CONTAINER_MODULE_T *VAR_12 = 0;
   VC_CONTAINER_STATUS_T VAR_13 = VAR_3;
   uint8_t VAR_14[4];




   if(FUNC_2(VAR_11, VAR_14, 4) < 4 ||
      VAR_14[0] != 0x1A || VAR_14[1] != 0x45 || VAR_14[2] != 0xDF || VAR_14[3] != 0xA3)
      return VAR_4;






   VAR_12 = FUNC_5(sizeof(*VAR_12));
   if(!VAR_12) {VAR_13 = VAR_6; goto error;}
   FUNC_6(VAR_12, 0, sizeof(*VAR_12));
   VAR_11->priv->module = VAR_12;
   VAR_11->tracks = VAR_12->tracks;
   VAR_12->elements_list = VAR_8;


   VAR_13 = FUNC_7(VAR_11, FUNC_0(-1), VAR_1);
   if(VAR_13 != VAR_7) goto error;
   if(!VAR_12->is_doctype_valid) {VAR_13 = VAR_4; goto error;}


   do
   {
      VAR_13 = FUNC_7(VAR_11, FUNC_0(-1), VAR_1);
      if(VAR_13 != VAR_7) break;

      if(VAR_12->cluster_offset) break;
   } while(1);


   if(!VAR_11->tracks_num)
   {
      VAR_13 = VAR_5;
      goto error;
   }





   VAR_11->priv->pf_close = FUNC_8;
   VAR_11->priv->pf_read = VAR_9;
   VAR_11->priv->pf_seek = VAR_10;
   VAR_11->duration = VAR_12->duration / 1000 * VAR_12->timecode_scale;


   if(!FUNC_4(VAR_11))
      return VAR_7;

   if(VAR_12->cues_offset && (int64_t)VAR_12->cues_offset < VAR_11->size)
      VAR_11->capabilities |= VAR_2;

   if(VAR_12->tags_offset)
   {
      VAR_13 = FUNC_3(VAR_11, VAR_12->tags_offset);
      if(VAR_13 == VAR_7)
         VAR_13 = FUNC_7(VAR_11, FUNC_0(-1) , VAR_0);
   }


   return FUNC_3(VAR_11, VAR_12->state.levels[1].offset);

 error:
   FUNC_1(VAR_11, "mkv: error opening stream (%i)", VAR_13);
   if(VAR_12) FUNC_8(VAR_11);
   return VAR_13;
}
