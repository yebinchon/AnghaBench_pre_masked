
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Array* var ;
struct Array {size_t nitems; } ;


 int FUNC_0 (struct Array*,size_t) ;
 scalar_t__ FUNC_1 (int ,struct Array*) ;

__attribute__((used)) static bool FUNC_2(var VAR_0, var VAR_1) {
  struct Array* VAR_2 = VAR_0;
  for(size_t VAR_3 = 0; VAR_3 < VAR_2->nitems; VAR_3++) {
    if (FUNC_1(FUNC_0(VAR_2, VAR_3), VAR_1)) {
      return 1;
    }
  }
  return 0;
}
