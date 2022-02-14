
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* skipped_bytes_pos; } ;
struct TYPE_5__ {scalar_t__ rbsp_buffer_size; scalar_t__ rbsp_buffer_alloc_size; TYPE_4__* rbsp_buffer; scalar_t__ rbsp_buffer_ref; } ;
struct TYPE_6__ {int nals_allocated; int nal_buffer_size; TYPE_1__ rbsp; TYPE_4__* nals; } ;
typedef TYPE_2__ H2645Packet ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (TYPE_4__**) ;

void FUNC_2(H2645Packet *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->nals_allocated; VAR_1++) {
        FUNC_1(&VAR_0->nals[VAR_1].skipped_bytes_pos);
    }
    FUNC_1(&VAR_0->nals);
    VAR_0->nals_allocated = VAR_0->nal_buffer_size = 0;
    if (VAR_0->rbsp.rbsp_buffer_ref) {
        FUNC_0(&VAR_0->rbsp.rbsp_buffer_ref);
        VAR_0->rbsp.rbsp_buffer = ((void*)0);
    } else
        FUNC_1(&VAR_0->rbsp.rbsp_buffer);
    VAR_0->rbsp.rbsp_buffer_alloc_size = VAR_0->rbsp.rbsp_buffer_size = 0;
}
