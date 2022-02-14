
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {int flags; int * streams; int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int xing_toc; scalar_t__ usetoc; } ;
typedef TYPE_1__ MP3DecContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int,scalar_t__,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_4, int64_t VAR_5, int64_t VAR_6)
{
    int VAR_7;
    MP3DecContext *VAR_8 = VAR_4->priv_data;
    int VAR_9 = VAR_4->flags & VAR_0;
    int VAR_10 = (VAR_8->usetoc || VAR_9) && VAR_6 > 0;

    if (!VAR_5 &&
        !(VAR_5 = FUNC_4(VAR_4->pb))) {
        FUNC_1(VAR_4, VAR_2, "Cannot determine file size, skipping TOC table.\n");
        VAR_10 = 0;
    }

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
        uint8_t VAR_11 = FUNC_3(VAR_4->pb);
        if (VAR_10)
            FUNC_0(VAR_4->streams[0],
                           FUNC_2(VAR_11, VAR_5, 256),
                           FUNC_2(VAR_7, VAR_6, VAR_3),
                           0, 0, VAR_1);
    }
    if (VAR_10)
        VAR_8->xing_toc = 1;
}
