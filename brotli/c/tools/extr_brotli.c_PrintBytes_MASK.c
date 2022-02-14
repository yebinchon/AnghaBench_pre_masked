
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,double) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(size_t VAR_1) {
  if (VAR_1 < 1024) {
    FUNC_0(VAR_0, "%f B", (int)VAR_1);
  } else if (VAR_1 < 1048576) {
    FUNC_0(VAR_0, "%0.3f KiB", (double)VAR_1 / 1024.0);
  } else if (VAR_1 < 1073741824) {
    FUNC_0(VAR_0, "%0.3f MiB", (double)VAR_1 / 1048576.0);
  } else {
    FUNC_0(VAR_0, "%0.3f GiB", (double)VAR_1 / 1073741824.0);
  }
}
