
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* ste; } ;
typedef TYPE_1__ pmd_t ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long*,int ,int) ;
 int VAR_2 ;

void FUNC_3(pmd_t *VAR_3, unsigned long VAR_4)
{
 unsigned long *VAR_5 = VAR_3->ste;
 int VAR_6;

 if (!VAR_4) {
  FUNC_2(VAR_5, 0, VAR_0);
 }
 else {
  FUNC_0(VAR_4 & (0x3f00 | VAR_2 | 0xe));

  for (VAR_6 = VAR_0; VAR_6 > 0; VAR_6 -= 4) {
   *VAR_5++ = VAR_4;
   VAR_4 += VAR_1;
  }
 }

 FUNC_1((unsigned long) VAR_3, (unsigned long) (VAR_3 + 1));
}
