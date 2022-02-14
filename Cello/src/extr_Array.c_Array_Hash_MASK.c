
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Array* var ;
typedef int uint64_t ;
struct Array {size_t nitems; } ;


 int FUNC_0 (struct Array*,size_t) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint64_t FUNC_2(var VAR_0) {
  struct Array* VAR_1 = VAR_0;
  uint64_t VAR_2 = 0;

  for (size_t VAR_3 = 0; VAR_3 < VAR_1->nitems; VAR_3++) {
    VAR_2 ^= FUNC_1(FUNC_0(VAR_1, VAR_3));
  }

  return VAR_2;
}
