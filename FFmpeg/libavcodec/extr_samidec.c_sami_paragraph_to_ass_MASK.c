
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int str; scalar_t__ len; } ;
struct TYPE_11__ {TYPE_1__* priv_data; } ;
struct TYPE_10__ {TYPE_3__ encoded_content; TYPE_3__ full; TYPE_3__ content; TYPE_3__ encoded_source; TYPE_3__ source; } ;
typedef TYPE_1__ SAMIContext ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,char,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*,char*,char**) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_1, const char *VAR_2)
{
    SAMIContext *VAR_3 = VAR_1->priv_data;
    int VAR_4 = 0;
    char *VAR_5 = ((void*)0);
    char *VAR_6 = FUNC_6(VAR_2);
    char *VAR_7 = VAR_6;
    AVBPrint *VAR_8 = &VAR_3->encoded_content;
    AVBPrint *VAR_9 = &VAR_3->encoded_source;

    if (!VAR_6)
        return FUNC_0(VAR_0);

    FUNC_2(&VAR_3->encoded_content);
    FUNC_2(&VAR_3->content);
    FUNC_2(&VAR_3->encoded_source);
    for (;;) {
        char *VAR_10 = ((void*)0);
        int VAR_11 = 0;
        AVBPrint *VAR_12 = &VAR_3->content;


        VAR_7 = FUNC_7(VAR_7, "<P");
        if (!VAR_7)
            break;
        if (VAR_7[2] != '>' && !FUNC_5(VAR_7[2])) {
            VAR_7++;
            continue;
        }
        if (VAR_12->len)
            FUNC_3(VAR_12, "\\N");
        VAR_5 = FUNC_9(VAR_7, ">", &VAR_10);
        if (!VAR_5 || !VAR_10)
            break;
        VAR_7 = VAR_10;


        if (FUNC_7(VAR_5, "ID=Source") || FUNC_7(VAR_5, "ID=\"Source\"")) {
            VAR_12 = &VAR_3->source;
            FUNC_2(VAR_12);
        }


        while (FUNC_5(*VAR_7))
            VAR_7++;
        if (!FUNC_11(VAR_7, "&nbsp;", 6)) {
            VAR_4 = -1;
            goto end;
        }


        while (*VAR_7) {
            if (*VAR_7 == '<') {
                if (!FUNC_8(VAR_7, "<P", 2) && (VAR_7[2] == '>' || FUNC_5(VAR_7[2])))
                    break;
            }
            if (!FUNC_8(VAR_7, "<BR", 3)) {
                FUNC_3(VAR_12, "\\N");
                VAR_7++;
                while (*VAR_7 && *VAR_7 != '>')
                    VAR_7++;
                if (!*VAR_7)
                    break;
                if (*VAR_7 == '>')
                    VAR_7++;
                continue;
            }
            if (!FUNC_5(*VAR_7))
                FUNC_1(VAR_12, *VAR_7, 1);
            else if (!VAR_11)
                FUNC_1(VAR_12, ' ', 1);
            VAR_11 = FUNC_5(*VAR_7);
            VAR_7++;
        }
    }

    FUNC_2(&VAR_3->full);
    if (VAR_3->source.len) {
        VAR_4 = FUNC_10(VAR_1, VAR_9, VAR_3->source.str);
        if (VAR_4 < 0)
            goto end;
        FUNC_3(&VAR_3->full, "{\\i1}%s{\\i0}\\N", VAR_3->encoded_source.str);
    }
    VAR_4 = FUNC_10(VAR_1, VAR_8, VAR_3->content.str);
    if (VAR_4 < 0)
        goto end;
    FUNC_3(&VAR_3->full, "%s", VAR_3->encoded_content.str);

end:
    FUNC_4(VAR_6);
    return VAR_4;
}
