
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_17__ {struct TYPE_17__* next; TYPE_4__* type; } ;
typedef TYPE_3__ TypeLink ;
struct TYPE_16__ {size_t num_fields; TYPE_1__* fields; } ;
struct TYPE_18__ {TYPE_2__ aggregate; } ;
typedef TYPE_4__ Type ;
struct TYPE_15__ {TYPE_4__* type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__**,size_t) ;
 TYPE_3__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,TYPE_3__*) ;
 int VAR_2 ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__**,size_t) ;
 TYPE_3__* FUNC_6 (int) ;

Type *FUNC_7(Type **VAR_3, size_t VAR_4) {
    size_t VAR_5 = VAR_4 * sizeof(*VAR_3);
    uint64_t VAR_6 = FUNC_1(VAR_3, VAR_5);
    uint64_t VAR_7 = VAR_6 ? VAR_6 : 1;
    TypeLink *VAR_8 = FUNC_2(&VAR_1, VAR_7);
    for (TypeLink *VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_9->next) {
        Type *VAR_10 = VAR_9->type;
        if (VAR_10->aggregate.num_fields == VAR_4) {
            for (size_t VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
                if (VAR_10->aggregate.fields[VAR_11].type != VAR_3[VAR_11]) {
                    goto next;
                }
            }
            return VAR_10;
        }
        next: ;
    }
    Type *VAR_12 = FUNC_4(VAR_0);
    FUNC_5(VAR_12, VAR_3, VAR_4);
    TypeLink *VAR_13 = FUNC_6(sizeof(TypeLink));
    VAR_13->type = VAR_12;
    VAR_13->next = VAR_8;
    FUNC_3(&VAR_1, VAR_7, VAR_13);
    FUNC_0(VAR_2, VAR_12);
    return VAR_12;
}
