void FUNC_0(char *VAR_0, int VAR_1,
                  char *VAR_2, int VAR_3,
                  char *VAR_4, int VAR_5,
                  int *VAR_6, char *VAR_7, int VAR_8, const char *VAR_9)
{
    const char *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;

    if (VAR_6)
        *VAR_6 = -1;
    if (VAR_1 > 0)
        VAR_0[0] = 0;
    if (VAR_3 > 0)
        VAR_2[0] = 0;
    if (VAR_5 > 0)
        VAR_4[0] = 0;
    if (VAR_8 > 0)
        VAR_7[0] = 0;


    if ((VAR_10 = strchr(VAR_9, ':'))) {
        FUNC_0(VAR_0, VAR_9, FUNC_0(VAR_1, VAR_10 + 1 - VAR_9));
        VAR_10++;
        if (*VAR_10 == '/')
            VAR_10++;
        if (*VAR_10 == '/')
            VAR_10++;
    } else {

        FUNC_0(VAR_7, VAR_9, VAR_8);
        return;
    }


    VAR_11 = FUNC_0(VAR_10, '/');
    VAR_12 = FUNC_0(VAR_10, '?');
    if (!VAR_11)
        VAR_11 = VAR_12;
    else if (VAR_11 && VAR_12)
        VAR_11 = FUNC_0(VAR_11, VAR_12);
    if (VAR_11)
        FUNC_0(VAR_7, VAR_11, VAR_8);
    else
        VAR_11 = &VAR_10[strlen(VAR_10)];


    if (VAR_11 != VAR_10) {

        VAR_14 = VAR_10;
        while ((VAR_13 = FUNC_0(VAR_10, '@')) && VAR_13 < VAR_11) {
            FUNC_0(VAR_2, VAR_14,
                       FUNC_0(VAR_3, VAR_13 + 1 - VAR_14));
            VAR_10 = VAR_13 + 1;
        }

        if (*VAR_10 == '[' && (VAR_16 = FUNC_0(VAR_10, ']')) && VAR_16 < VAR_11) {

            FUNC_0(VAR_4, VAR_10 + 1,
                       FUNC_0(VAR_5, VAR_16 - VAR_10));
            if (VAR_16[1] == ':' && VAR_6)
                *VAR_6 = FUNC_0(VAR_16 + 2);
        } else if ((VAR_15 = FUNC_0(VAR_10, ':')) && VAR_15 < VAR_11) {
            FUNC_0(VAR_4, VAR_10,
                       FUNC_0(VAR_15 + 1 - VAR_10, VAR_5));
            if (VAR_6)
                *VAR_6 = FUNC_0(VAR_15 + 1);
        } else
            FUNC_0(VAR_4, VAR_10,
                       FUNC_0(VAR_11 + 1 - VAR_10, VAR_5));
    }
}
