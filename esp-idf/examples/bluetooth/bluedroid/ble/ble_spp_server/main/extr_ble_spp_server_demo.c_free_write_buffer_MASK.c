
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* first_node; scalar_t__ buff_size; scalar_t__ node_num; } ;
struct TYPE_5__ {struct TYPE_5__* node_buff; struct TYPE_5__* next_node; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
    VAR_1 = VAR_0.first_node;

    while(VAR_1 != ((void*)0)){
        VAR_2 = VAR_1->next_node;
        FUNC_0(VAR_1->node_buff);
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }

    VAR_0.node_num = 0;
    VAR_0.buff_size = 0;
    VAR_0.first_node = ((void*)0);
}
