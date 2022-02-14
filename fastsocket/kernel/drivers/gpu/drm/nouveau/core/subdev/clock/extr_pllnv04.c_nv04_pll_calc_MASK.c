
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int max_freq; } ;
struct nvbios_pll {TYPE_1__ vco2; } ;
struct nouveau_clock {int dummy; } ;


 int FUNC_0 (struct nouveau_clock*,struct nvbios_pll*,int ,int*,int*,int*,int*,int*) ;
 int FUNC_1 (struct nouveau_clock*,struct nvbios_pll*,int ,int*,int*,int*) ;
 int FUNC_2 (struct nouveau_clock*,char*) ;

int
FUNC_3(struct nouveau_clock *VAR_0, struct nvbios_pll *VAR_1, u32 VAR_2,
       int *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6, int *VAR_7)
{
 int VAR_8;

 if (!VAR_1->vco2.max_freq) {
  VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
  *VAR_5 = 1;
  *VAR_6 = 1;
 } else {
  VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 }

 if (!VAR_8)
  FUNC_2(VAR_0, "unable to compute acceptable pll values\n");
 return VAR_8;
}
