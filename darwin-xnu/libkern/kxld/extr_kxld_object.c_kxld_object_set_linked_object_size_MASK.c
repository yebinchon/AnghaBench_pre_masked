
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_long ;
struct TYPE_5__ {void* linkedKextSize; } ;
struct TYPE_6__ {TYPE_1__ split_info; void* output_buffer_size; } ;
typedef TYPE_2__ KXLDObject ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(KXLDObject *VAR_1, u_long VAR_2)
{
    FUNC_0(VAR_1);

    if (VAR_0) {
        VAR_1->output_buffer_size = VAR_2;
    }
    else {
        VAR_1->split_info.linkedKextSize = VAR_2;
    }
    return;
}
