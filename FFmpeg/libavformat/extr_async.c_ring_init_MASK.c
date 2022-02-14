
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int read_back_capacity; int fifo; } ;
typedef TYPE_1__ RingBuffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(RingBuffer *VAR_1, unsigned int VAR_2, int VAR_3)
{
    FUNC_2(VAR_1, 0, sizeof(RingBuffer));
    VAR_1->fifo = FUNC_1(VAR_2 + VAR_3);
    if (!VAR_1->fifo)
        return FUNC_0(VAR_0);

    VAR_1->read_back_capacity = VAR_3;
    return 0;
}
