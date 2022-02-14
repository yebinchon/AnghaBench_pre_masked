
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * mchip_ptable; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1(u8 *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < (VAR_4 / VAR_0) * VAR_0; VAR_6 += VAR_0) {
  FUNC_0(VAR_2 + VAR_6, VAR_1.mchip_ptable[VAR_3++], VAR_0);
  if (VAR_3 >= VAR_5)
   VAR_3 = 0;
 }
 FUNC_0(VAR_2 + VAR_6, VAR_1.mchip_ptable[VAR_3], VAR_4 % VAR_0);
}
