
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ rows; int columns; } ;
typedef TYPE_1__ vbi_page ;
struct TYPE_17__ {scalar_t__ chop_spaces; } ;
typedef TYPE_2__ TeletextContext ;
struct TYPE_19__ {int str; scalar_t__ len; } ;
struct TYPE_18__ {int type; int ass; } ;
typedef TYPE_3__ AVSubtitleRect ;
typedef TYPE_4__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*,char const*,int) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*,int ,char*,...) ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (char const*,int) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (TYPE_1__*,char*,scalar_t__,char*,int ,int ,int ,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(TeletextContext *VAR_9, AVSubtitleRect *VAR_10, vbi_page *VAR_11, int VAR_12)
{
    const char *VAR_13;
    AVBPrint VAR_14;
    char *VAR_15 = FUNC_8(VAR_7);
    int VAR_16;

    if (!VAR_15)
        return FUNC_0(VAR_3);

    VAR_16 = FUNC_12(VAR_11, VAR_15, VAR_7-1, "UTF-8",
                                                  VAR_8, VAR_4,
                                   0, VAR_12,
                                   VAR_11->columns, VAR_11->rows-VAR_12);
    if (VAR_16 <= 0) {
        FUNC_7(VAR_9, VAR_2, "vbi_print error\n");
        FUNC_6(VAR_15);
        return VAR_0;
    }
    VAR_15[VAR_16] = '\0';
    VAR_13 = VAR_15;
    FUNC_3(&VAR_14, 0, VAR_7);

    if (VAR_9->chop_spaces) {
        for (;;) {
            int VAR_17, VAR_18;


            VAR_13 += FUNC_11(VAR_13, " \n");

            for (VAR_17 = 0; VAR_13[VAR_17]; ++VAR_17)
                if (VAR_13[VAR_17] == '\n' && (VAR_17==0 || !(VAR_13[VAR_17-1] & 0x80)))
                    break;
            if (!VAR_13[VAR_17])
                break;

            VAR_18 = FUNC_9(VAR_13, VAR_17);
            FUNC_1(&VAR_14, VAR_13, VAR_18);
            FUNC_5(&VAR_14, "\n");
            VAR_13 += VAR_17;
        }
    } else {
        FUNC_5(&VAR_14, "%s\n", VAR_15);
    }
    FUNC_6(VAR_15);

    if (!FUNC_4(&VAR_14)) {
        FUNC_2(&VAR_14, ((void*)0));
        return FUNC_0(VAR_3);
    }

    if (VAR_14.len) {
        VAR_10->type = VAR_5;
        VAR_10->ass = FUNC_10(VAR_9, VAR_14.str);

        if (!VAR_10->ass) {
            FUNC_2(&VAR_14, ((void*)0));
            return FUNC_0(VAR_3);
        }
        FUNC_7(VAR_9, VAR_1, "subtext:%s:txetbus\n", VAR_10->ass);
    } else {
        VAR_10->type = VAR_6;
    }
    FUNC_2(&VAR_14, ((void*)0));
    return 0;
}
