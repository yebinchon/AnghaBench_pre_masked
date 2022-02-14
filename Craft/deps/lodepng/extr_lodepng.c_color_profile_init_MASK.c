
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int sixteenbit_done; int colored_done; int alpha_done; unsigned char* palette; int maxnumcolors; int greybits; int greybits_done; scalar_t__ numcolors_done; int tree; scalar_t__ numcolors; scalar_t__ alpha; scalar_t__ key; scalar_t__ colored; scalar_t__ sixteenbit; } ;
struct TYPE_8__ {int bitdepth; } ;
typedef TYPE_1__ LodePNGColorMode ;
typedef TYPE_2__ ColorProfile ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(ColorProfile* VAR_0, const LodePNGColorMode* VAR_1)
{
  VAR_0->sixteenbit = 0;
  VAR_0->sixteenbit_done = VAR_1->bitdepth == 16 ? 0 : 1;

  VAR_0->colored = 0;
  VAR_0->colored_done = FUNC_3(VAR_1) ? 1 : 0;

  VAR_0->key = 0;
  VAR_0->alpha = 0;
  VAR_0->alpha_done = FUNC_1(VAR_1) ? 0 : 1;

  VAR_0->numcolors = 0;
  FUNC_0(&VAR_0->tree);
  VAR_0->palette = (unsigned char*)FUNC_4(1024);
  VAR_0->maxnumcolors = 257;
  if(FUNC_2(VAR_1) <= 8)
  {
    int VAR_2 = FUNC_2(VAR_1);
    VAR_0->maxnumcolors = VAR_2 == 1 ? 2 : (VAR_2 == 2 ? 4 : (VAR_2 == 4 ? 16 : 256));
  }
  VAR_0->numcolors_done = 0;

  VAR_0->greybits = 1;
  VAR_0->greybits_done = FUNC_2(VAR_1) == 1 ? 1 : 0;
}
