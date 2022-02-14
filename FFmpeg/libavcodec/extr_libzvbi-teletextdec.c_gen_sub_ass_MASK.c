
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int columns; int pgno; int rows; TYPE_2__* text; } ;
typedef TYPE_1__ vbi_page ;
typedef int vbi_color ;
struct TYPE_20__ {scalar_t__ opacity; } ;
typedef TYPE_2__ vbi_char ;
struct TYPE_21__ {int* subtitle_map; int last_ass_alignment; int readorder; } ;
typedef TYPE_3__ TeletextContext ;
struct TYPE_23__ {int str; scalar_t__ len; } ;
struct TYPE_22__ {int type; int ass; } ;
typedef TYPE_4__ AVSubtitleRect ;
typedef TYPE_5__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_5__*,int ,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,char*,...) ;
 int FUNC_7 (int,int ,int) ;
 int FUNC_8 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,TYPE_5__*,int,int,int *,int *) ;
 int FUNC_10 (int ,int ,char*,int *,int ) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_12(TeletextContext *VAR_8, AVSubtitleRect *VAR_9, vbi_page *VAR_10, int VAR_11)
{
    int VAR_12;
    int VAR_13, VAR_14, VAR_15;
    int VAR_16 = -1, VAR_17 = -1;
    int VAR_18 = VAR_10->columns, VAR_19 = VAR_10->columns;
    int VAR_20 = 2;
    int VAR_21 = -1;
    int VAR_22 = 1, VAR_23 = 1, VAR_24 = 1;
    int VAR_25 = VAR_8->subtitle_map[VAR_10->pgno & 0x7ff];
    int VAR_26 = 0;
    vbi_color VAR_27 = VAR_7;
    vbi_color VAR_28 = VAR_5;
    AVBPrint VAR_29;

    FUNC_4(&VAR_29, 0, VAR_0);

    for (VAR_12 = VAR_11; VAR_12 < VAR_10->rows; VAR_12++) {
        vbi_char *VAR_30 = VAR_10->text + VAR_12 * VAR_10->columns;

        FUNC_11(VAR_10, VAR_30, &VAR_13, &VAR_14, &VAR_15);

        if (VAR_15) {
            if (VAR_17 != -1 && VAR_17 != VAR_13 || VAR_13 > 5)
                VAR_22 = 0;
            if (VAR_16 != -1 && VAR_16 != VAR_14 || VAR_14 > 2)
                VAR_23 = 0;
            if (VAR_16 != -1 && (FUNC_1((VAR_14 - VAR_13) - (VAR_16 - VAR_17)) > 1) || VAR_14 - VAR_13 > 4)
                VAR_24 = 0;
            VAR_17 = VAR_13;
            VAR_16 = VAR_14;
            VAR_19 = FUNC_2(VAR_13, VAR_19);
            VAR_18 = FUNC_2(VAR_14, VAR_18);
        }
    }

    if (!VAR_23 && VAR_22 && !VAR_24) {
        VAR_8->last_ass_alignment = VAR_20 = 1;
    } else if (!VAR_23 && !VAR_22 && VAR_24) {
        VAR_8->last_ass_alignment = VAR_20 = 2;
    } else if (VAR_23 && !VAR_22 && !VAR_24) {
        VAR_8->last_ass_alignment = VAR_20 = 3;
    } else {
        if (VAR_8->last_ass_alignment == 1 && VAR_22 ||
            VAR_8->last_ass_alignment == 2 && VAR_24 ||
            VAR_8->last_ass_alignment == 3 && VAR_23)
            VAR_20 = VAR_8->last_ass_alignment;
    }

    for (VAR_12 = VAR_11; VAR_12 < VAR_10->rows; VAR_12++) {
        int VAR_31;
        vbi_char *VAR_32 = VAR_10->text + VAR_12 * VAR_10->columns;
        int VAR_33;

        for (VAR_31 = 0; VAR_31 < VAR_10->columns; VAR_31++)
            if (VAR_32[VAR_31].opacity != VAR_6)
                break;
        VAR_33 = (VAR_31 == VAR_10->columns);

        VAR_15 = VAR_33 ? 0 : VAR_10->columns;
        VAR_13 = VAR_14 = VAR_33 ? VAR_10->columns : 0;

        if (VAR_25) {
            if (!VAR_33)
                FUNC_11(VAR_10, VAR_32, &VAR_13, &VAR_14, &VAR_15);

            if (VAR_21 == -1 && VAR_15) {
                VAR_21 = (2 - (FUNC_7(VAR_12 + 1, 0, 23) / 8));
                FUNC_6(&VAR_29, "{\\an%d}", VAR_20 + VAR_21 * 3);
                if (VAR_21 != 2)
                    VAR_26 = 0;
            }

            if (VAR_15 && VAR_26 > 1)
                for (VAR_26 /= 2; VAR_26 > 0; VAR_26--)
                    FUNC_6(&VAR_29, " \\N");

            if (VAR_20 == 1 || VAR_20 == 2 && !VAR_24)
                VAR_13 = VAR_19;
            if (VAR_20 == 3 || VAR_20 == 2 && !VAR_24)
                VAR_14 = VAR_18;
        }

        if (VAR_15 || !VAR_25) {
            FUNC_9(VAR_10, VAR_32, &VAR_29, VAR_13, VAR_10->columns - VAR_14, &VAR_27, &VAR_28);
            FUNC_6(&VAR_29, " \\N");
            VAR_26 = 0;
        } else {
            VAR_26++;
        }
    }

    if (VAR_21 == 0)
        for (VAR_26 = (VAR_26 - 1) / 2; VAR_26 > 0; VAR_26--)
            FUNC_6(&VAR_29, " \\N");

    if (!FUNC_5(&VAR_29)) {
        FUNC_3(&VAR_29, ((void*)0));
        return FUNC_0(VAR_2);
    }

    if (VAR_29.len) {
        VAR_9->type = VAR_3;
        VAR_9->ass = FUNC_10(VAR_8->readorder++, 0, VAR_25 ? "Subtitle" : "Teletext", ((void*)0), VAR_29.str);

        if (!VAR_9->ass) {
            FUNC_3(&VAR_29, ((void*)0));
            return FUNC_0(VAR_2);
        }
        FUNC_8(VAR_8, VAR_1, "subtext:%s:txetbus\n", VAR_9->ass);
    } else {
        VAR_9->type = VAR_4;
    }
    FUNC_3(&VAR_29, ((void*)0));
    return 0;
}
