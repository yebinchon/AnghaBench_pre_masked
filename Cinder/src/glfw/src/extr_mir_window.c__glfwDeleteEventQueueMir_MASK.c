
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* tqh_first; } ;
struct TYPE_10__ {TYPE_3__* tqe_next; } ;
struct TYPE_12__ {TYPE_1__ entries; } ;
struct TYPE_11__ {TYPE_8__ head; } ;
typedef TYPE_2__ EventQueue ;
typedef TYPE_3__ EventNode ;


 int FUNC_0 (TYPE_8__*,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(EventQueue* VAR_1)
{
    if (VAR_1)
    {
        EventNode* VAR_2, *VAR_3;
        VAR_2 = VAR_1->head.tqh_first;

        while (VAR_2 != ((void*)0))
        {
            VAR_3 = VAR_2->entries.tqe_next;

            FUNC_0(&VAR_1->head, VAR_2, VAR_0);
            FUNC_1(VAR_1, VAR_2);

            VAR_2 = VAR_3;
        }

        FUNC_2(VAR_1);
    }
}
