
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_t ;
struct TYPE_4__ {int numbrushes; } ;
struct TYPE_3__ {int* mins; int* maxs; } ;


 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *,int) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

void FUNC_10(char *VAR_11)
{
 int VAR_12;
 script_t *VAR_13;

 FUNC_4("-- Q2_LoadMapFile --\n");







 VAR_13 = FUNC_3(VAR_11);
 if (!VAR_13)
 {
  FUNC_4("couldn't open %s\n", VAR_11);
  return;
 }

 FUNC_9(VAR_13, VAR_2 |
         VAR_1 |
         VAR_3);

 VAR_10 = 0;
 VAR_9 = 0;

 while (FUNC_7(VAR_13))
 {
 }

 FUNC_1 (VAR_7, VAR_6);
 for (VAR_12=0 ; VAR_12<VAR_4[0].numbrushes ; VAR_12++)
 {
  if (VAR_8[VAR_12].mins[0] > 4096)
   continue;
  FUNC_0 (VAR_8[VAR_12].mins, VAR_7, VAR_6);
  FUNC_0 (VAR_8[VAR_12].maxs, VAR_7, VAR_6);
 }

 FUNC_5();


 FUNC_2(VAR_13);


 FUNC_6();
}
