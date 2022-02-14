
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stacklen; char* elem; int state; scalar_t__ stack; } ;
typedef TYPE_1__ yxml_t ;
typedef int yxml_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static yxml_ret_t FUNC_1(yxml_t *VAR_2, unsigned VAR_3) {
 FUNC_0(VAR_2);
 if(VAR_2->stacklen) {
  VAR_2->elem = (char *)VAR_2->stack+VAR_2->stacklen-1;
  while(*(VAR_2->elem-1))
   VAR_2->elem--;
  return VAR_1;
 }
 VAR_2->elem = (char *)VAR_2->stack;
 VAR_2->state = VAR_0;
 return VAR_1;
}
