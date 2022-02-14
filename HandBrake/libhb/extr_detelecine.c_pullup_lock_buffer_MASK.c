
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_buffer {int * lock; } ;



struct pullup_buffer * FUNC_0( struct pullup_buffer * VAR_0,
                                           int VAR_1 )
{
    if( !VAR_0 ) return 0;
    if( (VAR_1+1) & 1 ) VAR_0->lock[0]++;
    if( (VAR_1+1) & 2 ) VAR_0->lock[1]++;

    return VAR_0;
}
