
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; scalar_t__ val; } ;
typedef TYPE_1__ node ;
struct TYPE_5__ {int size; TYPE_1__* front; } ;
typedef TYPE_2__ list ;


 unsigned char** FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 (char*) ;
 unsigned char* FUNC_2 (char*) ;

unsigned char **FUNC_3(char *VAR_0, int *VAR_1)
{
    list *VAR_2 = FUNC_1(VAR_0);
    *VAR_1 = VAR_2->size;
    unsigned char **VAR_3 = FUNC_0(*VAR_1, sizeof(char *));
    int VAR_4;
    node *VAR_5 = VAR_2->front;
    for(VAR_4 = 0; VAR_4 < *VAR_1; ++VAR_4){
        VAR_3[VAR_4] = FUNC_2((char *)VAR_5->val);
        VAR_5 = VAR_5->next;
    }
    return VAR_3;
}
