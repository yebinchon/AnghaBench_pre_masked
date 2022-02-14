
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {int seekable; } ;
struct TYPE_10__ {TYPE_6__* pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_9__ {TYPE_1__* index_entries; } ;
struct TYPE_8__ {int current_track; int audio_pts; scalar_t__ video_pts; scalar_t__ smush_size; } ;
struct TYPE_7__ {scalar_t__ pos; } ;
typedef TYPE_2__ BinkDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2, int VAR_3, int64_t VAR_4, int VAR_5)
{
    BinkDemuxContext *VAR_6 = VAR_2->priv_data;
    AVStream *VAR_7 = VAR_2->streams[0];

    if (!(VAR_2->pb->seekable & VAR_0))
        return -1;


    if (FUNC_0(VAR_2->pb, VAR_7->index_entries[0].pos + VAR_6->smush_size, VAR_1) < 0)
        return -1;

    VAR_6->video_pts = 0;
    FUNC_1(VAR_6->audio_pts, 0, sizeof(VAR_6->audio_pts));
    VAR_6->current_track = -1;
    return 0;
}
