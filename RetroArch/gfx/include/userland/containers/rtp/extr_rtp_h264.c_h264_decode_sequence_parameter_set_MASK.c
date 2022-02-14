
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int width; int height; int x_offset; int y_offset; int visible_width; int visible_height; } ;
typedef TYPE_3__ VC_CONTAINER_VIDEO_FORMAT_T ;
struct TYPE_9__ {TYPE_2__* format; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_BITS_T ;
struct TYPE_7__ {TYPE_1__* type; } ;
struct TYPE_6__ {TYPE_3__ video; } ;


 int FUNC_0 (int *,int *,int,char*) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,int *,int,char*) ;
 int FUNC_3 (int *,int *,int,char*) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8(VC_CONTAINER_T *VAR_8,
      VC_CONTAINER_TRACK_T *VAR_9,
      VC_CONTAINER_BITS_T *VAR_10)
{
   VC_CONTAINER_VIDEO_FORMAT_T *VAR_11 = &VAR_9->format->type->video;
   uint32_t VAR_12, VAR_13;
   uint32_t VAR_14, VAR_15, VAR_16;
   uint32_t VAR_17, VAR_18, VAR_19, VAR_20;
   uint8_t VAR_21;


   VAR_21 = FUNC_2(VAR_8, VAR_10, 8, "profile_idc");
   FUNC_3(VAR_8, VAR_10, 16, "Rest of profile_level_id");

   FUNC_1(VAR_8, VAR_10, "seq_parameter_set_id");

   VAR_13 = VAR_0;
   if (VAR_21 == 100 || VAR_21 == 110 || VAR_21 == 122 ||
         VAR_21 == 244 || VAR_21 == 44 || VAR_21 == 83 ||
         VAR_21 == 86 || VAR_21 == 118 || VAR_21 == 128)
   {
      VAR_13 = FUNC_7(VAR_8, VAR_10);
      if (VAR_13 > VAR_1)
         goto error;
   }

   FUNC_4(VAR_8, VAR_10, "log2_max_frame_num_minus4");
   VAR_12 = FUNC_1(VAR_8, VAR_10, "pic_order_cnt_type");
   if (VAR_12 == 0)
   {
      FUNC_4(VAR_8, VAR_10, "log2_max_pic_order_cnt_lsb_minus4");
   }
   else if (VAR_12 == 1)
   {
      uint32_t VAR_22;
      uint32_t VAR_23;

      FUNC_3(VAR_8, VAR_10, 1, "delta_pic_order_always_zero_flag");
      FUNC_4(VAR_8, VAR_10, "offset_for_non_ref_pic");
      FUNC_4(VAR_8, VAR_10, "offset_for_top_to_bottom_field");
      VAR_22 = FUNC_1(VAR_8, VAR_10, "num_ref_frames_in_pic_order_cnt_cycle");

      for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
         FUNC_4(VAR_8, VAR_10, "offset_for_ref_frame");
   }

   FUNC_4(VAR_8, VAR_10, "max_num_ref_frames");
   FUNC_3(VAR_8, VAR_10, 1, "gaps_in_frame_num_value_allowed_flag");

   VAR_14 = FUNC_1(VAR_8, VAR_10, "pic_width_in_mbs_minus1");
   VAR_15 = FUNC_1(VAR_8, VAR_10, "pic_height_in_map_units_minus1");
   VAR_16 = FUNC_0(VAR_8, VAR_10, 1, "frame_mbs_only_flag");


   VAR_11->width = (VAR_14 + 1) * VAR_3;
   VAR_11->height = (2 - VAR_16) * (VAR_15 + 1) * VAR_2;

   if (!VAR_16)
      FUNC_3(VAR_8, VAR_10, 1, "mb_adaptive_frame_field_flag");
   FUNC_3(VAR_8, VAR_10, 1, "direct_8x8_inference_flag");

   if (FUNC_0(VAR_8, VAR_10, 1, "frame_cropping_flag"))
   {

      VAR_17 = FUNC_1(VAR_8, VAR_10, "frame_crop_left_offset");
      VAR_18 = FUNC_1(VAR_8, VAR_10, "frame_crop_right_offset");
      VAR_19 = FUNC_1(VAR_8, VAR_10, "frame_crop_top_offset");
      VAR_20 = FUNC_1(VAR_8, VAR_10, "frame_crop_bottom_offset");


      VAR_17 *= VAR_7[VAR_13];
      VAR_18 *= VAR_7[VAR_13];
      VAR_19 *= VAR_6[VAR_13] * (2 - VAR_16);
      VAR_20 *= VAR_6[VAR_13] * (2 - VAR_16);

      if ((VAR_17 + VAR_18) >= VAR_11->width ||
            (VAR_19 + VAR_20) >= VAR_11->height)
      {
         FUNC_6(VAR_8, "H.264: frame crop offsets (%u, %u, %u, %u) larger than frame (%u, %u)",
               VAR_17, VAR_18, VAR_19,
               VAR_20, VAR_11->width, VAR_11->height);
         goto error;
      }

      VAR_11->x_offset = VAR_17;
      VAR_11->y_offset = VAR_19;
      VAR_11->visible_width = VAR_11->width - VAR_17 - VAR_18;
      VAR_11->visible_height = VAR_11->height - VAR_19 - VAR_20;
   } else {
      VAR_11->visible_width = VAR_11->width;
      VAR_11->visible_height = VAR_11->height;
   }



   if (!FUNC_5(VAR_8, VAR_10))
      goto error;

   return VAR_5;

error:
   FUNC_6(VAR_8, "H.264: sequence_parameter_set failed to decode");
   return VAR_4;
}
