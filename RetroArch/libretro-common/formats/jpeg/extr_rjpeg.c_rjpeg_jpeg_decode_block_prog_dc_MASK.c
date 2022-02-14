
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ spec_end; int code_bits; scalar_t__ succ_high; int succ_low; TYPE_1__* img_comp; } ;
typedef TYPE_2__ rjpeg_jpeg ;
typedef int rjpeg_huffman ;
typedef int data ;
struct TYPE_8__ {int dc_pred; } ;


 int FUNC_0 (short*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(
      rjpeg_jpeg *VAR_0,
      short VAR_1[64],
      rjpeg_huffman *VAR_2,
      int VAR_3)
{

   if (VAR_0->spec_end != 0)
      return 0;

   if (VAR_0->code_bits < 16)
      FUNC_2(VAR_0);

   if (VAR_0->succ_high == 0)
   {
      int VAR_4;
      int VAR_5;
      int VAR_6 = 0;


      FUNC_0(VAR_1,0,64*sizeof(VAR_1[0]));
      VAR_4 = FUNC_4(VAR_0, VAR_2);
      if (VAR_4)
         VAR_6 = FUNC_1(VAR_0, VAR_4);

      VAR_5 = VAR_0->img_comp[VAR_3].dc_pred + VAR_6;
      VAR_0->img_comp[VAR_3].dc_pred = VAR_5;
      VAR_1[0] = (short) (VAR_5 << VAR_0->succ_low);
   }
   else
   {

      if (FUNC_3(VAR_0))
         VAR_1[0] += (short) (1 << VAR_0->succ_low);
   }
   return 1;
}
