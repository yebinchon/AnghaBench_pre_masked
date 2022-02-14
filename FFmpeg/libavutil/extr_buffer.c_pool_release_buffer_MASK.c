
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int refcount; int mutex; TYPE_1__* pool; int size; } ;
struct TYPE_4__ {struct TYPE_4__* next; int data; TYPE_2__* pool; } ;
typedef TYPE_1__ BufferPoolEntry ;
typedef TYPE_2__ AVBufferPool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_3, uint8_t *VAR_4)
{
    BufferPoolEntry *VAR_5 = VAR_3;
    AVBufferPool *VAR_6 = VAR_5->pool;

    if(VAR_0)
        FUNC_4(VAR_5->data, VAR_1, VAR_6->size);

    FUNC_2(&VAR_6->mutex);
    VAR_5->next = VAR_6->pool;
    VAR_6->pool = VAR_5;
    FUNC_3(&VAR_6->mutex);

    if (FUNC_0(&VAR_6->refcount, -1, VAR_2) == 1)
        FUNC_1(VAR_6);
}
