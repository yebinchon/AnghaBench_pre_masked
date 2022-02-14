
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nouveau_therm {int dummy; } ;
struct TYPE_2__ {int chipset; int crystal; } ;


 TYPE_1__* FUNC_0 (struct nouveau_therm*) ;
 int FUNC_1 (struct nouveau_therm*,int) ;

int
FUNC_2(struct nouveau_therm *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0)->chipset;
 int VAR_2 = FUNC_0(VAR_0)->crystal;
 int VAR_3;


 if (VAR_1 > 0x50 && VAR_1 < 0x94) {
  u8 VAR_4 = FUNC_1(VAR_0, 0x410c);
  if (FUNC_1(VAR_0, 0xc040) & 0x800000) {


   VAR_3 = (100000000 >> VAR_4) * 10 / 24;
  } else {

   VAR_3 = (VAR_2 * 1000) >> VAR_4;
   VAR_3 /= 20;
  }
 } else {
  VAR_3 = (VAR_2 * 1000) / 20;
 }

 return VAR_3;
}
