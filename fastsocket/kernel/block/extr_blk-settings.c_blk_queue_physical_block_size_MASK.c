
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int physical_block_size; unsigned int logical_block_size; unsigned int io_min; } ;
struct request_queue {TYPE_1__ limits; } ;



void FUNC_0(struct request_queue *VAR_0, unsigned int VAR_1)
{
 VAR_0->limits.physical_block_size = VAR_1;

 if (VAR_0->limits.physical_block_size < VAR_0->limits.logical_block_size)
  VAR_0->limits.physical_block_size = VAR_0->limits.logical_block_size;

 if (VAR_0->limits.io_min < VAR_0->limits.physical_block_size)
  VAR_0->limits.io_min = VAR_0->limits.physical_block_size;
}
