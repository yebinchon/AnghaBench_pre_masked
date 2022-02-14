
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* ht_next; } ;
typedef TYPE_1__ Job ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__** VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__** FUNC_0 (size_t,int) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__**) ;
 int VAR_6 ;
 size_t* VAR_7 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,size_t) ;

__attribute__((used)) static void
FUNC_4(int VAR_8)
{
    Job **VAR_9 = VAR_1;
    size_t VAR_10 = VAR_2, VAR_11 = VAR_4, VAR_12;
    int VAR_13 = VAR_5;
    int VAR_14 = VAR_8 ? 1 : -1;

    if (VAR_5 + VAR_14 >= VAR_0) return;
    if (VAR_5 + VAR_14 < 0) return;
    if (VAR_8 && VAR_6) return;

    VAR_5 += VAR_14;

    VAR_2 = VAR_7[VAR_5];
    VAR_1 = FUNC_0(VAR_2, sizeof(Job *));
    if (!VAR_1) {
        FUNC_3("Failed to allocate %zu new hash buckets", VAR_2);
        VAR_6 = 1;
        VAR_5 = VAR_13;
        VAR_1 = VAR_9;
        VAR_2 = VAR_10;
        VAR_4 = VAR_11;
        return;
    }
    VAR_4 = 0;
    VAR_6 = 0;

    for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
        while (VAR_9[VAR_12]) {
            Job *VAR_15 = VAR_9[VAR_12];
            VAR_9[VAR_12] = VAR_15->ht_next;
            VAR_15->ht_next = ((void*)0);
            FUNC_2(VAR_15);
        }
    }
    if (VAR_9 != VAR_3) {
        FUNC_1(VAR_9);
    }
}
