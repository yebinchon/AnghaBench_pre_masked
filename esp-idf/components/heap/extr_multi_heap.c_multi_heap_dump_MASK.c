
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* multi_heap_handle_t ;
struct TYPE_11__ {char* next_free; } ;
typedef TYPE_2__ heap_block_t ;
struct TYPE_10__ {TYPE_2__ first_block; int last_block; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(multi_heap_handle_t VAR_0)
{
    FUNC_1(VAR_0 != ((void*)0));

    FUNC_5(VAR_0);
    FUNC_0("Heap start %p end %p\nFirst free block %p\n", &VAR_0->first_block, VAR_0->last_block, VAR_0->first_block.next_free);
    for(heap_block_t *VAR_1 = &VAR_0->first_block; VAR_1 != ((void*)0); VAR_1 = FUNC_3(VAR_1)) {
        FUNC_0("Block %p data size 0x%08x bytes next block %p", VAR_1, FUNC_2(VAR_1), FUNC_3(VAR_1));
        if (FUNC_4(VAR_1)) {
            FUNC_0(" FREE. Next free %p\n", VAR_1->next_free);
        } else {
            FUNC_0("%s", "\n");
        }
    }
    FUNC_6(VAR_0);
}
