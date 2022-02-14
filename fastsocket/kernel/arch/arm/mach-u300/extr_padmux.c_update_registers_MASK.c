
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pmx {TYPE_1__* onmask; } ;
struct TYPE_2__ {int mask; int val; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pmx *VAR_1, bool VAR_2)
{
 u16 VAR_3, VAR_4, VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  if (VAR_2)
   VAR_4 = VAR_1->onmask[VAR_6].val;
  else
   VAR_4 = 0;

  VAR_5 = VAR_1->onmask[VAR_6].mask;
  if (VAR_5 != 0) {
   VAR_3 = FUNC_1(VAR_0[VAR_6]);
   VAR_3 &= ~VAR_5;
   VAR_3 |= VAR_4;
   FUNC_2(VAR_3, VAR_0[VAR_6]);
  }
 }
}
