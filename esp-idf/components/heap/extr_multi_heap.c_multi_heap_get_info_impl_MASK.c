
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ total_free_bytes; size_t largest_free_block; size_t total_allocated_bytes; int minimum_free_bytes; int allocated_blocks; int free_blocks; int total_blocks; } ;
typedef TYPE_1__ multi_heap_info_t ;
typedef TYPE_2__* multi_heap_handle_t ;
typedef int heap_block_t ;
struct TYPE_10__ {scalar_t__ free_bytes; int minimum_free_bytes; int first_block; } ;


 int FUNC_0 (int,TYPE_2__*) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(multi_heap_handle_t VAR_0, multi_heap_info_t *VAR_1)
{
    FUNC_5(VAR_1, 0, sizeof(multi_heap_info_t));

    if (VAR_0 == ((void*)0)) {
        return;
    }

    FUNC_6(VAR_0);
    for(heap_block_t *VAR_2 = FUNC_2(&VAR_0->first_block); !FUNC_4(VAR_2); VAR_2 = FUNC_2(VAR_2)) {
        VAR_1->total_blocks++;
        if (FUNC_3(VAR_2)) {
            size_t VAR_3 = FUNC_1(VAR_2);
            VAR_1->total_free_bytes += VAR_3;
            if (VAR_3 > VAR_1->largest_free_block) {
                VAR_1->largest_free_block = VAR_3;
            }
            VAR_1->free_blocks++;
        } else {
            VAR_1->total_allocated_bytes += FUNC_1(VAR_2);
            VAR_1->allocated_blocks++;
        }
    }

    VAR_1->minimum_free_bytes = VAR_0->minimum_free_bytes;

    FUNC_0(VAR_1->total_free_bytes == VAR_0->free_bytes, VAR_0);

    FUNC_7(VAR_0);

}
