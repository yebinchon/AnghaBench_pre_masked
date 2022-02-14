
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct Screen {char** characters; char** charsets; char** fonts; scalar_t__ row_used; } ;
typedef enum cc_font { ____Placeholder_cc_font } cc_font ;
struct TYPE_7__ {int len; scalar_t__* str; } ;
struct TYPE_6__ {int active_screen; int buffer_changed; TYPE_3__ buffer; struct Screen* screen; } ;
typedef TYPE_1__ CCaptionSubContext ;


 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int ) ;

 int VAR_2 ;


 char const VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 char*** VAR_7 ;

__attribute__((used)) static int FUNC_5(CCaptionSubContext *VAR_8)
{
    int VAR_9, VAR_10, VAR_11 = 0;
    struct Screen *VAR_12 = VAR_8->screen + VAR_8->active_screen;
    enum cc_font VAR_13 = VAR_2;
    FUNC_2(&VAR_8->buffer);

    for (VAR_9 = 0; VAR_12->row_used && VAR_9 < VAR_6; VAR_9++)
    {
        if (FUNC_1(VAR_12->row_used, VAR_9)) {
            const char *VAR_14 = VAR_12->characters[VAR_9];
            const char *VAR_15 = VAR_12->charsets[VAR_9];
            VAR_10 = 0;
            while (VAR_14[VAR_10] == ' ' && VAR_15[VAR_10] == VAR_3)
                VAR_10++;
            if (!VAR_11 || VAR_10 < VAR_11)
                VAR_11 = VAR_10;
        }
    }

    for (VAR_9 = 0; VAR_12->row_used && VAR_9 < VAR_6; VAR_9++)
    {
        if (FUNC_1(VAR_12->row_used, VAR_9)) {
            const char *VAR_16 = VAR_12->characters[VAR_9];
            const char *VAR_17 = VAR_12->fonts[VAR_9];
            const char *VAR_18 = VAR_12->charsets[VAR_9];
            const char *VAR_19;
            int VAR_20, VAR_21, VAR_22 = 0;
            VAR_10 = 0;


            while (VAR_16[VAR_10] == ' ' && VAR_18[VAR_10] == VAR_3 && VAR_10 < VAR_11)
                VAR_10++;

            VAR_20 = VAR_0 * (0.1 + 0.0250 * VAR_10);
            VAR_21 = VAR_1 * (0.1 + 0.0533 * VAR_9);
            FUNC_4(&VAR_8->buffer, "{\\an7}{\\pos(%d,%d)}", VAR_20, VAR_21);

            for (; VAR_10 < VAR_5; VAR_10++) {
                const char *VAR_23 = "", *VAR_24 = "";

                if (VAR_16[VAR_10] == 0)
                    break;

                if (VAR_13 != VAR_17[VAR_10]) {
                    switch (VAR_13) {
                    case 130:
                        VAR_23 = "{\\i0}";
                        break;
                    case 129:
                        VAR_23 = "{\\u0}";
                        break;
                    case 128:
                        VAR_23 = "{\\u0}{\\i0}";
                        break;
                    }
                    switch (VAR_17[VAR_10]) {
                    case 130:
                        VAR_24 = "{\\i1}";
                        break;
                    case 129:
                        VAR_24 = "{\\u1}";
                        break;
                    case 128:
                        VAR_24 = "{\\u1}{\\i1}";
                        break;
                    }
                }
                VAR_13 = VAR_17[VAR_10];
                VAR_19 = VAR_7[(int)VAR_18[VAR_10]][(int)VAR_16[VAR_10]];
                if (VAR_19) {
                    FUNC_4(&VAR_8->buffer, "%s%s%s", VAR_23, VAR_24, VAR_19);
                    VAR_22 = 1;
                } else if (VAR_16[VAR_10] == ' ' && !VAR_22) {
                    FUNC_4(&VAR_8->buffer, "%s%s\\h", VAR_23, VAR_24);
                } else {
                    FUNC_4(&VAR_8->buffer, "%s%s%c", VAR_23, VAR_24, VAR_16[VAR_10]);
                    VAR_22 = 1;
                }

            }
            FUNC_4(&VAR_8->buffer, "\\N");
        }
    }
    if (!FUNC_3(&VAR_8->buffer))
        return FUNC_0(VAR_4);
    if (VAR_12->row_used && VAR_8->buffer.len >= 2) {
        VAR_8->buffer.len -= 2;
        VAR_8->buffer.str[VAR_8->buffer.len] = 0;
    }
    VAR_8->buffer_changed = 1;
    return 0;
}
