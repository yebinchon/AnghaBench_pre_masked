
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxdb {int* stack; int nelem; int top; void* elems; } ;
struct rx_map {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct rxdb* FUNC_1 (int) ;

__attribute__((used)) static struct rxdb *FUNC_2(int VAR_0)
{
 struct rxdb *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(sizeof(struct rxdb)
       + (VAR_0 * sizeof(int))
       + (VAR_0 * sizeof(struct rx_map)));
 if (FUNC_0(VAR_1 != ((void*)0))) {
  VAR_1->stack = (int *)(VAR_1 + 1);
  VAR_1->elems = (void *)(VAR_1->stack + VAR_0);
  VAR_1->nelem = VAR_0;
  VAR_1->top = VAR_0;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   VAR_1->stack[VAR_2] = VAR_0 - VAR_2 - 1;

 }

 return VAR_1;
}
