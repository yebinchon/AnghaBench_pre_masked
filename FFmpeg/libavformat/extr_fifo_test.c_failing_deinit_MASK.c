
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int flush_count; int pts_written_nr; int * pts_written; int print_deinit_summary; } ;
typedef TYPE_1__ FailingMuxerContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0)
{
    int VAR_1;
    FailingMuxerContext *VAR_2 = VAR_0->priv_data;

    if (!VAR_2->print_deinit_summary)
        return;

    FUNC_0("flush count: %d\n", VAR_2->flush_count);
    FUNC_0("pts seen nr: %d\n", VAR_2->pts_written_nr);
    FUNC_0("pts seen: ");
    for (VAR_1 = 0; VAR_1 < VAR_2->pts_written_nr; ++VAR_1 ) {
        FUNC_0(VAR_1 ? ",%d" : "%d", VAR_2->pts_written[VAR_1]);
    }
    FUNC_0("\n");
}
