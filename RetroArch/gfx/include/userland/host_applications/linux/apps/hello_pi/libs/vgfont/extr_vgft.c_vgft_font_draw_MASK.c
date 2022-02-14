
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ VGfloat ;
typedef int VGbitfield ;
struct TYPE_10__ {TYPE_2__* ft_face; } ;
typedef TYPE_4__ VGFT_FONT_T ;
struct TYPE_9__ {int height; int descender; } ;
struct TYPE_8__ {TYPE_1__* size; } ;
struct TYPE_7__ {TYPE_3__ metrics; } ;


 int FUNC_0 (TYPE_4__*,scalar_t__,scalar_t__,char const*,int,int ) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(VGFT_FONT_T *VAR_0, VGfloat VAR_1, VGfloat VAR_2, const char *VAR_3, unsigned VAR_4, VGbitfield VAR_5)
{
   VGfloat VAR_6 = FUNC_1(VAR_0->ft_face->size->metrics.descender);
   int VAR_7 = 0;
   int VAR_8 = 0;
   VAR_2 -= VAR_6;
   for (;;) {
      int VAR_9 = !VAR_3[VAR_8] || (VAR_4 && VAR_8==VAR_4);

      if ((VAR_3[VAR_8] == '\n') || VAR_9)
      {
         FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3 + VAR_7, VAR_8 - VAR_7, VAR_5);
         VAR_7 = VAR_8+1;
         VAR_2 -= FUNC_1(VAR_0->ft_face->size->metrics.height);
      }
      if (VAR_9)
      {
         break;
      }
      ++VAR_8;
   }
}
