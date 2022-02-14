
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int resync_pos; scalar_t__ done; } ;
typedef TYPE_1__ MatroskaDemuxContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    MatroskaDemuxContext *VAR_3 = VAR_1->priv_data;
    int VAR_4 = 0;

    if (VAR_3->resync_pos == -1) {

        VAR_3->resync_pos = FUNC_0(VAR_1->pb);
    }

    while (FUNC_1(VAR_3, VAR_2)) {
        if (VAR_3->done)
            return (VAR_4 < 0) ? VAR_4 : VAR_0;
        if (FUNC_2(VAR_3) < 0 && !VAR_3->done)
            VAR_4 = FUNC_3(VAR_3, VAR_3->resync_pos);
    }

    return 0;
}
