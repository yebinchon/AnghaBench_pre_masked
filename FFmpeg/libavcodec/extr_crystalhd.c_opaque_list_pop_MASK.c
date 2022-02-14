
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {int avctx; TYPE_1__* tail; TYPE_1__* head; } ;
struct TYPE_5__ {scalar_t__ fake_timestamp; struct TYPE_5__* next; } ;
typedef TYPE_1__ OpaqueList ;
typedef TYPE_2__ CHDContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static OpaqueList *FUNC_1(CHDContext *VAR_2, uint64_t VAR_3)
{
    OpaqueList *VAR_4 = VAR_2->head;

    if (!VAR_2->head) {
        FUNC_0(VAR_2->avctx, VAR_0,
               "CrystalHD: Attempted to query non-existent timestamps.\n");
        return ((void*)0);
    }





    if (VAR_2->head->fake_timestamp == VAR_3) {
        VAR_2->head = VAR_4->next;

        if (!VAR_2->head->next)
            VAR_2->tail = VAR_2->head;

        VAR_4->next = ((void*)0);
        return VAR_4;
    }





    while (VAR_4->next) {
        OpaqueList *VAR_5 = VAR_4->next;
        if (VAR_5->fake_timestamp == VAR_3) {
            VAR_4->next = VAR_5->next;

            if (!VAR_4->next)
               VAR_2->tail = VAR_4;

            VAR_5->next = ((void*)0);
            return VAR_5;
        } else {
            VAR_4 = VAR_5;
        }
    }

    FUNC_0(VAR_2->avctx, VAR_1,
           "CrystalHD: Couldn't match fake_timestamp.\n");
    return ((void*)0);
}
