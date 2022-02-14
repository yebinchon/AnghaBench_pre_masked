
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {void* b_private; int * b_end_io; } ;
typedef int bh_end_io_t ;



inline void
FUNC_0(struct buffer_head *VAR_0, bh_end_io_t *VAR_1, void *VAR_2)
{
 VAR_0->b_end_io = VAR_1;
 VAR_0->b_private = VAR_2;
}
