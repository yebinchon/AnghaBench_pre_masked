
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WriterContext ;
struct TYPE_6__ {int id; int program_num; int nb_stream_indexes; int pmt_pid; int pcr_pid; size_t* stream_index; int metadata; int end_time; int start_time; } ;
struct TYPE_5__ {int * streams; int * fmt_ctx; } ;
typedef TYPE_1__ InputFile ;
typedef TYPE_2__ AVProgram ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__* VAR_5 ;
 int FUNC_3 (int *,int *,size_t,int *,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(WriterContext *VAR_6, InputFile *VAR_7, AVProgram *VAR_8)
{
    AVFormatContext *VAR_9 = VAR_7->fmt_ctx;
    int VAR_10, VAR_11 = 0;

    FUNC_6(VAR_6, VAR_1);
    FUNC_0("program_id", VAR_8->id);
    FUNC_0("program_num", VAR_8->program_num);
    FUNC_0("nb_streams", VAR_8->nb_stream_indexes);
    FUNC_0("pmt_pid", VAR_8->pmt_pid);
    FUNC_0("pcr_pid", VAR_8->pcr_pid);
    FUNC_2("start_pts", VAR_8->start_time);
    FUNC_1("start_time", VAR_8->start_time, &VAR_0);
    FUNC_2("end_pts", VAR_8->end_time);
    FUNC_1("end_time", VAR_8->end_time, &VAR_0);
    if (VAR_4)
        VAR_11 = FUNC_4(VAR_6, VAR_8->metadata, VAR_3);
    if (VAR_11 < 0)
        goto end;

    FUNC_6(VAR_6, VAR_2);
    for (VAR_10 = 0; VAR_10 < VAR_8->nb_stream_indexes; VAR_10++) {
        if (VAR_5[VAR_8->stream_index[VAR_10]]) {
            VAR_11 = FUNC_3(VAR_6, VAR_9, VAR_8->stream_index[VAR_10], &VAR_7->streams[VAR_8->stream_index[VAR_10]], 1);
            if (VAR_11 < 0)
                break;
        }
    }
    FUNC_5(VAR_6);

end:
    FUNC_5(VAR_6);
    return VAR_11;
}
