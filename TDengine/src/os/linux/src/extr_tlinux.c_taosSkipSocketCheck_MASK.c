
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int release; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct utsname*) ;

bool FUNC_3() {
  struct utsname VAR_0;
  if (FUNC_2(&VAR_0)) {
    FUNC_0("can't fetch os info");
    return 0;
  }

  if (FUNC_1(VAR_0.release, "Microsoft") != 0) {
    FUNC_0("using WSLv1");
    return 1;
  }

  return 0;
}
