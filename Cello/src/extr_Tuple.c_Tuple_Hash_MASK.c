
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Tuple* var ;
typedef int uint64_t ;
struct Tuple {int * items; } ;


 size_t FUNC_0 (struct Tuple*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint64_t FUNC_2(var VAR_0) {
  struct Tuple* VAR_1 = VAR_0;
  uint64_t VAR_2 = 0;

  size_t VAR_3 = FUNC_0(VAR_0);
  for (size_t VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    VAR_2 ^= FUNC_1(VAR_1->items[VAR_4]);
  }

  return VAR_2;
}
