
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum MpegTSFilterType { ____Placeholder_MpegTSFilterType } MpegTSFilterType ;
struct TYPE_7__ {TYPE_1__** pids; int stream; } ;
struct TYPE_6__ {int type; unsigned int pid; int es_id; int last_cc; int last_pcr; } ;
typedef TYPE_1__ MpegTSFilter ;
typedef TYPE_2__ MpegTSContext ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,char*,unsigned int,int) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static MpegTSFilter *FUNC_2(MpegTSContext *VAR_2, unsigned int VAR_3,
                                        enum MpegTSFilterType VAR_4)
{
    MpegTSFilter *VAR_5;

    FUNC_0(VAR_2->stream, VAR_0, "Filter: pid=0x%x type=%d\n", VAR_3, VAR_4);

    if (VAR_3 >= VAR_1 || VAR_2->pids[VAR_3])
        return ((void*)0);
    VAR_5 = FUNC_1(sizeof(MpegTSFilter));
    if (!VAR_5)
        return ((void*)0);
    VAR_2->pids[VAR_3] = VAR_5;

    VAR_5->type = VAR_4;
    VAR_5->pid = VAR_3;
    VAR_5->es_id = -1;
    VAR_5->last_cc = -1;
    VAR_5->last_pcr= -1;

    return VAR_5;
}
