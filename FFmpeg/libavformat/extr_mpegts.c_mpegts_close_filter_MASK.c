
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int ** pids; } ;
struct TYPE_12__ {TYPE_4__* opaque; } ;
struct TYPE_11__ {TYPE_4__* section_buf; } ;
struct TYPE_13__ {TYPE_2__ pes_filter; TYPE_1__ section_filter; } ;
struct TYPE_15__ {int pid; scalar_t__ type; TYPE_3__ u; } ;
struct TYPE_14__ {scalar_t__ merged_st; int st; int buffer; } ;
typedef TYPE_4__ PESContext ;
typedef TYPE_5__ MpegTSFilter ;
typedef TYPE_6__ MpegTSContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__**) ;

__attribute__((used)) static void FUNC_3(MpegTSContext *VAR_2, MpegTSFilter *VAR_3)
{
    int VAR_4;

    VAR_4 = VAR_3->pid;
    if (VAR_3->type == VAR_1)
        FUNC_2(&VAR_3->u.section_filter.section_buf);
    else if (VAR_3->type == VAR_0) {
        PESContext *VAR_5 = VAR_3->u.pes_filter.opaque;
        FUNC_0(&VAR_5->buffer);


        if (!VAR_5->st || VAR_5->merged_st) {
            FUNC_2(&VAR_3->u.pes_filter.opaque);
        }
    }

    FUNC_1(VAR_3);
    VAR_2->pids[VAR_4] = ((void*)0);
}
