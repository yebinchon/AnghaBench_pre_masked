
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cnt; int pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = VAR_2[0].cnt;

 if (VAR_2[0].cnt == 1)
 {
  FUNC_1("no solution!\n");
  FUNC_0(1);
 }
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (VAR_4 == VAR_2[VAR_3].cnt)
  {
   VAR_5++;
  }
 }

 VAR_3 = FUNC_2() % VAR_5;
 VAR_1 = VAR_2[VAR_3].pos;
 FUNC_1("0x%03X (%d) ", VAR_1, VAR_2[VAR_3].cnt);
}
