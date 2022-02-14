
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Array* var ;
struct Array {size_t nitems; scalar_t__ nslots; int * data; } ;


 int FUNC_0 (struct Array*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(var VAR_0) {
  struct Array* VAR_1 = VAR_0;

  for(size_t VAR_2 = 0; VAR_2 < VAR_1->nitems; VAR_2++) {
    FUNC_1(FUNC_0(VAR_1, VAR_2));
  }

  FUNC_2(VAR_1->data);
  VAR_1->data = ((void*)0);
  VAR_1->nitems = 0;
  VAR_1->nslots = 0;
}
