
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; int key; } ;
typedef TYPE_2__ dictEntry ;
struct TYPE_11__ {TYPE_1__* ht; } ;
typedef TYPE_3__ dict ;
struct TYPE_9__ {unsigned int sizemask; TYPE_2__** table; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,void const*,int ) ;
 unsigned int FUNC_2 (TYPE_3__*,void const*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(dict *VAR_1, const void *VAR_2)
{
    unsigned int VAR_3, VAR_4, VAR_5;
    dictEntry *VAR_6;


    if (FUNC_0(VAR_1) == VAR_0)
        return -1;

    VAR_3 = FUNC_2(VAR_1, VAR_2);
    for (VAR_5 = 0; VAR_5 <= 1; VAR_5++) {
        VAR_4 = VAR_3 & VAR_1->ht[VAR_5].sizemask;

        VAR_6 = VAR_1->ht[VAR_5].table[VAR_4];
        while(VAR_6) {
            if (FUNC_1(VAR_1, VAR_2, VAR_6->key))
                return -1;
            VAR_6 = VAR_6->next;
        }
        if (!FUNC_3(VAR_1)) break;
    }
    return VAR_4;
}
