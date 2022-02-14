
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int format_tag ;
typedef int DASHTmplId ;
 int FUNC_0 (int,size_t) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*,char*,int,char const**) ;
 int FUNC_3 (char*,size_t,char*,int) ;
 char* FUNC_4 (char const*,char) ;

void FUNC_5(char *VAR_0, size_t VAR_1,
                                  const char *VAR_2, int VAR_3,
                                  int VAR_4, int VAR_5,
                                  int64_t VAR_6) {
    int VAR_7 = 0;
    const char *VAR_8 = VAR_2;
    while (VAR_7 < VAR_1 - 1 && *VAR_8) {
        char VAR_9[7];
        int VAR_10 = 0;
        DASHTmplId VAR_11;
        const char *VAR_12 = FUNC_4(VAR_8, '$');
        if (VAR_12) {
            int VAR_13 = FUNC_0(VAR_12 - VAR_8, VAR_1 - VAR_7 - 1);
            FUNC_1(&VAR_0[VAR_7], VAR_8, VAR_13 + 1);

            VAR_7 += VAR_13;
            VAR_8 = VAR_12;
        } else {
            FUNC_1(&VAR_0[VAR_7], VAR_8, VAR_1 - VAR_7);
            break;
        }

        if (VAR_7 >= VAR_1 - 1 || !*VAR_8)
            break;


        VAR_11 = FUNC_2(VAR_8, VAR_9, sizeof(VAR_9), &VAR_12);
        switch (VAR_11) {
        case 132:
            FUNC_1(&VAR_0[VAR_7], "$", 2);
            VAR_10 = 1;
            break;
        case 130:
            VAR_10 = FUNC_3(&VAR_0[VAR_7], VAR_1 - VAR_7, VAR_9, VAR_3);
            break;
        case 131:
            VAR_10 = FUNC_3(&VAR_0[VAR_7], VAR_1 - VAR_7, VAR_9, VAR_4);
            break;
        case 133:
            VAR_10 = FUNC_3(&VAR_0[VAR_7], VAR_1 - VAR_7, VAR_9, VAR_5);
            break;
        case 129:
            VAR_10 = FUNC_3(&VAR_0[VAR_7], VAR_1 - VAR_7, VAR_9, VAR_6);
            break;
        case 128:

            FUNC_1(&VAR_0[VAR_7], VAR_8, 2);
            VAR_10 = 1;
            VAR_12 = &VAR_8[1];
            break;
        }





        VAR_7 += FUNC_0(VAR_10, VAR_1 - VAR_7 - 1);
        VAR_8 = VAR_12;
    }
}
