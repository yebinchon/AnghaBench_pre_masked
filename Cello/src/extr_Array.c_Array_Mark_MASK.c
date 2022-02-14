
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Array* var ;
struct Array {size_t nitems; } ;


 void* FUNC_0 (struct Array*,size_t) ;

__attribute__((used)) static void FUNC_1(var VAR_0, var VAR_1, void(*VAR_2)(var,void*)) {
  struct Array* VAR_3 = VAR_0;
  for (size_t VAR_4 = 0; VAR_4 < VAR_3->nitems; VAR_4++) {
    VAR_2(VAR_1, FUNC_0(VAR_3, VAR_4));
  }
}
