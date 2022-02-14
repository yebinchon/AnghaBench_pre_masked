
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct AVTreeNode {void* ts; void* back_ptr; void* pos; } ;
typedef void* int64_t ;
struct TYPE_3__ {int syncpoints; int sp_count; } ;
typedef struct AVTreeNode Syncpoint ;
typedef TYPE_1__ NUTContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct AVTreeNode*) ;
 int FUNC_2 (struct AVTreeNode**) ;
 struct AVTreeNode* FUNC_3 (int) ;
 int FUNC_4 (int *,struct AVTreeNode*,int ,struct AVTreeNode**) ;
 struct AVTreeNode* FUNC_5 () ;
 int VAR_1 ;

int FUNC_6(NUTContext *VAR_2, int64_t VAR_3, int64_t VAR_4, int64_t VAR_5)
{
    Syncpoint *VAR_6 = FUNC_3(sizeof(Syncpoint));
    struct AVTreeNode *VAR_7 = FUNC_5();

    if (!VAR_6 || !VAR_7) {
        FUNC_2(&VAR_6);
        FUNC_2(&VAR_7);
        return FUNC_0(VAR_0);
    }

    VAR_2->sp_count++;

    VAR_6->pos = VAR_3;
    VAR_6->back_ptr = VAR_4;
    VAR_6->ts = VAR_5;
    FUNC_4(&VAR_2->syncpoints, VAR_6, VAR_1, &VAR_7);
    if (VAR_7) {
        FUNC_1(VAR_6);
        FUNC_1(VAR_7);
    }

    return 0;
}
