
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*) ;

__attribute__((constructor))
void FUNC_2(int VAR_0, const char *VAR_1[], const char *VAR_2[], const char *VAR_3[], void *VAR_4 __attribute__((unused))) {
 int VAR_5;

 FUNC_0("argv = %p\n", VAR_1);
 for (VAR_5=0; VAR_1[VAR_5]; VAR_5++) {
  FUNC_0("argv[%2d] = %p %.100s%s\n", VAR_5, VAR_1[VAR_5], VAR_1[VAR_5], FUNC_1(VAR_1[VAR_5]) > 100 ? "..." : "");
 }
 FUNC_0("envp = %p\n", VAR_2);
 for (VAR_5=0; VAR_2[VAR_5]; VAR_5++) {
  FUNC_0("envp[%2d] = %p %.100s%s\n", VAR_5, VAR_2[VAR_5], VAR_2[VAR_5], FUNC_1(VAR_2[VAR_5]) > 100 ? "..." : "");
 }
 FUNC_0("appl = %p\n", VAR_3);
 for (VAR_5=0; VAR_3[VAR_5]; VAR_5++) {
  FUNC_0("appl[%2d] = %p %.100s%s\n", VAR_5, VAR_3[VAR_5], VAR_3[VAR_5], FUNC_1(VAR_3[VAR_5]) > 100 ? "..." : "");
 }
}
