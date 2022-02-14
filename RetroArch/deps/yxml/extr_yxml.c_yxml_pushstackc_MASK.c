
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stacklen; int stacksize; unsigned int* stack; } ;
typedef TYPE_1__ yxml_t ;
typedef int yxml_ret_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static yxml_ret_t FUNC_0(yxml_t *VAR_2, unsigned VAR_3) {
 if(VAR_2->stacklen+1 >= VAR_2->stacksize)
  return VAR_0;
 VAR_2->stack[VAR_2->stacklen] = VAR_3;
 VAR_2->stacklen++;
 VAR_2->stack[VAR_2->stacklen] = 0;
 return VAR_1;
}
