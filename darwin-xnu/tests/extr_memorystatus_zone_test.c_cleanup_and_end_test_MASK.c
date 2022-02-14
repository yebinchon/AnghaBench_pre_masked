
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_zones; int * zone_names; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * VAR_6 ;
 int FUNC_10 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (int ,int*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;

__attribute__((used)) static void FUNC_12(void)
{
 int VAR_12;





 FUNC_8(&VAR_8);
 if (VAR_7) {
  FUNC_9(&VAR_8);
  return;
 }
 VAR_7 = 1;
 FUNC_9(&VAR_8);

 FUNC_0("Number of processes spawned: %d", VAR_5);
 FUNC_0("Cleaning up...");


 if (VAR_4 != ((void*)0) && !VAR_10) {
  FUNC_1(VAR_4);
 }


 if (VAR_3 != ((void*)0) && !VAR_9) {
  FUNC_2(VAR_3);
 }


 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  FUNC_3(VAR_1[VAR_12], VAR_0);




  FUNC_10(1);
 }
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  int VAR_13 = 0;
  if (FUNC_11(VAR_1[VAR_12], &VAR_13, 0) < 0) {
   FUNC_0("waitpid returned status %d", VAR_13);
  }
 }
 FUNC_10(1);


 FUNC_6(FUNC_5());


 if (VAR_6 != ((void*)0)) {
  FUNC_4(VAR_6, 1);
 }

 for (VAR_12 = 0; VAR_12 < VAR_2.num_zones; VAR_12++) {
  FUNC_7(&(VAR_2.zone_names[VAR_12]), &(VAR_11[VAR_12]));
 }
}
