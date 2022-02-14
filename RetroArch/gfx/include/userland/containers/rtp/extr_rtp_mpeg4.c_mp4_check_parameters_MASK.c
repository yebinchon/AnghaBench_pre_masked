
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_9__ {int mode; int size_length; int index_length; int index_delta_length; int cts_delta_length; int dts_delta_length; int constant_size; } ;
struct TYPE_7__ {TYPE_1__* module; } ;
struct TYPE_6__ {scalar_t__ extra; } ;
typedef TYPE_4__ MP4_PAYLOAD_T ;


 int FUNC_0 (int *,char*,...) ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1(VC_CONTAINER_T *VAR_2,
      VC_CONTAINER_TRACK_T *VAR_3)
{
   MP4_PAYLOAD_T *VAR_4 = (MP4_PAYLOAD_T *)VAR_3->priv->module->extra;

   switch (VAR_4->mode)
   {
   case 129:
      if (!VAR_4->constant_size)
      {
         FUNC_0(VAR_2, "MPEG-4: CELP-cbr requires constantSize parameter.");
         return VAR_0;
      }
      break;
   case 128:
   case 130:
      if (VAR_4->size_length != 6 || VAR_4->index_length != 2 || VAR_4->index_delta_length != 2)
      {
         FUNC_0(VAR_2, "MPEG-4: CELP-vbr/AAC-lbr invalid lengths (%u/%u/%u)",
               VAR_4->size_length, VAR_4->index_length, VAR_4->index_delta_length);
         return VAR_0;
      }
      break;
   case 131:
      if (VAR_4->size_length != 13 || VAR_4->index_length != 3 || VAR_4->index_delta_length != 3)
      {
         FUNC_0(VAR_2, "MPEG-4: AAC-hbr invalid lengths (%u/%u/%u)",
               VAR_4->size_length, VAR_4->index_length, VAR_4->index_delta_length);
         return VAR_0;
      }
      break;
   default:
      if (VAR_4->size_length > 32 || VAR_4->index_length > 32 || VAR_4->index_delta_length > 32)
      {
         FUNC_0(VAR_2, "MPEG-4: generic invalid lengths (%u/%u/%u)",
               VAR_4->size_length, VAR_4->index_length, VAR_4->index_delta_length);
         return VAR_0;
      }
   }

   if (VAR_4->cts_delta_length > 32 || VAR_4->dts_delta_length > 32)
   {
      FUNC_0(VAR_2, "MPEG-4: CTS/DTS invalid lengths (%u/%u)",
            VAR_4->cts_delta_length, VAR_4->dts_delta_length);
      return VAR_0;
   }

   return VAR_1;
}
