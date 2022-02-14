
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef double uint64_t ;
typedef int int64_t ;
struct TYPE_29__ {double width; int force_refresh; int * vis_texture; int height; TYPE_6__* ic; scalar_t__ seek_pos; int sampq; int audio_stream; int pictq; int video_stream; int vfilter_idx; int show_mode; } ;
typedef TYPE_7__ VideoState ;
struct TYPE_23__ {double data1; int data2; int event; } ;
struct TYPE_27__ {int state; double x; } ;
struct TYPE_26__ {double x; int button; } ;
struct TYPE_24__ {int sym; } ;
struct TYPE_25__ {TYPE_2__ keysym; } ;
struct TYPE_30__ {int type; TYPE_1__ window; TYPE_5__ motion; TYPE_4__ button; TYPE_3__ key; } ;
struct TYPE_28__ {int nb_chapters; double bit_rate; int start_time; double duration; int pb; } ;
typedef TYPE_8__ SDL_Event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;




 int FUNC_1 (int) ;
 int VAR_11 ;



 int VAR_12 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,char*,double,int,int,int,int,int,int) ;
 double FUNC_4 (int ) ;
 double FUNC_5 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (TYPE_7__*) ;
 int VAR_15 ;
 int VAR_16 ;
 double FUNC_7 (int *) ;
 double FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (double) ;
 int VAR_17 ;
 int FUNC_10 (TYPE_7__*,TYPE_8__*) ;
 int VAR_18 ;
 double VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (TYPE_7__*,int) ;
 double VAR_21 ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_7__*,int ) ;
 int FUNC_14 (TYPE_7__*,int,int,int) ;
 int FUNC_15 (TYPE_7__*) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (TYPE_7__*) ;
 int FUNC_19 (TYPE_7__*,int,int ) ;

__attribute__((used)) static void FUNC_20(VideoState *VAR_22)
{
    SDL_Event VAR_23;
    double VAR_24, VAR_25, VAR_26;

    for (;;) {
        double VAR_27;
        FUNC_10(VAR_22, &VAR_23);
        switch (VAR_23.type) {
        case 134:
            if (VAR_15 || VAR_23.key.keysym.sym == VAR_6 || VAR_23.key.keysym.sym == VAR_7) {
                FUNC_6(VAR_22);
                break;
            }

            if (!VAR_22->width)
                continue;
            switch (VAR_23.key.keysym.sym) {
            case 141:
                FUNC_16(VAR_22);
                VAR_22->force_refresh = 1;
                break;
            case 139:
            case 145:
                FUNC_18(VAR_22);
                break;
            case 140:
                FUNC_17(VAR_22);
                break;
            case 150:
            case 154:
                FUNC_19(VAR_22, 1, VAR_11);
                break;
            case 151:
            case 153:
                FUNC_19(VAR_22, -1, VAR_11);
                break;
            case 138:
                FUNC_12(VAR_22);
                break;
            case 143:
                FUNC_13(VAR_22, VAR_0);
                break;
            case 136:
                FUNC_13(VAR_22, VAR_2);
                break;
            case 142:
                FUNC_13(VAR_22, VAR_2);
                FUNC_13(VAR_22, VAR_0);
                FUNC_13(VAR_22, VAR_1);
                break;
            case 137:
                FUNC_13(VAR_22, VAR_1);
                break;
            case 135:
                FUNC_15(VAR_22);

                break;
            case 147:
                if (VAR_22->ic->nb_chapters <= 1) {
                    VAR_24 = 600.0;
                    goto do_seek;
                }
                FUNC_11(VAR_22, 1);
                break;
            case 148:
                if (VAR_22->ic->nb_chapters <= 1) {
                    VAR_24 = -600.0;
                    goto do_seek;
                }
                FUNC_11(VAR_22, -1);
                break;
            case 149:
                VAR_24 = VAR_21 ? -VAR_21 : -10.0;
                goto do_seek;
            case 146:
                VAR_24 = VAR_21 ? VAR_21 : 10.0;
                goto do_seek;
            case 144:
                VAR_24 = 60.0;
                goto do_seek;
            case 152:
                VAR_24 = -60.0;
            do_seek:
                    if (VAR_20) {
                        VAR_25 = -1;
                        if (VAR_25 < 0 && VAR_22->video_stream >= 0)
                            VAR_25 = FUNC_7(&VAR_22->pictq);
                        if (VAR_25 < 0 && VAR_22->audio_stream >= 0)
                            VAR_25 = FUNC_7(&VAR_22->sampq);
                        if (VAR_25 < 0)
                            VAR_25 = FUNC_5(VAR_22->ic->pb);
                        if (VAR_22->ic->bit_rate)
                            VAR_24 *= VAR_22->ic->bit_rate / 8.0;
                        else
                            VAR_24 *= 180000.0;
                        VAR_25 += VAR_24;
                        FUNC_14(VAR_22, VAR_25, VAR_24, 1);
                    } else {
                        VAR_25 = FUNC_8(VAR_22);
                        if (FUNC_9(VAR_25))
                            VAR_25 = (double)VAR_22->seek_pos / VAR_5;
                        VAR_25 += VAR_24;
                        if (VAR_22->ic->start_time != VAR_4 && VAR_25 < VAR_22->ic->start_time / (double)VAR_5)
                            VAR_25 = VAR_22->ic->start_time / (double)VAR_5;
                        FUNC_14(VAR_22, (int64_t)(VAR_25 * VAR_5), (int64_t)(VAR_24 * VAR_5), 0);
                    }
                break;
            default:
                break;
            }
            break;
        case 133:
            if (VAR_16) {
                FUNC_6(VAR_22);
                break;
            }
            if (VAR_23.button.button == VAR_8) {
                static int64_t VAR_28 = 0;
                if (FUNC_2() - VAR_28 <= 500000) {
                    FUNC_16(VAR_22);
                    VAR_22->force_refresh = 1;
                    VAR_28 = 0;
                } else {
                    VAR_28 = FUNC_2();
                }
            }
        case 132:
            if (VAR_13) {
                FUNC_1(1);
                VAR_13 = 0;
            }
            VAR_14 = FUNC_2();
            if (VAR_23.type == 133) {
                if (VAR_23.button.button != VAR_9)
                    break;
                VAR_27 = VAR_23.button.x;
            } else {
                if (!(VAR_23.motion.state & VAR_10))
                    break;
                VAR_27 = VAR_23.motion.x;
            }
                if (VAR_20 || VAR_22->ic->duration <= 0) {
                    uint64_t VAR_29 = FUNC_4(VAR_22->ic->pb);
                    FUNC_14(VAR_22, VAR_29*VAR_27/VAR_22->width, 0, 1);
                } else {
                    int64_t VAR_30;
                    int VAR_31, VAR_32, VAR_33, VAR_34;
                    int VAR_35, VAR_36, VAR_37, VAR_38;
                    VAR_35 = VAR_22->ic->duration / 1000000LL;
                    VAR_36 = VAR_35 / 3600;
                    VAR_37 = (VAR_35 % 3600) / 60;
                    VAR_38 = (VAR_35 % 60);
                    VAR_26 = VAR_27 / VAR_22->width;
                    VAR_31 = VAR_26 * VAR_35;
                    VAR_32 = VAR_31 / 3600;
                    VAR_33 = (VAR_31 % 3600) / 60;
                    VAR_34 = (VAR_31 % 60);
                    FUNC_3(((void*)0), VAR_3,
                           "Seek to %2.0f%% (%2d:%02d:%02d) of total duration (%2d:%02d:%02d)       \n", VAR_26*100,
                            VAR_32, VAR_33, VAR_34, VAR_36, VAR_37, VAR_38);
                    VAR_30 = VAR_26 * VAR_22->ic->duration;
                    if (VAR_22->ic->start_time != VAR_4)
                        VAR_30 += VAR_22->ic->start_time;
                    FUNC_14(VAR_22, VAR_30, 0, 0);
                }
            break;
        case 130:
            switch (VAR_23.window.event) {
                case 128:
                    VAR_19 = VAR_22->width = VAR_23.window.data1;
                    VAR_18 = VAR_22->height = VAR_23.window.data2;
                    if (VAR_22->vis_texture) {
                        FUNC_0(VAR_22->vis_texture);
                        VAR_22->vis_texture = ((void*)0);
                    }
                case 129:
                    VAR_22->force_refresh = 1;
            }
            break;
        case 131:
        case 155:
            FUNC_6(VAR_22);
            break;
        default:
            break;
        }
    }
}
