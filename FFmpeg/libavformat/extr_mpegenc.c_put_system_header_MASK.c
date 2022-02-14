
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int nb_streams; TYPE_1__** streams; TYPE_4__* priv_data; } ;
struct TYPE_15__ {int mux_rate; int audio_bound; int video_bound; scalar_t__ is_vcd; scalar_t__ is_dvd; } ;
struct TYPE_14__ {int buf; } ;
struct TYPE_13__ {int id; int max_buffer_size; } ;
struct TYPE_12__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ StreamInfo ;
typedef TYPE_3__ PutBitContext ;
typedef TYPE_4__ MpegMuxContext ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3, uint8_t *VAR_4,
                             int VAR_5)
{
    MpegMuxContext *VAR_6 = VAR_3->priv_data;
    int VAR_7, VAR_8, VAR_9, VAR_10;
    PutBitContext VAR_11;

    FUNC_2(&VAR_11, VAR_4, 128);

    FUNC_4(&VAR_11, VAR_1);
    FUNC_3(&VAR_11, 16, 0);
    FUNC_3(&VAR_11, 1, 1);


    FUNC_3(&VAR_11, 22, VAR_6->mux_rate);
    FUNC_3(&VAR_11, 1, 1);
    if (VAR_6->is_vcd && VAR_5 == VAR_2) {


        FUNC_3(&VAR_11, 6, 0);
    } else
        FUNC_3(&VAR_11, 6, VAR_6->audio_bound);

    if (VAR_6->is_vcd) {

        FUNC_3(&VAR_11, 1, 0);
        FUNC_3(&VAR_11, 1, 1);
    } else {
        FUNC_3(&VAR_11, 1, 0);
        FUNC_3(&VAR_11, 1, 0);
    }

    if (VAR_6->is_vcd || VAR_6->is_dvd) {

        FUNC_3(&VAR_11, 1, 1);
        FUNC_3(&VAR_11, 1, 1);
    } else {
        FUNC_3(&VAR_11, 1, 0);
        FUNC_3(&VAR_11, 1, 0);
    }

    FUNC_3(&VAR_11, 1, 1);

    if (VAR_6->is_vcd && (VAR_5 & 0xe0) == VAR_0) {


        FUNC_3(&VAR_11, 5, 0);
    } else
        FUNC_3(&VAR_11, 5, VAR_6->video_bound);

    if (VAR_6->is_dvd) {
        FUNC_3(&VAR_11, 1, 0);
        FUNC_3(&VAR_11, 7, 0x7f);
    } else
        FUNC_3(&VAR_11, 8, 0xff);






    if (VAR_6->is_dvd) {

        int VAR_12 = 0;
        int VAR_13 = 0;
        int VAR_14 = 0;

        for (VAR_8 = 0; VAR_8 < VAR_3->nb_streams; VAR_8++) {
            StreamInfo *VAR_15 = VAR_3->streams[VAR_8]->priv_data;

            VAR_10 = VAR_15->id;
            if (VAR_10 == 0xbd && VAR_15->max_buffer_size > VAR_14) {
                VAR_14 = VAR_15->max_buffer_size;
            } else if (VAR_10 >= 0xc0 && VAR_10 <= 0xc7 &&
                       VAR_15->max_buffer_size > VAR_13) {
                VAR_13 = VAR_15->max_buffer_size;
            } else if (VAR_10 == 0xe0 &&
                       VAR_15->max_buffer_size > VAR_12) {
                VAR_12 = VAR_15->max_buffer_size;
            }
        }


        FUNC_3(&VAR_11, 8, 0xb9);
        FUNC_3(&VAR_11, 2, 3);
        FUNC_3(&VAR_11, 1, 1);
        FUNC_3(&VAR_11, 13, VAR_12 / 1024);


        if (VAR_13 == 0)
            VAR_13 = 4096;
        FUNC_3(&VAR_11, 8, 0xb8);
        FUNC_3(&VAR_11, 2, 3);
        FUNC_3(&VAR_11, 1, 0);
        FUNC_3(&VAR_11, 13, VAR_13 / 128);


        FUNC_3(&VAR_11, 8, 0xbd);
        FUNC_3(&VAR_11, 2, 3);
        FUNC_3(&VAR_11, 1, 0);
        FUNC_3(&VAR_11, 13, VAR_14 / 128);


        FUNC_3(&VAR_11, 8, 0xbf);
        FUNC_3(&VAR_11, 2, 3);
        FUNC_3(&VAR_11, 1, 1);
        FUNC_3(&VAR_11, 13, 2);
    } else {

        VAR_9 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_3->nb_streams; VAR_8++) {
            StreamInfo *VAR_16 = VAR_3->streams[VAR_8]->priv_data;




            if (!VAR_6->is_vcd || VAR_16->id == VAR_5 ||
                VAR_5 == 0) {
                VAR_10 = VAR_16->id;
                if (VAR_10 < 0xc0) {

                    if (VAR_9)
                        continue;
                    VAR_9 = 1;
                    VAR_10 = 0xbd;
                }
                FUNC_3(&VAR_11, 8, VAR_10);
                FUNC_3(&VAR_11, 2, 3);
                if (VAR_10 < 0xe0) {

                    FUNC_3(&VAR_11, 1, 0);
                    FUNC_3(&VAR_11, 13, VAR_16->max_buffer_size / 128);
                } else {

                    FUNC_3(&VAR_11, 1, 1);
                    FUNC_3(&VAR_11, 13, VAR_16->max_buffer_size / 1024);
                }
            }
        }
    }

    FUNC_1(&VAR_11);
    VAR_7 = FUNC_5(&VAR_11) - VAR_11.buf;

    FUNC_0(VAR_4 + 4, VAR_7 - 6);

    return VAR_7;
}
