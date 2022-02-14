
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* free_queue; size_t free_head; int * state; } ;
typedef TYPE_1__ TW_Device_Extension ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(TW_Device_Extension *VAR_2, int *VAR_3)
{
 *VAR_3 = VAR_2->free_queue[VAR_2->free_head];
 VAR_2->free_head = (VAR_2->free_head + 1) % VAR_0;
 VAR_2->state[*VAR_3] = VAR_1;
}
