
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int myid; struct TYPE_4__* next; } ;
typedef TYPE_1__ act2000_card ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline act2000_card *
FUNC_0(int VAR_1)
{
        act2000_card *VAR_2 = VAR_0;

        while (VAR_2) {
                if (VAR_2->myid == VAR_1)
                        return VAR_2;
                VAR_2 = VAR_2->next;
        }
        return (act2000_card *) 0;
}
