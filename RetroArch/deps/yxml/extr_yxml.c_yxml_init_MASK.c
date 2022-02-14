
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int line; unsigned char* stack; size_t stacksize; char* elem; char* pi; char* attr; int state; } ;
typedef TYPE_1__ yxml_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(yxml_t *VAR_1, void *VAR_2, size_t VAR_3) {
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->line = 1;
 VAR_1->stack = (unsigned char *)VAR_2;
 VAR_1->stacksize = VAR_3;
 *VAR_1->stack = 0;
 VAR_1->elem = VAR_1->pi = VAR_1->attr = (char *)VAR_1->stack;
 VAR_1->state = VAR_0;
}
