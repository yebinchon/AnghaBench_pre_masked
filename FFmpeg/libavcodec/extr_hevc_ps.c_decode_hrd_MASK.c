
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,unsigned int) ;
 int FUNC_1 (int *,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(GetBitContext *VAR_2, int VAR_3,
                       int VAR_4)
{
    int VAR_5 = 0, VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8;

    if (VAR_3) {
        VAR_5 = FUNC_2(VAR_2);
        VAR_6 = FUNC_2(VAR_2);

        if (VAR_5 || VAR_6) {
            VAR_7 = FUNC_2(VAR_2);

            if (VAR_7) {
                FUNC_4(VAR_2, 8);
                FUNC_4(VAR_2, 5);
                FUNC_4(VAR_2, 1);
                FUNC_4(VAR_2, 5);
            }

            FUNC_4(VAR_2, 4);
            FUNC_4(VAR_2, 4);

            if (VAR_7)
                FUNC_4(VAR_2, 4);

            FUNC_4(VAR_2, 5);
            FUNC_4(VAR_2, 5);
            FUNC_4(VAR_2, 5);
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        int VAR_9 = 0;
        unsigned int VAR_10 = 1;
        int VAR_11 = FUNC_2(VAR_2);

        if (!VAR_11)
            VAR_11 = FUNC_2(VAR_2);

        if (VAR_11)
            FUNC_3(VAR_2);
        else
            VAR_9 = FUNC_2(VAR_2);

        if (!VAR_9) {
            VAR_10 = FUNC_3(VAR_2) + 1;
            if (VAR_10 < 1 || VAR_10 > 32) {
                FUNC_0(((void*)0), VAR_1, "nb_cpb %d invalid\n", VAR_10);
                return VAR_0;
            }
        }

        if (VAR_5)
            FUNC_1(VAR_2, VAR_10, VAR_7);
        if (VAR_6)
            FUNC_1(VAR_2, VAR_10, VAR_7);
    }
    return 0;
}
