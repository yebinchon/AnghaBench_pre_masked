
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef float VGfloat ;
typedef scalar_t__ VGPath ;
struct TYPE_13__ {TYPE_6__* ft_face; int vg_font; } ;
typedef TYPE_3__ VGFT_FONT_T ;
typedef int VCOS_STATUS_T ;
struct TYPE_15__ {TYPE_2__* glyph; } ;
struct TYPE_14__ {scalar_t__ n_contours; int n_points; int contours; int tags; int points; } ;
struct TYPE_11__ {int y; int x; } ;
struct TYPE_12__ {TYPE_1__ advance; TYPE_4__ outline; } ;
typedef scalar_t__ FT_ULong ;
typedef int FT_UInt ;
typedef TYPE_4__ FT_Outline ;


 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_6__*,scalar_t__,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_6__*,int ,unsigned int,unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ,scalar_t__,int ) ;
 int VAR_9 ;
 float FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,float,float,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,int ,scalar_t__,int ,float*,float*) ;

VCOS_STATUS_T FUNC_13(VGFT_FONT_T *VAR_12, unsigned int VAR_13, unsigned int VAR_14, unsigned int VAR_15)
{
   FT_UInt VAR_16;
   FT_ULong VAR_17;

   if (FUNC_4(VAR_12->ft_face, 0, VAR_13, VAR_14, VAR_15))
   {
      FUNC_0(VAR_12->ft_face);
      FUNC_10(VAR_12->vg_font);
      return VAR_1;
   }

   VAR_17 = FUNC_1(VAR_12->ft_face, &VAR_16);

   while (VAR_17 != 0)
   {
      if (FUNC_3(VAR_12->ft_face, VAR_16, VAR_0)) {
         FUNC_0(VAR_12->ft_face);
         FUNC_10(VAR_12->vg_font);
         return VAR_2;
      }

      VGPath VAR_18;
      FT_Outline *VAR_19 = &VAR_12->ft_face->glyph->outline;
      if (VAR_19->n_contours != 0) {
         VAR_18 = FUNC_9(VAR_8, VAR_7, 1.0f, 0.0f, 0, 0, VAR_6);
         FUNC_5(VAR_18 != VAR_5);

         FUNC_6(VAR_19->points, VAR_19->tags, VAR_19->contours, VAR_19->n_contours, VAR_19->n_points);
         FUNC_8(VAR_18, VAR_11, VAR_10, VAR_9);
      } else {
         VAR_18 = VAR_5;
      }

      VGfloat VAR_20[] = { 0.0f, 0.0f };
      VGfloat VAR_21[] = { FUNC_7(VAR_12->ft_face->glyph->advance.x), FUNC_7(VAR_12->ft_face->glyph->advance.y) };
      FUNC_12(VAR_12->vg_font, VAR_16, VAR_18, VAR_4, VAR_20, VAR_21);

      if (VAR_18 != VAR_5) {
         FUNC_11(VAR_18);
      }
      VAR_17 = FUNC_2(VAR_12->ft_face, VAR_17, &VAR_16);
   }

   return VAR_3;
}
