
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,char*,int,...) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (int ) ;
 char* VAR_2 ;
 scalar_t__ FUNC_7 (int *) ;

FILE *FUNC_8(int VAR_3) {
  FILE * VAR_4;
  char VAR_5[VAR_0];
  struct stat VAR_6;


  FUNC_4(VAR_5, "%s/vnode%d", VAR_2, VAR_3);
  if (FUNC_5(VAR_5, &VAR_6) < 0) return ((void*)0);

  FUNC_4(VAR_5, "%s/vnode%d/meterObj.v%d", VAR_2, VAR_3, VAR_3);
  if (FUNC_5(VAR_5, &VAR_6) < 0) return ((void*)0);

  VAR_4 = FUNC_3(VAR_5, "r+");
  if (VAR_4 != ((void*)0)) {
    if (FUNC_7(VAR_4) < 0) {
      FUNC_0("file:%s is corrupted, need to restore it first", VAR_5);
      FUNC_2(VAR_4);


      FUNC_1(1);
    }
  } else {
    FUNC_0("failed to open %s, reason:%s", VAR_5, FUNC_6(VAR_1));
  }

  return VAR_4;
}
