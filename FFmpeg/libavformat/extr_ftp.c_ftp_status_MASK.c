
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FTPContext ;
typedef int AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,int ,char*,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(FTPContext *VAR_3, char **VAR_4, const int VAR_5[])
{
    int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11;
    char VAR_12[VAR_2];
    AVBPrint VAR_13;

    if (VAR_4)
        FUNC_1(&VAR_13, 0, VAR_0);

    while (!VAR_10 || VAR_8) {
        if ((VAR_6 = FUNC_4(VAR_3, VAR_12, sizeof(VAR_12))) < 0) {
            if (VAR_4)
                FUNC_0(&VAR_13, ((void*)0));
            return VAR_6;
        }

        FUNC_3(VAR_3, VAR_1, "%s\n", VAR_12);

        VAR_11 = FUNC_5(VAR_12);
        VAR_6 = 0;
        if (VAR_11 >= 3) {
            for (VAR_7 = 0; VAR_7 < 3; ++VAR_7) {
                if (VAR_12[VAR_7] < '0' || VAR_12[VAR_7] > '9') {
                    VAR_6 = 0;
                    break;
                }
                VAR_6 *= 10;
                VAR_6 += VAR_12[VAR_7] - '0';
            }
        }

        if (!VAR_10) {
            if (VAR_6 >= 500) {
                VAR_10 = 1;
                VAR_9 = VAR_6;
            } else
                for (VAR_7 = 0; VAR_5[VAR_7]; ++VAR_7) {
                    if (VAR_6 == VAR_5[VAR_7]) {
                        VAR_10 = 1;
                        VAR_9 = VAR_6;
                        break;
                    }
                }
        }
        if (VAR_10) {
            if (VAR_4)
                FUNC_2(&VAR_13, "%s\r\n", VAR_12);
            if (VAR_11 >= 4) {
                if (!VAR_8 && VAR_12[3] == '-')
                    VAR_8 = VAR_6;
                else if (VAR_6 == VAR_8 && VAR_12[3] == ' ')
                    VAR_8 = 0;
            }
        }
    }

    if (VAR_4)
        FUNC_0(&VAR_13, VAR_4);
    return VAR_9;
}
