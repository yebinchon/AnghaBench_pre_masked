
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_buffer; int read_in_ptr; scalar_t__ remaining_in_len; } ;
typedef TYPE_1__ MMSContext ;



__attribute__((used)) static void FUNC_0(MMSContext *VAR_0)
{
    VAR_0->remaining_in_len = 0;
    VAR_0->read_in_ptr = VAR_0->in_buffer;
}
