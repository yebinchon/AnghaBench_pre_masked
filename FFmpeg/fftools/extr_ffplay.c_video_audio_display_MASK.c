
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_6__ {int channels; int freq; } ;
struct TYPE_7__ {int height; scalar_t__ show_mode; int width; int audio_write_buf_size; int* sample_array; int last_i_start; int ytop; int xleft; int rdft_bits; double* rdft_data; int xpos; int paused; int vis_texture; int rdft; scalar_t__ sample_array_index; TYPE_1__ audio_tgt; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_8__ {int x; int w; int h; int y; } ;
typedef TYPE_3__ SDL_Rect ;
typedef double FFTSample ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_3__*,void**,int*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int ,int,int,int,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (double*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,char*) ;
 double* FUNC_8 (int,int) ;
 int FUNC_9 (int ,double*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (int,int,int,int) ;
 double FUNC_14 (double,double) ;
 scalar_t__ FUNC_15 (int *,int ,int,int,int ,int) ;
 int VAR_8 ;
 int FUNC_16 (double) ;

__attribute__((used)) static void FUNC_17(VideoState *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    int VAR_19, VAR_20, VAR_21, VAR_22;
    int64_t VAR_23;
    int VAR_24, VAR_25;

    for (VAR_24 = 1; (1 << VAR_24) < 2 * VAR_9->height; VAR_24++)
        ;
    VAR_25 = 1 << (VAR_24 - 1);


    VAR_20 = VAR_9->audio_tgt.channels;
    VAR_18 = VAR_20;
    if (!VAR_9->paused) {
        int VAR_26= VAR_9->show_mode == VAR_6 ? VAR_9->width : (2*VAR_25);
        VAR_17 = 2 * VAR_20;
        VAR_16 = VAR_9->audio_write_buf_size;
        VAR_16 /= VAR_17;



        if (VAR_7) {
            VAR_23 = FUNC_6() - VAR_7;
            VAR_16 -= (VAR_23 * VAR_9->audio_tgt.freq) / 1000000;
        }

        VAR_16 += 2 * VAR_26;
        if (VAR_16 < VAR_26)
            VAR_16 = VAR_26;

        VAR_11= VAR_12 = FUNC_12(VAR_9->sample_array_index - VAR_16 * VAR_20, VAR_3);
        if (VAR_9->show_mode == VAR_6) {
            VAR_21 = VAR_2;
            for (VAR_10 = 0; VAR_10 < 1000; VAR_10 += VAR_20) {
                int VAR_27 = (VAR_3 + VAR_12 - VAR_10) % VAR_3;
                int VAR_28 = VAR_9->sample_array[VAR_27];
                int VAR_29 = VAR_9->sample_array[(VAR_27 + 4 * VAR_20) % VAR_3];
                int VAR_30 = VAR_9->sample_array[(VAR_27 + 5 * VAR_20) % VAR_3];
                int VAR_31 = VAR_9->sample_array[(VAR_27 + 9 * VAR_20) % VAR_3];
                int VAR_32 = VAR_28 - VAR_31;
                if (VAR_21 < VAR_32 && (VAR_29 ^ VAR_30) < 0) {
                    VAR_21 = VAR_32;
                    VAR_11 = VAR_27;
                }
            }
        }

        VAR_9->last_i_start = VAR_11;
    } else {
        VAR_11 = VAR_9->last_i_start;
    }

    if (VAR_9->show_mode == VAR_6) {
        FUNC_3(VAR_8, 255, 255, 255, 255);


        VAR_21 = VAR_9->height / VAR_18;

        VAR_22 = (VAR_21 * 9) / 20;
        for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
            VAR_10 = VAR_11 + VAR_19;
            VAR_13 = VAR_9->ytop + VAR_19 * VAR_21 + (VAR_21 / 2);
            for (VAR_12 = 0; VAR_12 < VAR_9->width; VAR_12++) {
                VAR_14 = (VAR_9->sample_array[VAR_10] * VAR_22) >> 15;
                if (VAR_14 < 0) {
                    VAR_14 = -VAR_14;
                    VAR_15 = VAR_13 - VAR_14;
                } else {
                    VAR_15 = VAR_13;
                }
                FUNC_13(VAR_9->xleft + VAR_12, VAR_15, 1, VAR_14);
                VAR_10 += VAR_20;
                if (VAR_10 >= VAR_3)
                    VAR_10 -= VAR_3;
            }
        }

        FUNC_3(VAR_8, 0, 0, 255, 255);

        for (VAR_19 = 1; VAR_19 < VAR_18; VAR_19++) {
            VAR_14 = VAR_9->ytop + VAR_19 * VAR_21;
            FUNC_13(VAR_9->xleft, VAR_14, VAR_9->width, 1);
        }
    } else {
        if (FUNC_15(&VAR_9->vis_texture, VAR_5, VAR_9->width, VAR_9->height, VAR_4, 1) < 0)
            return;

        VAR_18= FUNC_0(VAR_18, 2);
        if (VAR_24 != VAR_9->rdft_bits) {
            FUNC_10(VAR_9->rdft);
            FUNC_5(VAR_9->rdft_data);
            VAR_9->rdft = FUNC_11(VAR_24, VAR_1);
            VAR_9->rdft_bits = VAR_24;
            VAR_9->rdft_data = FUNC_8(VAR_25, 4 *sizeof(*VAR_9->rdft_data));
        }
        if (!VAR_9->rdft || !VAR_9->rdft_data){
            FUNC_7(((void*)0), VAR_0, "Failed to allocate buffers for RDFT, switching to waves display\n");
            VAR_9->show_mode = VAR_6;
        } else {
            FFTSample *VAR_33[2];
            SDL_Rect VAR_34 = {.x = VAR_9->xpos, .y = 0, .w = 1, .h = VAR_9->height};
            uint32_t *VAR_35;
            int VAR_36;
            for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
                VAR_33[VAR_19] = VAR_9->rdft_data + 2 * VAR_25 * VAR_19;
                VAR_10 = VAR_11 + VAR_19;
                for (VAR_12 = 0; VAR_12 < 2 * VAR_25; VAR_12++) {
                    double VAR_37 = (VAR_12-VAR_25) * (1.0 / VAR_25);
                    VAR_33[VAR_19][VAR_12] = VAR_9->sample_array[VAR_10] * (1.0 - VAR_37 * VAR_37);
                    VAR_10 += VAR_20;
                    if (VAR_10 >= VAR_3)
                        VAR_10 -= VAR_3;
                }
                FUNC_9(VAR_9->rdft, VAR_33[VAR_19]);
            }


            if (!FUNC_1(VAR_9->vis_texture, &VAR_34, (void **)&VAR_35, &VAR_36)) {
                VAR_36 >>= 2;
                VAR_35 += VAR_36 * VAR_9->height;
                for (VAR_14 = 0; VAR_14 < VAR_9->height; VAR_14++) {
                    double VAR_38 = 1 / FUNC_16(VAR_25);
                    int VAR_39 = FUNC_16(VAR_38 * FUNC_16(VAR_33[0][2 * VAR_14 + 0] * VAR_33[0][2 * VAR_14 + 0] + VAR_33[0][2 * VAR_14 + 1] * VAR_33[0][2 * VAR_14 + 1]));
                    int VAR_40 = (VAR_18 == 2 ) ? FUNC_16(VAR_38 * FUNC_14(VAR_33[1][2 * VAR_14 + 0], VAR_33[1][2 * VAR_14 + 1]))
                                                        : VAR_39;
                    VAR_39 = FUNC_0(VAR_39, 255);
                    VAR_40 = FUNC_0(VAR_40, 255);
                    VAR_35 -= VAR_36;
                    *VAR_35 = (VAR_39 << 16) + (VAR_40 << 8) + ((VAR_39+VAR_40) >> 1);
                }
                FUNC_4(VAR_9->vis_texture);
            }
            FUNC_2(VAR_8, VAR_9->vis_texture, ((void*)0), ((void*)0));
        }
        if (!VAR_9->paused)
            VAR_9->xpos++;
        if (VAR_9->xpos >= VAR_9->width)
            VAR_9->xpos= VAR_9->xleft;
    }
}
