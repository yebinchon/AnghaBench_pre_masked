
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ ePICPixListElem ;
struct TYPE_7__ {int* bucket_fill; int* bucket_size; TYPE_4__** bucket; } ;
typedef TYPE_2__ ePICPixHash ;
struct TYPE_8__ {TYPE_1__* list; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_4__**) ;

__attribute__((used)) static void FUNC_2(ePICPixHash *VAR_1)
{
    int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        for (VAR_3 = 0; VAR_3 < VAR_1->bucket_fill[VAR_2]; VAR_3++) {
            ePICPixListElem *VAR_4 = VAR_1->bucket[VAR_2][VAR_3].list;
            while (VAR_4) {
                ePICPixListElem *VAR_5 = VAR_4->next;
                FUNC_0(VAR_4);
                VAR_4 = VAR_5;
            }
        }
        FUNC_1(&VAR_1->bucket[VAR_2]);
        VAR_1->bucket_size[VAR_2] =
        VAR_1->bucket_fill[VAR_2] = 0;
    }
}
