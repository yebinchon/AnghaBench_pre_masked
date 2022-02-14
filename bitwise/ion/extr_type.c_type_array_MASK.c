
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_13__ {size_t num_elems; size_t size; int incomplete_elems; struct TYPE_13__* base; int align; int nonmodifiable; } ;
typedef TYPE_1__ Type ;
struct TYPE_14__ {struct TYPE_14__* next; TYPE_1__* type; } ;
typedef TYPE_2__ CachedArrayType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (size_t) ;
 TYPE_2__* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ) ;
 size_t FUNC_8 (TYPE_1__*) ;
 TYPE_2__* FUNC_9 (int) ;

Type *FUNC_10(Type *VAR_2, size_t VAR_3, bool VAR_4) {
    uint64_t VAR_5 = FUNC_1(FUNC_2(VAR_2), FUNC_3(VAR_3));
    uint64_t VAR_6 = VAR_5 ? VAR_5 : 1;
    CachedArrayType *VAR_7 = FUNC_4(&VAR_1, VAR_6);
    if (!VAR_4) {
        for (CachedArrayType *VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next) {
            Type *VAR_9 = VAR_8->type;
            if (VAR_9->base == VAR_2 && VAR_9->num_elems == VAR_3) {
                return VAR_9;
            }
        }
    }
    FUNC_0(VAR_2);
    Type *VAR_10 = FUNC_7(VAR_0);
    VAR_10->nonmodifiable = VAR_2->nonmodifiable;
    VAR_10->size = VAR_3 * FUNC_8(VAR_2);
    VAR_10->align = FUNC_6(VAR_2);
    VAR_10->base = VAR_2;
    VAR_10->num_elems = VAR_3;
    VAR_10->incomplete_elems = VAR_4;
    if (!VAR_4) {
        CachedArrayType *VAR_11 = FUNC_9(sizeof(CachedArrayType));
        VAR_11->type = VAR_10;
        VAR_11->next = VAR_7;
        FUNC_5(&VAR_1, VAR_6, VAR_11);
    }
    return VAR_10;
}
