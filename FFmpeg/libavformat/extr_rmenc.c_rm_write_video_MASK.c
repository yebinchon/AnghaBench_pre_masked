
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_9__ {TYPE_1__* video_stream; } ;
struct TYPE_8__ {int nb_frames; } ;
typedef TYPE_1__ StreamInfo ;
typedef TYPE_2__ RMMuxContext ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_4, const uint8_t *VAR_5, int VAR_6, int VAR_7)
{
    RMMuxContext *VAR_8 = VAR_4->priv_data;
    AVIOContext *VAR_9 = VAR_4->pb;
    StreamInfo *VAR_10 = VAR_8->video_stream;
    int VAR_11 = !!(VAR_7 & VAR_2);





    if (VAR_6 > VAR_3) {
        FUNC_0(VAR_4, VAR_1, "Muxing packets larger than 64 kB (%d) is not supported\n", VAR_6);
        return VAR_0;
    }
    FUNC_5(VAR_4, VAR_10, VAR_6 + 7 + (VAR_6 >= 0x4000)*4, VAR_11);

    FUNC_1(VAR_9, 0x81);


    if (VAR_11) {
        FUNC_1(VAR_9, 0x81);
    } else {
        FUNC_1(VAR_9, 0x01);
    }
    if(VAR_6 >= 0x4000){
        FUNC_3(VAR_9, VAR_6);
        FUNC_3(VAR_9, VAR_6);
    }else{
        FUNC_2(VAR_9, 0x4000 | VAR_6);
        FUNC_2(VAR_9, 0x4000 | VAR_6);
    }
    FUNC_1(VAR_9, VAR_10->nb_frames & 0xff);

    FUNC_4(VAR_9, VAR_5, VAR_6);

    VAR_10->nb_frames++;
    return 0;
}
