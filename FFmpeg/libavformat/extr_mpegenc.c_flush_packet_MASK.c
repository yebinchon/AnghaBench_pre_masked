
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef double int64_t ;
struct TYPE_15__ {int pb; TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_14__ {int packet_number; int pack_header_freq; double last_scr; int packet_size; long long mux_rate; int system_header_freq; scalar_t__ is_mpeg2; scalar_t__ is_dvd; scalar_t__ is_svcd; scalar_t__ is_vcd; } ;
struct TYPE_13__ {int id; scalar_t__ packet_number; int bytes_to_iframe; int lpcm_align; int max_buffer_size; int* lpcm_header; int fifo; scalar_t__ align_iframe; } ;
struct TYPE_12__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ StreamInfo ;
typedef TYPE_3__ MpegMuxContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,void (*) (void*,void*,int)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,char*,int,double) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (TYPE_4__*,TYPE_2__*,int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (TYPE_4__*,int *,double) ;
 int FUNC_12 (TYPE_4__*,int ,int) ;
 int FUNC_13 (TYPE_4__*,int *,int) ;
 int FUNC_14 (int ,int,double) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_5, int VAR_6,
                        int64_t VAR_7, int64_t VAR_8, int64_t VAR_9, int VAR_10)
{
    MpegMuxContext *VAR_11 = VAR_5->priv_data;
    StreamInfo *VAR_12 = VAR_5->streams[VAR_6]->priv_data;
    uint8_t *VAR_13;
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21;
    uint8_t VAR_22[128];
    int VAR_23 = 0;
    int VAR_24 = 0;
    int VAR_25;

    int VAR_26 = 0;
    int VAR_27;

    VAR_17 = VAR_12->id;

    FUNC_3(VAR_5, VAR_1, "packet ID=%2x PTS=%0.3f\n", VAR_17, VAR_7 / 90000.0);

    VAR_13 = VAR_22;

    if ((VAR_11->packet_number % VAR_11->pack_header_freq) == 0 || VAR_11->last_scr != VAR_9) {

        VAR_14 = FUNC_11(VAR_5, VAR_13, VAR_9);
        VAR_13 += VAR_14;
        VAR_11->last_scr = VAR_9;

        if (VAR_11->is_vcd) {




            if (VAR_12->packet_number == 0) {
                VAR_14 = FUNC_13(VAR_5, VAR_13, VAR_17);
                VAR_13 += VAR_14;
            }
        } else if (VAR_11->is_dvd) {
            if (VAR_12->align_iframe || VAR_11->packet_number == 0) {
                int VAR_28 = VAR_11->packet_size - VAR_14 - 10;

                if (VAR_7 != VAR_2) {
                    if (VAR_8 != VAR_7)
                        VAR_28 -= 5 + 5;
                    else
                        VAR_28 -= 5;
                }

                if (VAR_12->bytes_to_iframe == 0 || VAR_11->packet_number == 0) {
                    VAR_14 = FUNC_13(VAR_5, VAR_13, 0);
                    VAR_13 += VAR_14;
                    VAR_14 = VAR_13 - VAR_22;
                    FUNC_8(VAR_5->pb, VAR_22, VAR_14);

                    FUNC_7(VAR_5->pb, VAR_4);
                    FUNC_6(VAR_5->pb, 0x03d4);
                    FUNC_5(VAR_5->pb, 0x00);
                    for (VAR_19 = 0; VAR_19 < 979; VAR_19++)
                        FUNC_5(VAR_5->pb, 0x00);

                    FUNC_7(VAR_5->pb, VAR_4);
                    FUNC_6(VAR_5->pb, 0x03fa);
                    FUNC_5(VAR_5->pb, 0x01);
                    for (VAR_19 = 0; VAR_19 < 1017; VAR_19++)
                        FUNC_5(VAR_5->pb, 0x00);

                    FUNC_10(VAR_22, 0, 128);
                    VAR_13 = VAR_22;
                    VAR_11->packet_number++;
                    VAR_12->align_iframe = 0;

                    VAR_9 += VAR_11->packet_size * 90000LL /
                                  (VAR_11->mux_rate * 50LL);
                    VAR_14 = FUNC_11(VAR_5, VAR_13, VAR_9);
                    VAR_11->last_scr = VAR_9;
                    VAR_13 += VAR_14;

                } else if (VAR_12->bytes_to_iframe < VAR_28) {
                    VAR_24 = VAR_28 -
                                       VAR_12->bytes_to_iframe;
                }
            }
        } else {
            if ((VAR_11->packet_number % VAR_11->system_header_freq) == 0) {
                VAR_14 = FUNC_13(VAR_5, VAR_13, 0);
                VAR_13 += VAR_14;
            }
        }
    }
    VAR_14 = VAR_13 - VAR_22;
    FUNC_8(VAR_5->pb, VAR_22, VAR_14);

    VAR_21 = VAR_11->packet_size - VAR_14;

    if (VAR_11->is_vcd && (VAR_17 & 0xe0) == VAR_0)


        VAR_23 += 20;

    if ((VAR_11->is_vcd && VAR_12->packet_number == 0) ||
        (VAR_11->is_svcd && VAR_11->packet_number == 0)) {






        if (VAR_11->is_svcd)

            VAR_26 = 1;
        VAR_24 = VAR_21 - VAR_23;
    }

    VAR_21 -= VAR_24 + VAR_23;

    if (VAR_21 > 0) {

        VAR_21 -= 6;


        if (VAR_11->is_mpeg2) {
            VAR_20 = 3;
            if (VAR_12->packet_number == 0)
                VAR_20 += 3;
            VAR_20 += 1;
        } else {
            VAR_20 = 0;
        }
        if (VAR_7 != VAR_2) {
            if (VAR_8 != VAR_7)
                VAR_20 += 5 + 5;
            else
                VAR_20 += 5;
        } else {
            if (!VAR_11->is_mpeg2)
                VAR_20++;
        }

        VAR_15 = VAR_21 - VAR_20;
        if (VAR_17 < 0xc0) {
            VAR_16 = VAR_3;
            VAR_15 -= 1;
            if (VAR_17 >= 0x40) {
                VAR_15 -= 3;
                if (VAR_17 >= 0xa0)
                    VAR_15 -= 3;
            }
        } else {
            VAR_16 = 0x100 + VAR_17;
        }

        VAR_18 = VAR_15 - FUNC_2(VAR_12->fifo);


        if (VAR_15 <= VAR_10 && VAR_7 != VAR_2) {
            int VAR_29 = 0;
            if (VAR_8 != VAR_7)
                VAR_29 += 5;
            if (VAR_7 != VAR_2)
                VAR_29 += VAR_11->is_mpeg2 ? 5 : 4;
            VAR_7 =
            VAR_8 = VAR_2;
            VAR_20 -= VAR_29;
            if (VAR_11->is_dvd && VAR_12->align_iframe) {
                VAR_24 += VAR_29;
                VAR_21 -= VAR_29;
            } else {
                VAR_15 += VAR_29;
            }
            VAR_18 += VAR_29;
            if (VAR_15 > VAR_10)
                VAR_18 += VAR_15 - VAR_10;
        }


        if (VAR_24 > 0 && VAR_24 <= 7) {
            VAR_21 += VAR_24;
            VAR_15 += VAR_24;
            if (VAR_18 < 0)
                VAR_18 = VAR_24;
            else
                VAR_18 += VAR_24;
            VAR_24 = 0;
        }

        if (VAR_18 < 0)
            VAR_18 = 0;

        if (VAR_16 == VAR_3 && VAR_17 >= 0xa0) {
            if (VAR_15 < FUNC_2(VAR_12->fifo))
                VAR_18 += VAR_15 % VAR_12->lpcm_align;
        }

        if (VAR_18 > 16) {
            VAR_24 += VAR_18;
            VAR_21 -= VAR_18;
            VAR_15 -= VAR_18;
            VAR_18 = 0;
        }

        VAR_27 = FUNC_9(VAR_5, VAR_12, VAR_15 - VAR_18);

        FUNC_7(VAR_5->pb, VAR_16);

        FUNC_6(VAR_5->pb, VAR_21);

        if (!VAR_11->is_mpeg2)
            for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
                FUNC_5(VAR_5->pb, 0xff);

        if (VAR_11->is_mpeg2) {
            FUNC_5(VAR_5->pb, 0x80);

            VAR_25 = 0;

            if (VAR_7 != VAR_2) {
                VAR_25 |= 0x80;
                if (VAR_8 != VAR_7)
                    VAR_25 |= 0x40;
            }





            if (VAR_12->packet_number == 0)
                VAR_25 |= 0x01;

            FUNC_5(VAR_5->pb, VAR_25);
            FUNC_5(VAR_5->pb, VAR_20 - 3 + VAR_18);

            if (VAR_25 & 0x80)
                FUNC_14(VAR_5->pb, (VAR_25 & 0x40) ? 0x03 : 0x02, VAR_7);
            if (VAR_25 & 0x40)
                FUNC_14(VAR_5->pb, 0x01, VAR_8);

            if (VAR_25 & 0x01) {
                FUNC_5(VAR_5->pb, 0x10);


                if ((VAR_17 & 0xe0) == VAR_0)
                    FUNC_6(VAR_5->pb, 0x4000 | VAR_12->max_buffer_size / 128);
                else
                    FUNC_6(VAR_5->pb, 0x6000 | VAR_12->max_buffer_size / 1024);
            }
        } else {
            if (VAR_7 != VAR_2) {
                if (VAR_8 != VAR_7) {
                    FUNC_14(VAR_5->pb, 0x03, VAR_7);
                    FUNC_14(VAR_5->pb, 0x01, VAR_8);
                } else {
                    FUNC_14(VAR_5->pb, 0x02, VAR_7);
                }
            } else {
                FUNC_5(VAR_5->pb, 0x0f);
            }
        }

        if (VAR_11->is_mpeg2) {


            FUNC_5(VAR_5->pb, 0xff);

            for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
                FUNC_5(VAR_5->pb, 0xff);
        }

        if (VAR_16 == VAR_3) {
            FUNC_5(VAR_5->pb, VAR_17);
            if (VAR_17 >= 0xa0) {

                FUNC_5(VAR_5->pb, 7);
                FUNC_6(VAR_5->pb, 4);
                FUNC_5(VAR_5->pb, VAR_12->lpcm_header[0]);
                FUNC_5(VAR_5->pb, VAR_12->lpcm_header[1]);
                FUNC_5(VAR_5->pb, VAR_12->lpcm_header[2]);
            } else if (VAR_17 >= 0x40) {

                FUNC_5(VAR_5->pb, VAR_27);
                FUNC_6(VAR_5->pb, VAR_10 + 1);
            }
        }


        FUNC_0(VAR_15 - VAR_18 <= FUNC_2(VAR_12->fifo));
        FUNC_1(VAR_12->fifo, VAR_5->pb,
                             VAR_15 - VAR_18,
                             (void (*)(void*, void*, int))FUNC_8);
        VAR_12->bytes_to_iframe -= VAR_15 - VAR_18;
    } else {
        VAR_15 =
        VAR_18 = 0;
    }

    if (VAR_24 > 0)
        FUNC_12(VAR_5, VAR_5->pb, VAR_24);

    for (VAR_19 = 0; VAR_19 < VAR_23; VAR_19++)
        FUNC_5(VAR_5->pb, 0x00);

    FUNC_4(VAR_5->pb);

    VAR_11->packet_number++;




    if (!VAR_26)
        VAR_12->packet_number++;

    return VAR_15 - VAR_18;
}
