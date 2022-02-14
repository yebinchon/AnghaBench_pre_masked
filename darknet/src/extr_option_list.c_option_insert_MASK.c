
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int list ;
struct TYPE_4__ {char* key; char* val; scalar_t__ used; } ;
typedef TYPE_1__ kvp ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

void FUNC_2(list *VAR_0, char *VAR_1, char *VAR_2)
{
    kvp *VAR_3 = FUNC_1(sizeof(kvp));
    VAR_3->key = VAR_1;
    VAR_3->val = VAR_2;
    VAR_3->used = 0;
    FUNC_0(VAR_0, VAR_3);
}
