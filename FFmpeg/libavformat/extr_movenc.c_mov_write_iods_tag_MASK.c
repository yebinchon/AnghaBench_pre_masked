
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int iods_audio_profile; int iods_video_profile; int nb_streams; int flags; TYPE_2__* tracks; } ;
struct TYPE_6__ {scalar_t__ entry; TYPE_1__* par; } ;
struct TYPE_5__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ MOVMuxContext ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_3, MOVMuxContext *VAR_4)
{
    int VAR_5, VAR_6 = 0, VAR_7 = 0;
    int64_t VAR_8 = FUNC_0(VAR_3);
    int VAR_9 = VAR_4->iods_audio_profile;
    int VAR_10 = VAR_4->iods_video_profile;
    for (VAR_5 = 0; VAR_5 < VAR_4->nb_streams; VAR_5++) {
        if (VAR_4->tracks[VAR_5].entry > 0 || VAR_4->flags & VAR_2) {
            VAR_6 |= VAR_4->tracks[VAR_5].par->codec_type == VAR_0;
            VAR_7 |= VAR_4->tracks[VAR_5].par->codec_type == VAR_1;
        }
    }
    if (VAR_9 < 0)
        VAR_9 = 0xFF - VAR_6;
    if (VAR_10 < 0)
        VAR_10 = 0xFF - VAR_7;
    FUNC_3(VAR_3, 0x0);
    FUNC_4(VAR_3, "iods");
    FUNC_3(VAR_3, 0);
    FUNC_5(VAR_3, 0x10, 7);
    FUNC_2(VAR_3, 0x004f);
    FUNC_1(VAR_3, 0xff);
    FUNC_1(VAR_3, 0xff);
    FUNC_1(VAR_3, VAR_9);
    FUNC_1(VAR_3, VAR_10);
    FUNC_1(VAR_3, 0xff);
    return FUNC_6(VAR_3, VAR_8);
}
