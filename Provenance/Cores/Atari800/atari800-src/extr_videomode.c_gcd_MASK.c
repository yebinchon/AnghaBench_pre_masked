
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, unsigned int VAR_1) {
 unsigned int VAR_2;
 if (VAR_0 < VAR_1) {
  VAR_2 = VAR_0;
  VAR_0 = VAR_1;
  VAR_1 = VAR_2;
 }

 for (;;) {
  if (VAR_1 == 0)
   return VAR_0;
  VAR_2 = VAR_1;
  VAR_1 = VAR_0 % VAR_1;
  VAR_0 = VAR_2;
 }
}
