
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int item_size; int read_ptr; int size; int free_ptr; int remain_cnt; } ;
typedef TYPE_1__ sdio_ringbuf_t ;
typedef scalar_t__ portBASE_TYPE ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(sdio_ringbuf_t* VAR_2, uint8_t *VAR_3)
{
    FUNC_0(FUNC_1(VAR_2, VAR_1, VAR_2->item_size) == VAR_3);
    int VAR_4 = (VAR_2->read_ptr + VAR_2->size - VAR_2->free_ptr)%VAR_2->size;
    int VAR_5 = VAR_4/VAR_2->item_size;
    FUNC_0(VAR_5*VAR_2->item_size==VAR_4);
    VAR_2->free_ptr = VAR_2->read_ptr;
    for(int VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        portBASE_TYPE VAR_7 = FUNC_2(VAR_2->remain_cnt);
        FUNC_0(VAR_7 == VAR_0);
    }
}
