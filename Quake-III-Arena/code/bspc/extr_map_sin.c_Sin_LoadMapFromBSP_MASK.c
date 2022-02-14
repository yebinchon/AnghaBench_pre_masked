
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numbrushes; } ;
struct TYPE_3__ {int* mins; int* maxs; } ;


 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_7(char *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;

 FUNC_2("-- Sin_LoadMapFromBSP --\n");

 VAR_4 = VAR_0;

 FUNC_2("Loading map from %s...\n", VAR_10);

 FUNC_4(VAR_10, VAR_11, VAR_12);




 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
  VAR_2[VAR_13] = -1;

 VAR_9 = 0;
 VAR_8 = 0;

 FUNC_6();

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
 {
  FUNC_5(VAR_13);
 }


 FUNC_1(VAR_6, VAR_5);
 for (VAR_13 = 0; VAR_13 < VAR_3[0].numbrushes; VAR_13++)
 {
  if (VAR_7[VAR_13].mins[0] > 4096)
   continue;
  FUNC_0 (VAR_7[VAR_13].mins, VAR_6, VAR_5);
  FUNC_0 (VAR_7[VAR_13].maxs, VAR_6, VAR_5);
 }

 FUNC_3();
}
