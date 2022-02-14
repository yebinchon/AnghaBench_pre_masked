
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int stream; } ;
struct TYPE_9__ {int pid; int pcr_pid; void* dts; void* pts; int state; int stream; TYPE_2__* ts; } ;
typedef TYPE_1__ PESContext ;
typedef int MpegTSFilter ;
typedef TYPE_2__ MpegTSContext ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (TYPE_2__*,int,int ,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static PESContext *FUNC_3(MpegTSContext *VAR_3, int VAR_4, int VAR_5)
{
    MpegTSFilter *VAR_6;
    PESContext *VAR_7;


    VAR_7 = FUNC_1(sizeof(PESContext));
    if (!VAR_7)
        return 0;
    VAR_7->ts = VAR_3;
    VAR_7->stream = VAR_3->stream;
    VAR_7->pid = VAR_4;
    VAR_7->pcr_pid = VAR_5;
    VAR_7->state = VAR_1;
    VAR_7->pts = VAR_0;
    VAR_7->dts = VAR_0;
    VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_2, VAR_7);
    if (!VAR_6) {
        FUNC_0(VAR_7);
        return 0;
    }
    return VAR_7;
}
