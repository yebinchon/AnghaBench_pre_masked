
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* first_node; } ;
struct TYPE_3__ {struct TYPE_3__* next_node; int len; scalar_t__ node_buff; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(void)
{
    VAR_2 = VAR_0.first_node;

    while(VAR_2 != ((void*)0)){
        FUNC_0(VAR_1, (char *)(VAR_2->node_buff), VAR_2->len);
        VAR_2 = VAR_2->next_node;
    }
}
