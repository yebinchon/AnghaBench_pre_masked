
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int opaque; int (* pool_free ) (int ) ;int mutex; int data; int (* free ) (int ,int ) ;struct TYPE_5__* next; struct TYPE_5__* pool; } ;
typedef TYPE_1__ BufferPoolEntry ;
typedef TYPE_1__ AVBufferPool ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(AVBufferPool *VAR_0)
{
    while (VAR_0->pool) {
        BufferPoolEntry *VAR_1 = VAR_0->pool;
        VAR_0->pool = VAR_1->next;

        VAR_1->free(VAR_1->opaque, VAR_1->data);
        FUNC_0(&VAR_1);
    }
    FUNC_1(&VAR_0->mutex);

    if (VAR_0->pool_free)
        VAR_0->pool_free(VAR_0->opaque);

    FUNC_0(&VAR_0);
}
