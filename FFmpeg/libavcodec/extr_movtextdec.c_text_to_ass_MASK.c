
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {TYPE_6__* priv_data; } ;
struct TYPE_14__ {int hlit_start; int hlit_end; } ;
struct TYPE_13__ {int * hlit_color; } ;
struct TYPE_10__ {int wrap_flag; } ;
struct TYPE_15__ {int box_flags; int style_entries; int ftab_entries; TYPE_5__ h; TYPE_4__ c; TYPE_3__** ftab; TYPE_2__** s; TYPE_1__ w; } ;
struct TYPE_12__ {scalar_t__ fontID; int font; } ;
struct TYPE_11__ {int style_flag; int style_end; int style_start; scalar_t__ style_fontID; int fontsize; } ;
typedef TYPE_6__ MovTextContext ;
typedef TYPE_7__ AVCodecContext ;
typedef int AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char const,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (TYPE_7__*,int ,char*) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int FUNC_4(AVBPrint *VAR_8, const char *VAR_9, const char *VAR_10,
                       AVCodecContext *VAR_11)
{
    MovTextContext *VAR_12 = VAR_11->priv_data;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15 = 0;

    if (VAR_9 < VAR_10 && VAR_12->box_flags & VAR_7) {
        if (VAR_12->w.wrap_flag == 1) {
            FUNC_1(VAR_8, "{\\q1}");
        } else {
            FUNC_1(VAR_8, "{\\q2}");
        }
    }

    while (VAR_9 < VAR_10) {
        int VAR_16;

        if (VAR_12->box_flags & VAR_6) {
            for (VAR_13 = 0; VAR_13 < VAR_12->style_entries; VAR_13++) {
                if (VAR_12->s[VAR_13]->style_flag && VAR_15 == VAR_12->s[VAR_13]->style_end) {
                    FUNC_1(VAR_8, "{\\r}");
                }
            }
            for (VAR_13 = 0; VAR_13 < VAR_12->style_entries; VAR_13++) {
                if (VAR_12->s[VAR_13]->style_flag && VAR_15 == VAR_12->s[VAR_13]->style_start) {
                    if (VAR_12->s[VAR_13]->style_flag & VAR_3)
                        FUNC_1(VAR_8, "{\\b1}");
                    if (VAR_12->s[VAR_13]->style_flag & VAR_4)
                        FUNC_1(VAR_8, "{\\i1}");
                    if (VAR_12->s[VAR_13]->style_flag & VAR_5)
                        FUNC_1(VAR_8, "{\\u1}");
                    FUNC_1(VAR_8, "{\\fs%d}", VAR_12->s[VAR_13]->fontsize);
                    for (VAR_14 = 0; VAR_14 < VAR_12->ftab_entries; VAR_14++) {
                        if (VAR_12->s[VAR_13]->style_fontID == VAR_12->ftab[VAR_14]->fontID)
                            FUNC_1(VAR_8, "{\\fn%s}", VAR_12->ftab[VAR_14]->font);
                    }
                }
            }
        }
        if (VAR_12->box_flags & VAR_2) {
            if (VAR_15 == VAR_12->h.hlit_start) {






                if (VAR_12->box_flags & VAR_1) {
                    FUNC_1(VAR_8, "{\\2c&H%02x%02x%02x&}", VAR_12->c.hlit_color[2],
                                VAR_12->c.hlit_color[1], VAR_12->c.hlit_color[0]);
                } else {
                    FUNC_1(VAR_8, "{\\1c&H000000&}{\\2c&HFFFFFF&}");
                }
            }
            if (VAR_15 == VAR_12->h.hlit_end) {
                if (VAR_12->box_flags & VAR_1) {
                    FUNC_1(VAR_8, "{\\2c&H000000&}");
                } else {
                    FUNC_1(VAR_8, "{\\1c&HFFFFFF&}{\\2c&H000000&}");
                }
            }
        }

        VAR_16 = FUNC_3(VAR_9, VAR_10);
        if (VAR_16 < 1) {
            FUNC_2(VAR_11, VAR_0, "invalid UTF-8 byte in subtitle\n");
            VAR_16 = 1;
        }
        for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
            switch (*VAR_9) {
            case '\r':
                break;
            case '\n':
                FUNC_1(VAR_8, "\\N");
                break;
            default:
                FUNC_0(VAR_8, *VAR_9, 1);
                break;
            }
            VAR_9++;
        }
        VAR_15++;
    }

    return 0;
}
