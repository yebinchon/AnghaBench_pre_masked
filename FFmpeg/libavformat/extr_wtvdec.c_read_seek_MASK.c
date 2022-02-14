
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {scalar_t__ epoch; int nb_index_entries; scalar_t__ last_valid_pts; scalar_t__ pts; TYPE_6__* index_entries; int * pb; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_10__ {scalar_t__ timestamp; int pos; } ;
struct TYPE_9__ {TYPE_2__** streams; TYPE_1__* priv_data; } ;
struct TYPE_8__ {scalar_t__ duration; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_6__*,int,scalar_t__,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_7, int VAR_8,
                     int64_t VAR_9, int VAR_10)
{
    WtvContext *VAR_11 = VAR_7->priv_data;
    AVIOContext *VAR_12 = VAR_11->pb;
    AVStream *VAR_13 = VAR_7->streams[0];
    int64_t VAR_14;
    int VAR_15;

    if ((VAR_10 & VAR_1) || (VAR_10 & VAR_0))
        return FUNC_0(VAR_3);



    VAR_14 = VAR_9;
    if (VAR_11->epoch != VAR_2)
        VAR_14 -= VAR_11->epoch;

    VAR_15 = FUNC_2(VAR_11->index_entries, VAR_11->nb_index_entries, VAR_14, VAR_10);
    if (VAR_15 < 0) {
        if (VAR_11->last_valid_pts == VAR_2 || VAR_9 < VAR_11->last_valid_pts) {
            if (FUNC_1(VAR_12, 0, VAR_5) < 0)
                return -1;
        } else if (VAR_13->duration != VAR_2 && VAR_14 > VAR_13->duration && VAR_11->nb_index_entries) {
            if (FUNC_1(VAR_12, VAR_11->index_entries[VAR_11->nb_index_entries - 1].pos, VAR_5) < 0)
                return -1;
        }
        if (FUNC_3(VAR_7, VAR_6, VAR_9, 0) < 0)
            return FUNC_0(VAR_4);
        return 0;
    }
    if (FUNC_1(VAR_12, VAR_11->index_entries[VAR_15].pos, VAR_5) < 0)
        return -1;
    VAR_11->pts = VAR_11->index_entries[VAR_15].timestamp;
    if (VAR_11->epoch != VAR_2)
        VAR_11->pts += VAR_11->epoch;
    VAR_11->last_valid_pts = VAR_11->pts;
    return 0;
}
