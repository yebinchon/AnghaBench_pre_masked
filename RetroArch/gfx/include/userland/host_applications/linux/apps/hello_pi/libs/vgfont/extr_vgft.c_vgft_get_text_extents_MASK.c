
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ VGfloat ;
struct TYPE_10__ {TYPE_3__* ft_face; } ;
typedef TYPE_4__ VGFT_FONT_T ;
struct TYPE_9__ {TYPE_2__* size; } ;
struct TYPE_7__ {int height; } ;
struct TYPE_8__ {TYPE_1__ metrics; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,scalar_t__*,scalar_t__*,char const*,int) ;

void FUNC_2(VGFT_FONT_T *VAR_0,
                           const char *VAR_1,
                           unsigned VAR_2,
                           VGfloat VAR_3, VGfloat VAR_4,
                           VGfloat *VAR_5, VGfloat *VAR_6) {
   int VAR_7 = 0;
   VGfloat VAR_8 = 0;
   VGfloat VAR_9 = 0;

   int VAR_10, VAR_11;
   for (VAR_10 = 0, VAR_11 = 0; !VAR_11; ++VAR_10) {
      VAR_11 = !VAR_1[VAR_10] || (VAR_2 && VAR_10==VAR_2);
      if ((VAR_1[VAR_10] == '\n') || VAR_11) {
         VGfloat VAR_12 = 0;
         FUNC_1(VAR_0, &VAR_12, &VAR_9, VAR_1 + VAR_7, VAR_10 - VAR_7);
         VAR_7 = VAR_10 + 1;
         VAR_9 -= FUNC_0(VAR_0->ft_face->size->metrics.height);
         if (VAR_12 > VAR_8) VAR_8 = VAR_12;
      }
   }
   *VAR_5 = VAR_8;
   *VAR_6 = -VAR_9;
}
