
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int palette_has_changed; int* data; int* linesize; int pict_type; } ;
struct TYPE_12__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_11__ {int y; int nb_args; int* args; int font_height; int x; int attributes; size_t fg; size_t bg; int sx; int sy; TYPE_5__* frame; void* font; } ;
typedef TYPE_1__ AnsiContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 void* FUNC_2 (int,int ,int) ;
 int FUNC_3 (TYPE_5__*) ;
 void* VAR_8 ;
 int FUNC_4 (TYPE_2__*,char*) ;
 void* VAR_9 ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_2__*,int,int) ;
 int FUNC_9 (int,size_t,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(AVCodecContext * VAR_10, int VAR_11)
{
    AnsiContext *VAR_12 = VAR_10->priv_data;
    int VAR_13, VAR_14;
    int VAR_15 = VAR_10->width;
    int VAR_16 = VAR_10->height;

    switch(VAR_11) {
    case 'A':
        VAR_12->y = FUNC_0(VAR_12->y - (VAR_12->nb_args > 0 ? VAR_12->args[0]*VAR_12->font_height : VAR_12->font_height), 0);
        break;
    case 'B':
        VAR_12->y = FUNC_1(VAR_12->y + (VAR_12->nb_args > 0 ? VAR_12->args[0]*VAR_12->font_height : VAR_12->font_height), VAR_10->height - VAR_12->font_height);
        break;
    case 'C':
        VAR_12->x = FUNC_1(VAR_12->x + (VAR_12->nb_args > 0 ? VAR_12->args[0]*VAR_5 : VAR_5), VAR_10->width - VAR_5);
        break;
    case 'D':
        VAR_12->x = FUNC_0(VAR_12->x - (VAR_12->nb_args > 0 ? VAR_12->args[0]*VAR_5 : VAR_5), 0);
        break;
    case 'H':
    case 'f':
        VAR_12->y = VAR_12->nb_args > 0 ? FUNC_2((VAR_12->args[0] - 1)*VAR_12->font_height, 0, VAR_10->height - VAR_12->font_height) : 0;
        VAR_12->x = VAR_12->nb_args > 1 ? FUNC_2((VAR_12->args[1] - 1)*VAR_5, 0, VAR_10->width - VAR_5) : 0;
        break;
    case 'h':
    case 'l':
        if (VAR_12->nb_args < 2)
            VAR_12->args[0] = VAR_4;
        switch(VAR_12->args[0]) {
        case 0: case 1: case 4: case 5: case 13: case 19:
            VAR_12->font = VAR_8;
            VAR_12->font_height = 8;
            VAR_15 = 40<<3;
            VAR_16 = 25<<3;
            break;
        case 2: case 3:
            VAR_12->font = VAR_9;
            VAR_12->font_height = 16;
            VAR_15 = 80<<3;
            VAR_16 = 25<<4;
            break;
        case 6: case 14:
            VAR_12->font = VAR_8;
            VAR_12->font_height = 8;
            VAR_15 = 80<<3;
            VAR_16 = 25<<3;
            break;
        case 7:
            break;
        case 15: case 16:
            VAR_12->font = VAR_8;
            VAR_12->font_height = 8;
            VAR_15 = 80<<3;
            VAR_16 = 43<<3;
            break;
        case 17: case 18:
            VAR_12->font = VAR_8;
            VAR_12->font_height = 8;
            VAR_15 = 80<<3;
            VAR_16 = 60<<4;
            break;
        default:
            FUNC_4(VAR_10, "Unsupported screen mode");
        }
        VAR_12->x = FUNC_2(VAR_12->x, 0, VAR_15 - VAR_5);
        VAR_12->y = FUNC_2(VAR_12->y, 0, VAR_16 - VAR_12->font_height);
        if (VAR_15 != VAR_10->width || VAR_16 != VAR_10->height) {
            FUNC_3(VAR_12->frame);
            VAR_13 = FUNC_8(VAR_10, VAR_15, VAR_16);
            if (VAR_13 < 0)
                return VAR_13;
            if ((VAR_13 = FUNC_7(VAR_10, VAR_12->frame,
                                     VAR_0)) < 0)
                return VAR_13;
            VAR_12->frame->pict_type = VAR_1;
            VAR_12->frame->palette_has_changed = 1;
            FUNC_10((uint32_t *)VAR_12->frame->data[1]);
            FUNC_6(VAR_10);
        } else if (VAR_11 == 'l') {
            FUNC_6(VAR_10);
        }
        break;
    case 'J':
        switch (VAR_12->args[0]) {
        case 0:
            FUNC_5(VAR_10, VAR_12->x, VAR_10->width - VAR_12->x);
            if (VAR_12->y < VAR_10->height - VAR_12->font_height)
                FUNC_9(VAR_12->frame->data[0] + (VAR_12->y + VAR_12->font_height)*VAR_12->frame->linesize[0],
                    VAR_2, (VAR_10->height - VAR_12->y - VAR_12->font_height)*VAR_12->frame->linesize[0]);
            break;
        case 1:
            FUNC_5(VAR_10, 0, VAR_12->x);
            if (VAR_12->y > 0)
                FUNC_9(VAR_12->frame->data[0], VAR_2, VAR_12->y * VAR_12->frame->linesize[0]);
            break;
        case 2:
            FUNC_6(VAR_10);
        }
        break;
    case 'K':
        switch(VAR_12->args[0]) {
        case 0:
            FUNC_5(VAR_10, VAR_12->x, VAR_10->width - VAR_12->x);
            break;
        case 1:
            FUNC_5(VAR_10, 0, VAR_12->x);
            break;
        case 2:
            FUNC_5(VAR_10, 0, VAR_10->width);
        }
        break;
    case 'm':
        if (VAR_12->nb_args == 0) {
            VAR_12->nb_args = 1;
            VAR_12->args[0] = 0;
        }
        for (VAR_14 = 0; VAR_14 < FUNC_1(VAR_12->nb_args, VAR_6); VAR_14++) {
            int VAR_17 = VAR_12->args[VAR_14];
            if (VAR_17 == 0) {
                VAR_12->attributes = 0;
                VAR_12->fg = VAR_3;
                VAR_12->bg = VAR_2;
            } else if (VAR_17 == 1 || VAR_17 == 2 || VAR_17 == 4 || VAR_17 == 5 || VAR_17 == 7 || VAR_17 == 8) {
                VAR_12->attributes |= 1 << (VAR_17 - 1);
            } else if (VAR_17 >= 30 && VAR_17 <= 37) {
                VAR_12->fg = VAR_7[VAR_17 - 30];
            } else if (VAR_17 == 38 && VAR_14 + 2 < FUNC_1(VAR_12->nb_args, VAR_6) && VAR_12->args[VAR_14 + 1] == 5 && VAR_12->args[VAR_14 + 2] < 256) {
                int VAR_18 = VAR_12->args[VAR_14 + 2];
                VAR_12->fg = VAR_18 < 16 ? VAR_7[VAR_18] : VAR_18;
                VAR_14 += 2;
            } else if (VAR_17 == 39) {
                VAR_12->fg = VAR_7[VAR_3];
            } else if (VAR_17 >= 40 && VAR_17 <= 47) {
                VAR_12->bg = VAR_7[VAR_17 - 40];
            } else if (VAR_17 == 48 && VAR_14 + 2 < FUNC_1(VAR_12->nb_args, VAR_6) && VAR_12->args[VAR_14 + 1] == 5 && VAR_12->args[VAR_14 + 2] < 256) {
                int VAR_19 = VAR_12->args[VAR_14 + 2];
                VAR_12->bg = VAR_19 < 16 ? VAR_7[VAR_19] : VAR_19;
                VAR_14 += 2;
            } else if (VAR_17 == 49) {
                VAR_12->fg = VAR_7[VAR_2];
            } else {
                FUNC_4(VAR_10, "Unsupported rendition parameter");
            }
        }
        break;
    case 'n':
    case 'R':

        break;
    case 's':
        VAR_12->sx = VAR_12->x;
        VAR_12->sy = VAR_12->y;
        break;
    case 'u':
        VAR_12->x = FUNC_2(VAR_12->sx, 0, VAR_10->width - VAR_5);
        VAR_12->y = FUNC_2(VAR_12->sy, 0, VAR_10->height - VAR_12->font_height);
        break;
    default:
        FUNC_4(VAR_10, "Unknown escape code");
        break;
    }
    VAR_12->x = FUNC_2(VAR_12->x, 0, VAR_10->width - VAR_5);
    VAR_12->y = FUNC_2(VAR_12->y, 0, VAR_10->height - VAR_12->font_height);
    return 0;
}
