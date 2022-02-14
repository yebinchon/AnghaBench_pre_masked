
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int depth; } ;
typedef TYPE_1__ update_chunk_offsets_context_t ;
struct TYPE_11__ {int type; int size; int data; } ;
typedef TYPE_2__ atom_t ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int (*) (void*,TYPE_2__*),TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, atom_t *VAR_2)
{
    update_chunk_offsets_context_t *VAR_3 = VAR_1;
    int VAR_4;

    switch (VAR_2->type) {
    case 129:
        return FUNC_3(VAR_3, VAR_2);

    case 134:
        return FUNC_2(VAR_3, VAR_2);

    case 131:
    case 128:
    case 133:
    case 132:
    case 130:
        VAR_3->depth++;
        if (VAR_3->depth > 10) {
            FUNC_0(VAR_0, "atoms too deeply nested\n");
            return -1;
        }

        VAR_4 = FUNC_1(
            VAR_2->data,
            VAR_2->size,
            FUNC_4,
            VAR_3);
        VAR_3->depth--;
        return VAR_4;
    }

    return 0;
}
