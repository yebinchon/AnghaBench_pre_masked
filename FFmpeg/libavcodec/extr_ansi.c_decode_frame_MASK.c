
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef char const uint8_t ;
typedef int uint32_t ;
struct TYPE_17__ {int* linesize; int palette_has_changed; scalar_t__* data; int pict_type; } ;
struct TYPE_16__ {int height; int width; int frame_number; TYPE_1__* priv_data; } ;
struct TYPE_15__ {char* data; int size; } ;
struct TYPE_14__ {int first_frame; int state; int x; size_t nb_args; int* args; TYPE_6__* frame; } ;
typedef TYPE_1__ AnsiContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 size_t VAR_4 ;




 int FUNC_1 (void*,TYPE_6__*) ;
 int FUNC_2 (TYPE_3__*,int ,char*,size_t) ;
 int FUNC_3 (TYPE_3__*,char const) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char const) ;
 int FUNC_6 (TYPE_3__*,TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_5,
                            void *VAR_6, int *VAR_7,
                            AVPacket *VAR_8)
{
    AnsiContext *VAR_9 = VAR_5->priv_data;
    uint8_t *VAR_10 = VAR_8->data;
    int VAR_11 = VAR_8->size;
    const uint8_t *VAR_12 = VAR_10+VAR_11;
    int VAR_13, VAR_14, VAR_15;

    if ((VAR_13 = FUNC_6(VAR_5, VAR_9->frame, 0)) < 0)
        return VAR_13;
    if (!VAR_5->frame_number) {
        for (VAR_14=0; VAR_14<VAR_5->height; VAR_14++)
            FUNC_8(VAR_9->frame->data[0]+ VAR_14*VAR_9->frame->linesize[0], 0, VAR_5->width);
        FUNC_8(VAR_9->frame->data[1], 0, VAR_0);
    }

    VAR_9->frame->pict_type = VAR_2;
    VAR_9->frame->palette_has_changed = 1;
    FUNC_9((uint32_t *)VAR_9->frame->data[1]);
    if (!VAR_9->first_frame) {
        FUNC_4(VAR_5);
        VAR_9->first_frame = 1;
    }

    while(VAR_10 < VAR_12) {
        switch(VAR_9->state) {
        case 128:
            switch (VAR_10[0]) {
            case 0x00:
            case 0x07:
            case 0x1A:

                break;
            case 0x08:
                VAR_9->x = FUNC_0(VAR_9->x - 1, 0);
                break;
            case 0x09:
                VAR_14 = VAR_9->x / VAR_3;
                VAR_15 = ((VAR_14 + 8) & ~7) - VAR_14;
                for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
                    FUNC_3(VAR_5, ' ');
                break;
            case 0x0A:
                FUNC_7(VAR_5);
            case 0x0D:
                VAR_9->x = 0;
                break;
            case 0x0C:
                FUNC_4(VAR_5);
                break;
            case 0x1B:
                VAR_9->state = 130;
                break;
            default:
                FUNC_3(VAR_5, VAR_10[0]);
            }
            break;
        case 130:
            if (VAR_10[0] == '[') {
                VAR_9->state = 131;
                VAR_9->nb_args = 0;
                VAR_9->args[0] = -1;
            } else {
                VAR_9->state = 128;
                FUNC_3(VAR_5, 0x1B);
                continue;
            }
            break;
        case 131:
            switch(VAR_10[0]) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                if (VAR_9->nb_args < VAR_4 && VAR_9->args[VAR_9->nb_args] < 6553)
                    VAR_9->args[VAR_9->nb_args] = FUNC_0(VAR_9->args[VAR_9->nb_args], 0) * 10 + VAR_10[0] - '0';
                break;
            case ';':
                VAR_9->nb_args++;
                if (VAR_9->nb_args < VAR_4)
                    VAR_9->args[VAR_9->nb_args] = 0;
                break;
            case 'M':
                VAR_9->state = 129;
                break;
            case '=': case '?':

                break;
            default:
                if (VAR_9->nb_args > VAR_4)
                    FUNC_2(VAR_5, VAR_1, "args overflow (%i)\n", VAR_9->nb_args);
                if (VAR_9->nb_args < VAR_4 && VAR_9->args[VAR_9->nb_args] >= 0)
                    VAR_9->nb_args++;
                if ((VAR_13 = FUNC_5(VAR_5, VAR_10[0])) < 0)
                    return VAR_13;
                VAR_9->state = 128;
            }
            break;
        case 129:
            if (VAR_10[0] == 0x0E || VAR_10[0] == 0x1B)
                VAR_9->state = 128;

            break;
        }
        VAR_10++;
    }

    *VAR_7 = 1;
    if ((VAR_13 = FUNC_1(VAR_6, VAR_9->frame)) < 0)
        return VAR_13;
    return VAR_11;
}
