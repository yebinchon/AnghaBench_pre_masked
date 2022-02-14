
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int refcount; int mutex; TYPE_1__* pool; int size; } ;
struct TYPE_6__ {struct TYPE_6__* next; int data; } ;
typedef TYPE_1__ BufferPoolEntry ;
typedef int AVBufferRef ;
typedef TYPE_2__ AVBufferPool ;


 int FUNC_0 (int *,int,int ) ;
 int * FUNC_1 (int ,int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int * FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;

AVBufferRef *FUNC_5(AVBufferPool *VAR_2)
{
    AVBufferRef *VAR_3;
    BufferPoolEntry *VAR_4;

    FUNC_2(&VAR_2->mutex);
    VAR_4 = VAR_2->pool;
    if (VAR_4) {
        VAR_3 = FUNC_1(VAR_4->data, VAR_2->size, VAR_1,
                               VAR_4, 0);
        if (VAR_3) {
            VAR_2->pool = VAR_4->next;
            VAR_4->next = ((void*)0);
        }
    } else {
        VAR_3 = FUNC_4(VAR_2);
    }
    FUNC_3(&VAR_2->mutex);

    if (VAR_3)
        FUNC_0(&VAR_2->refcount, 1, VAR_0);

    return VAR_3;
}
