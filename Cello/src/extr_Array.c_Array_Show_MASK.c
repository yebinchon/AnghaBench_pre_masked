
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Array* var ;
struct Array {size_t nitems; } ;


 int FUNC_0 (struct Array*,size_t) ;
 int FUNC_1 (struct Array*,int,char*,...) ;

__attribute__((used)) static int FUNC_2(var VAR_0, var VAR_1, int VAR_2) {
  struct Array* VAR_3 = VAR_0;
  VAR_2 = FUNC_1(VAR_1, VAR_2, "<'Array' At 0x%p [", VAR_0);
  for (size_t VAR_4 = 0; VAR_4 < VAR_3->nitems; VAR_4++) {
    VAR_2 = FUNC_1(VAR_1, VAR_2, "%$", FUNC_0(VAR_3, VAR_4));
    if (VAR_4 < VAR_3->nitems-1) { VAR_2 = FUNC_1(VAR_1, VAR_2, ", "); }
  }
  return FUNC_1(VAR_1, VAR_2, "]>");
}
