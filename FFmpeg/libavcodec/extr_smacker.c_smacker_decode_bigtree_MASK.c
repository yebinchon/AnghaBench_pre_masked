
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int* recode1; int* recode2; int* escapes; scalar_t__* last; TYPE_2__* v2; TYPE_1__* v1; } ;
struct TYPE_9__ {scalar_t__ current; scalar_t__ length; int* values; } ;
struct TYPE_8__ {scalar_t__ table; } ;
struct TYPE_7__ {scalar_t__ table; } ;
typedef TYPE_3__ HuffContext ;
typedef int GetBitContext ;
typedef TYPE_4__ DBCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_3(GetBitContext *VAR_5, HuffContext *VAR_6,
                                  DBCtx *VAR_7, int VAR_8)
{

    if (VAR_8 > VAR_3) {
        FUNC_0(((void*)0), VAR_1, "Maximum bigtree recursion level exceeded.\n");
        return VAR_0;
    }

    if (VAR_6->current + 1 >= VAR_6->length) {
        FUNC_0(((void*)0), VAR_1, "Tree size exceeded!\n");
        return VAR_0;
    }
    if(!FUNC_1(VAR_5)){
        int VAR_9, VAR_10, VAR_11;
        VAR_10 = VAR_7->v1->table ? FUNC_2(VAR_5, VAR_7->v1->table, VAR_2, 3) : 0;
        VAR_11 = VAR_7->v2->table ? FUNC_2(VAR_5, VAR_7->v2->table, VAR_2, 3) : 0;
        if (VAR_10 < 0 || VAR_11 < 0)
            return VAR_0;
        VAR_9 = VAR_7->recode1[VAR_10] | (VAR_7->recode2[VAR_11] << 8);
        if(VAR_9 == VAR_7->escapes[0]) {
            VAR_7->last[0] = VAR_6->current;
            VAR_9 = 0;
        } else if(VAR_9 == VAR_7->escapes[1]) {
            VAR_7->last[1] = VAR_6->current;
            VAR_9 = 0;
        } else if(VAR_9 == VAR_7->escapes[2]) {
            VAR_7->last[2] = VAR_6->current;
            VAR_9 = 0;
        }

        VAR_6->values[VAR_6->current++] = VAR_9;
        return 1;
    } else {
        int VAR_12 = 0, VAR_13, VAR_14;

        VAR_14 = VAR_6->current++;
        VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8 + 1);
        if(VAR_12 < 0)
            return VAR_12;
        VAR_6->values[VAR_14] = VAR_4 | VAR_12;
        VAR_12++;
        VAR_13 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8 + 1);
        if (VAR_13 < 0)
            return VAR_13;
        return VAR_12 + VAR_13;
    }
}
