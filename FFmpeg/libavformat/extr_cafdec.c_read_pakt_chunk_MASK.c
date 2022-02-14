
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {TYPE_2__** streams; TYPE_1__* priv_data; int * pb; } ;
struct TYPE_8__ {scalar_t__ duration; void* nb_frames; } ;
struct TYPE_7__ {int num_bytes; scalar_t__ frames_per_packet; scalar_t__ bytes_per_packet; } ;
typedef TYPE_1__ CafContext ;
typedef TYPE_2__ AVStream ;
typedef int AVIndexEntry ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_4, int64_t VAR_5)
{
    AVIOContext *VAR_6 = VAR_4->pb;
    AVStream *VAR_7 = VAR_4->streams[0];
    CafContext *VAR_8 = VAR_4->priv_data;
    int64_t VAR_9 = 0, VAR_10, VAR_11;
    int VAR_12;

    VAR_10 = FUNC_5(VAR_6);

    VAR_11 = FUNC_3(VAR_6);
    if (VAR_11 < 0 || VAR_3 / sizeof(AVIndexEntry) < VAR_11)
        return VAR_0;

    VAR_7->nb_frames = FUNC_3(VAR_6);
    VAR_7->nb_frames += FUNC_2(VAR_6);
    VAR_7->nb_frames += FUNC_2(VAR_6);

    VAR_7->duration = 0;
    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
        FUNC_0(VAR_4->streams[0], VAR_9, VAR_7->duration, 0, 0, VAR_1);
        VAR_9 += VAR_8->bytes_per_packet ? VAR_8->bytes_per_packet : FUNC_6(VAR_6);
        VAR_7->duration += VAR_8->frames_per_packet ? VAR_8->frames_per_packet : FUNC_6(VAR_6);
    }

    if (FUNC_5(VAR_6) - VAR_10 > VAR_5) {
        FUNC_1(VAR_4, VAR_2, "error reading packet table\n");
        return VAR_0;
    }
    FUNC_4(VAR_6, VAR_10 + VAR_5 - FUNC_5(VAR_6));

    VAR_8->num_bytes = VAR_9;
    return 0;
}
