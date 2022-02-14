
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ error; int info_png; int info_raw; } ;
typedef TYPE_1__ LodePNGState ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(LodePNGState* VAR_0, const LodePNGState* VAR_1)
{
  FUNC_4(VAR_0);
  *VAR_0 = *VAR_1;
  FUNC_1(&VAR_0->info_raw);
  FUNC_3(&VAR_0->info_png);
  VAR_0->error = FUNC_0(&VAR_0->info_raw, &VAR_1->info_raw); if(VAR_0->error) return;
  VAR_0->error = FUNC_2(&VAR_0->info_png, &VAR_1->info_png); if(VAR_0->error) return;
}
