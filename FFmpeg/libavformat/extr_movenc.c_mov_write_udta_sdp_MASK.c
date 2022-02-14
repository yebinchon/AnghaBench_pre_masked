
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf ;
struct TYPE_6__ {int * streams; } ;
struct TYPE_5__ {int track_id; int src_track; TYPE_2__* rtp_ctx; } ;
typedef TYPE_1__ MOVTrack ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*,int,int ,int ,int *,int *,int ,int ,TYPE_2__*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    AVFormatContext *VAR_2 = VAR_1->rtp_ctx;
    char VAR_3[1000] = "";
    int VAR_4;

    FUNC_3(VAR_3, sizeof(VAR_3), VAR_2->streams[0], VAR_1->src_track,
                       ((void*)0), ((void*)0), 0, 0, VAR_2);
    FUNC_0(VAR_3, sizeof(VAR_3), "a=control:streamid=%d\r\n", VAR_1->track_id);
    VAR_4 = FUNC_5(VAR_3);

    FUNC_1(VAR_0, VAR_4 + 24);
    FUNC_4(VAR_0, "udta");
    FUNC_1(VAR_0, VAR_4 + 16);
    FUNC_4(VAR_0, "hnti");
    FUNC_1(VAR_0, VAR_4 + 8);
    FUNC_4(VAR_0, "sdp ");
    FUNC_2(VAR_0, VAR_3, VAR_4);
    return VAR_4 + 24;
}
