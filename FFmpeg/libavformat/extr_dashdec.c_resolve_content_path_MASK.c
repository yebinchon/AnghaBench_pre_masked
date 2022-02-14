
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlNodePtr ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char*,int *) ;
 char* FUNC_10 (char*,char*,char**) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ,int) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (int *) ;
 int FUNC_17 (int *,char*) ;

__attribute__((used)) static int FUNC_18(AVFormatContext *VAR_1, const char *VAR_2, int *VAR_3, xmlNodePtr *VAR_4, int VAR_5)
{
    char *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);
    xmlNodePtr VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);
    char *VAR_12 = ((void*)0);
    char *VAR_13 = ((void*)0);
    int VAR_14 = 0;
    char VAR_15 ='/';
    int VAR_16 = 0;
    int VAR_17 = 0;
    int VAR_18 = 0;
    int VAR_19 = 0;
    int VAR_20;
    int VAR_21 = FUNC_14(VAR_2);

    for (VAR_20 = VAR_5-1; VAR_20 >= 0 ; VAR_20--) {
        VAR_12 = FUNC_16(VAR_4[VAR_20]);
        if (!VAR_12)
            continue;
        VAR_21 += FUNC_14(VAR_12);
        if (FUNC_11(VAR_12)) {
            FUNC_15(VAR_12);
            break;
        }
        FUNC_15(VAR_12);
    }

    VAR_21 = FUNC_1(VAR_21);
    VAR_12 = FUNC_3(VAR_21);
    if (!VAR_12) {
        VAR_18 = FUNC_0(VAR_0);
        goto end;
    }
    FUNC_7(VAR_12, VAR_2, FUNC_14(VAR_2)+1);
    VAR_13 = VAR_12;
    while ((VAR_8 = FUNC_10(VAR_13, "/", &VAR_13))) {
        VAR_19 = FUNC_14(VAR_8);
    }
    FUNC_2(VAR_12);

    VAR_7 = FUNC_3(VAR_21);
    VAR_6 = FUNC_3(VAR_21);
    if (!VAR_6 || !VAR_7) {
        VAR_18 = FUNC_0(VAR_0);
        goto end;
    }

    FUNC_7 (VAR_7, VAR_2, FUNC_14(VAR_2) - VAR_19 + 1);
    for (VAR_17 = VAR_5 - 1; VAR_17 > 0; VAR_17 --) {
        if (!(VAR_9 = VAR_4[VAR_17])) {
            continue;
        }
        VAR_12 = FUNC_16(VAR_9);
        if (FUNC_11(VAR_12)) {
            FUNC_15(VAR_12);
            break;
        }
        FUNC_15(VAR_12);
    }

    VAR_9 = VAR_4[VAR_17];
    VAR_10 = FUNC_16(VAR_9);
    VAR_11 = (FUNC_4(VAR_10, "")) ? VAR_10 : VAR_7;
    if (VAR_9) {
        FUNC_17(VAR_9, VAR_11);
        VAR_18 = 1;
    }

    VAR_19 = FUNC_14(VAR_11);
    VAR_14 = FUNC_11(VAR_11);

    if (VAR_11[VAR_19 - 1] != VAR_15) {
        FUNC_6(VAR_11, "/", VAR_19 + 2);
        VAR_19 += 2;
    }

    for (VAR_20 = 0; VAR_20 < VAR_5; ++VAR_20) {
        if (VAR_20 == VAR_17) {
            continue;
        }
        VAR_12 = FUNC_16(VAR_4[VAR_20]);
        if (VAR_12 && !FUNC_9(VAR_12, "/", ((void*)0))) {
            FUNC_12(VAR_6, 0, FUNC_14(VAR_6));
            if (!FUNC_11(VAR_12) && VAR_14) {
                FUNC_7(VAR_6, VAR_11, VAR_19 + 1);
            }
            VAR_16 = (VAR_12[0] == VAR_15);
            if (VAR_16 && FUNC_5(VAR_6, VAR_12)) {
                char *VAR_22 = VAR_6;
                if (!FUNC_8(VAR_6, "http://", 7)) {
                    VAR_22 += 7;
                } else if (!FUNC_8(VAR_6, "https://", 8)) {
                    VAR_22 += 8;
                }
                VAR_22 = FUNC_13(VAR_22, '/');
                FUNC_12(VAR_22 + 1, 0, FUNC_14(VAR_22));
            }
            FUNC_6(VAR_6, VAR_12 + VAR_16, VAR_21);
            FUNC_17(VAR_4[VAR_20], VAR_6);
            VAR_18 = 1;
            FUNC_15(VAR_12);
        }
    }

end:
    if (VAR_21 > *VAR_3) {
        *VAR_3 = VAR_21;
    }
    FUNC_2(VAR_7);
    FUNC_2(VAR_6);
    FUNC_15(VAR_10);
    return VAR_18;

}
