
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Capture ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static Capture *FUNC_2 (Capture *VAR_0) {
  int VAR_1 = 0;
  for (;;) {
    VAR_0--;
    if (FUNC_0(VAR_0)) VAR_1++;
    else if (!FUNC_1(VAR_0))
      if (VAR_1-- == 0) return VAR_0;
  }
}
