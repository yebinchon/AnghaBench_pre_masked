
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ read_pos; int fifo; } ;
typedef TYPE_1__ RingBuffer ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(RingBuffer *VAR_0)
{
    FUNC_0(VAR_0->fifo);
    VAR_0->read_pos = 0;
}
