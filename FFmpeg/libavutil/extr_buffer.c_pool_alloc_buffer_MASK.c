
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int size; TYPE_3__* (* alloc ) (int ) ;int opaque; TYPE_3__* (* alloc2 ) (int ,int ) ;} ;
struct TYPE_13__ {TYPE_1__* buffer; } ;
struct TYPE_12__ {TYPE_4__* pool; int free; struct TYPE_12__* opaque; int data; } ;
struct TYPE_11__ {int free; TYPE_2__* opaque; int data; } ;
typedef TYPE_2__ BufferPoolEntry ;
typedef TYPE_3__ AVBufferRef ;
typedef TYPE_4__ AVBufferPool ;


 int FUNC_0 (TYPE_3__**) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 TYPE_3__* FUNC_3 (int ) ;

__attribute__((used)) static AVBufferRef *FUNC_4(AVBufferPool *VAR_1)
{
    BufferPoolEntry *VAR_2;
    AVBufferRef *VAR_3;

    VAR_3 = VAR_1->alloc2 ? VAR_1->alloc2(VAR_1->opaque, VAR_1->size) :
                         VAR_1->alloc(VAR_1->size);
    if (!VAR_3)
        return ((void*)0);

    VAR_2 = FUNC_1(sizeof(*VAR_2));
    if (!VAR_2) {
        FUNC_0(&VAR_3);
        return ((void*)0);
    }

    VAR_2->data = VAR_3->buffer->data;
    VAR_2->opaque = VAR_3->buffer->opaque;
    VAR_2->free = VAR_3->buffer->free;
    VAR_2->pool = VAR_1;

    VAR_3->buffer->opaque = VAR_2;
    VAR_3->buffer->free = VAR_0;

    return VAR_3;
}
