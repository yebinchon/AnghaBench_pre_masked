
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ read_pos; scalar_t__ read_back_capacity; int fifo; } ;
typedef TYPE_1__ RingBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,void*,scalar_t__,int,void (*) (void*,void*,int)) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(RingBuffer *VAR_0, void *VAR_1, int VAR_2, void (*VAR_3)(void*, void*, int))
{
    int VAR_4;

    FUNC_0(VAR_2 <= FUNC_3(VAR_0));
    VAR_4 = FUNC_2(VAR_0->fifo, VAR_1, VAR_0->read_pos, VAR_2, VAR_3);
    VAR_0->read_pos += VAR_2;

    if (VAR_0->read_pos > VAR_0->read_back_capacity) {
        FUNC_1(VAR_0->fifo, VAR_0->read_pos - VAR_0->read_back_capacity);
        VAR_0->read_pos = VAR_0->read_back_capacity;
    }

    return VAR_4;
}
