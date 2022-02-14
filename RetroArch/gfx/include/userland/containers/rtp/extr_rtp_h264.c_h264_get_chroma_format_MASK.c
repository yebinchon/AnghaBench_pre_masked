
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_BITS_T ;


 scalar_t__ FUNC_0 (int *,int *,int,char*) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,int *,int,char*) ;
 int FUNC_3 (int *,int *,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static uint32_t FUNC_5(VC_CONTAINER_T *VAR_1,
      VC_CONTAINER_BITS_T *VAR_2)
{
   uint32_t VAR_3;

   VAR_3 = FUNC_1(VAR_1, VAR_2, "chroma_format_idc");
   if (VAR_3 == 3 && FUNC_0(VAR_1, VAR_2, 1, "separate_colour_plane_flag"))
      VAR_3 = VAR_0;

   FUNC_3(VAR_1, VAR_2, "bit_depth_luma_minus8");
   FUNC_3(VAR_1, VAR_2, "bit_depth_chroma_minus8");
   FUNC_2(VAR_1, VAR_2, 1, "qpprime_y_zero_transform_bypass_flag");

   if (FUNC_0(VAR_1, VAR_2, 1, "seq_scaling_matrix_present_flag"))
   {
      uint32_t VAR_4 = (VAR_3 == 3) ? 12 : 8;
      uint32_t VAR_5;

      for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
      {
         if (FUNC_0(VAR_1, VAR_2, 1, "seq_scaling_list_present_flag"))
            FUNC_4(VAR_1, VAR_2, (VAR_5 < 6) ? 16 : 64);
      }
   }

   return VAR_3;
}
