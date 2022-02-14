
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* img_comp; int (* idct_block_kernel ) (int ,int,short*) ;int * dequant; TYPE_1__* s; scalar_t__ progressive; } ;
typedef TYPE_3__ stbi__jpeg ;
struct TYPE_6__ {int x; int y; short* coeff; int coeff_w; size_t tq; int w2; int data; } ;
struct TYPE_5__ {int img_n; } ;


 int FUNC_0 (short*,int ) ;
 int FUNC_1 (int ,int,short*) ;

__attribute__((used)) static void FUNC_2(stbi__jpeg *VAR_0)
{
   if (VAR_0->progressive) {

      int VAR_1,VAR_2,VAR_3;
      for (VAR_3=0; VAR_3 < VAR_0->s->img_n; ++VAR_3) {
         int VAR_4 = (VAR_0->img_comp[VAR_3].x+7) >> 3;
         int VAR_5 = (VAR_0->img_comp[VAR_3].y+7) >> 3;
         for (VAR_2=0; VAR_2 < VAR_5; ++VAR_2) {
            for (VAR_1=0; VAR_1 < VAR_4; ++VAR_1) {
               short *VAR_6 = VAR_0->img_comp[VAR_3].coeff + 64 * (VAR_1 + VAR_2 * VAR_0->img_comp[VAR_3].coeff_w);
               FUNC_0(VAR_6, VAR_0->dequant[VAR_0->img_comp[VAR_3].tq]);
               VAR_0->idct_block_kernel(VAR_0->img_comp[VAR_3].data+VAR_0->img_comp[VAR_3].w2*VAR_2*8+VAR_1*8, VAR_0->img_comp[VAR_3].w2, VAR_6);
            }
         }
      }
   }
}
