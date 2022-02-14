
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* free ) (int ) ;} ;
struct TYPE_6__ {struct TYPE_6__* next; int data; int tag; } ;
typedef TYPE_1__ ID3v2ExtraMeta ;
typedef TYPE_2__ ID3v2EMFunc ;


 int FUNC_0 (TYPE_1__**) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(ID3v2ExtraMeta **VAR_0)
{
    ID3v2ExtraMeta *VAR_1 = *VAR_0, *VAR_2;
    const ID3v2EMFunc *VAR_3;

    while (VAR_1) {
        if ((VAR_3 = FUNC_1(VAR_1->tag, 1)))
            VAR_3->free(VAR_1->data);
        VAR_2 = VAR_1->next;
        FUNC_0(&VAR_1);
        VAR_1 = VAR_2;
    }

    *VAR_0 = ((void*)0);
}
