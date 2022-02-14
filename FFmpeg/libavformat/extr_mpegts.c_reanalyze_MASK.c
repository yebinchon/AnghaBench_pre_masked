
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int * pb; } ;
struct TYPE_4__ {scalar_t__ pos47_full; scalar_t__* size_stat; scalar_t__ size_stat_count; int raw_packet_size; TYPE_3__* stream; } ;
typedef TYPE_1__ MpegTSContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_3(MpegTSContext *VAR_5) {
    AVIOContext *VAR_6 = VAR_5->stream->pb;
    int64_t VAR_7 = FUNC_1(VAR_6);
    if (VAR_7 < 0)
        return;
    VAR_7 -= VAR_5->pos47_full;
    if (VAR_7 == VAR_4) {
        VAR_5->size_stat[0] ++;
    } else if (VAR_7 == VAR_2) {
        VAR_5->size_stat[1] ++;
    } else if (VAR_7 == VAR_3) {
        VAR_5->size_stat[2] ++;
    }

    VAR_5->size_stat_count ++;
    if (VAR_5->size_stat_count > VAR_1) {
        int VAR_8 = 0;
        if (VAR_5->size_stat[0] > VAR_1) {
            VAR_8 = VAR_4;
        } else if (VAR_5->size_stat[1] > VAR_1) {
            VAR_8 = VAR_2;
        } else if (VAR_5->size_stat[2] > VAR_1) {
            VAR_8 = VAR_3;
        }
        if (VAR_8 && VAR_8 != VAR_5->raw_packet_size) {
            FUNC_0(VAR_5->stream, VAR_0, "changing packet size to %d\n", VAR_8);
            VAR_5->raw_packet_size = VAR_8;
        }
        VAR_5->size_stat_count = 0;
        FUNC_2(VAR_5->size_stat, 0, sizeof(VAR_5->size_stat));
    }
}
