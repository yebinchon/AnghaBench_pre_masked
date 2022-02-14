
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int VGfloat ;
struct TYPE_12__ {TYPE_6__* ft_face; } ;
typedef TYPE_3__ VGFT_FONT_T ;
struct TYPE_14__ {TYPE_2__* glyph; } ;
struct TYPE_13__ {int y; int x; } ;
struct TYPE_10__ {int x; } ;
struct TYPE_11__ {TYPE_1__ advance; } ;
typedef TYPE_4__ FT_Vector ;


 int FUNC_0 (TYPE_6__*,char const) ;
 scalar_t__ FUNC_1 (TYPE_6__*,int,int,int ,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_6__*,int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(VGFT_FONT_T *VAR_2, VGfloat *VAR_3, VGfloat *VAR_4, const char *VAR_5, int VAR_6)
{
   int VAR_7;
   int VAR_8 = 0;
   if (VAR_6 == 0) return;

   for (VAR_7=0; VAR_7 < VAR_6; VAR_7++)
   {
      int VAR_9 = FUNC_0(VAR_2->ft_face, VAR_5[VAR_7]);
      if (!VAR_9) return;

      if (VAR_7 != 0)
      {
         FT_Vector VAR_10;
         if (FUNC_1(VAR_2->ft_face, VAR_8, VAR_9,
                            VAR_0, &VAR_10))
         {
            FUNC_3(0);
         }
         *VAR_3 += FUNC_4(VAR_10.x);
         *VAR_4 += FUNC_4(VAR_10.y);
      }
      FUNC_2(VAR_2->ft_face, VAR_9, VAR_1);
      *VAR_3 += FUNC_4(VAR_2->ft_face->glyph->advance.x);

      VAR_8 = VAR_9;
   }
}
