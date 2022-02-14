
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_23__ {int height; int width; int format; } ;
struct TYPE_22__ {TYPE_1__** streams; TYPE_6__* priv_data; } ;
struct TYPE_21__ {int data; } ;
struct TYPE_20__ {int texture_fmt; int renderer; int texture_rect; int texture; scalar_t__ enable_quit_action; int window_height; int window_width; } ;
struct TYPE_18__ {int data2; int data1; int event; } ;
struct TYPE_16__ {int sym; } ;
struct TYPE_17__ {TYPE_2__ keysym; } ;
struct TYPE_19__ {int type; TYPE_4__ window; TYPE_3__ key; } ;
struct TYPE_15__ {TYPE_9__* codecpar; } ;
typedef TYPE_5__ SDL_Event ;
typedef TYPE_6__ SDLContext ;
typedef TYPE_7__ AVPacket ;
typedef TYPE_8__ AVFormatContext ;
typedef TYPE_9__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *,int) ;
 int FUNC_6 (int ,int *,int *,int,int *,int,int *,int) ;



 int FUNC_7 (int **,int*,int ,int ,int ,int ,int) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    int VAR_4, VAR_5 = 0;
    SDLContext *VAR_6 = VAR_2->priv_data;
    AVCodecParameters *VAR_7 = VAR_2->streams[0]->codecpar;
    uint8_t *VAR_8[4];
    int VAR_9[4];

    SDL_Event VAR_10;
    if (FUNC_1(&VAR_10)){
        switch (VAR_10.type) {
        case 151:
            switch (VAR_10.key.keysym.sym) {
            case 153:
            case 152:
                VAR_5 = 1;
                break;
            default:
                break;
            }
            break;
        case 131:
            VAR_5 = 1;
            break;
        case 130:
            switch(VAR_10.window.event){
            case 129:
            case 128:
                VAR_6->window_width = VAR_10.window.data1;
                VAR_6->window_height = VAR_10.window.data2;
                FUNC_9(VAR_2);
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    }

    if (VAR_5 && VAR_6->enable_quit_action) {
        FUNC_10(VAR_2);
        return FUNC_0(VAR_1);
    }

    FUNC_7(VAR_8, VAR_9, VAR_3->data, VAR_7->format, VAR_7->width, VAR_7->height, 1);
    switch (VAR_6->texture_fmt) {
    case 142:
    case 132:
    case 133:
        VAR_4 = FUNC_6(VAR_6->texture, ((void*)0),
                                   VAR_8[0], VAR_9[0],
                                   VAR_8[1], VAR_9[1],
                                   VAR_8[2], VAR_9[2]);
        break;
    case 140:
    case 139:
    case 138:
    case 147:
    case 137:
    case 146:
    case 141:
    case 148:
    case 136:
    case 134:
    case 145:
    case 143:
    case 149:
    case 135:
    case 150:
    case 144:
        VAR_4 = FUNC_5(VAR_6->texture, ((void*)0), VAR_8[0], VAR_9[0]);
        break;
    default:
        FUNC_8(((void*)0), VAR_0, "Unsupported pixel format\n");
        VAR_4 = -1;
        break;
    }
    FUNC_2(VAR_6->renderer);
    FUNC_3(VAR_6->renderer, VAR_6->texture, ((void*)0), &VAR_6->texture_rect);
    FUNC_4(VAR_6->renderer);
    return VAR_4;
}
