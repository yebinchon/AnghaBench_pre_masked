
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_8__ {scalar_t__ (* match ) (void*,void*) ;} ;
typedef TYPE_2__ list ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void*,void*) ;

listNode *FUNC_4(list *VAR_1, void *VAR_2)
{
    listIter *VAR_3;
    listNode *VAR_4;

    VAR_3 = FUNC_0(VAR_1, VAR_0);
    while((VAR_4 = FUNC_1(VAR_3)) != ((void*)0)) {
        if (VAR_1->match) {
            if (VAR_1->match(VAR_4->value, VAR_2)) {
                FUNC_2(VAR_3);
                return VAR_4;
            }
        } else {
            if (VAR_2 == VAR_4->value) {
                FUNC_2(VAR_3);
                return VAR_4;
            }
        }
    }
    FUNC_2(VAR_3);
    return ((void*)0);
}
