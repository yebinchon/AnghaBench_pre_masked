
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios_pll {int refclk; } ;
struct nouveau_pll_vals {int N1; int M1; int log2P; int refclk; } ;
struct nouveau_clock {int dummy; } ;


 int FUNC_0 (struct nouveau_clock*,struct nvbios_pll*,int,int*,int *,int*,int*) ;

int
FUNC_1(struct nouveau_clock *VAR_0, struct nvbios_pll *VAR_1,
      int VAR_2, struct nouveau_pll_vals *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5, ((void*)0), &VAR_6, &VAR_7);

 if (VAR_4 > 0) {
  VAR_3->refclk = VAR_1->refclk;
  VAR_3->N1 = VAR_5;
  VAR_3->M1 = VAR_6;
  VAR_3->log2P = VAR_7;
 }
 return VAR_4;
}
