
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int log_buf ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (void*,int ,char*,char*) ;
 int FUNC_2 (char*,int,char*,int const) ;
 int FUNC_3 (char*,int,char*) ;

__attribute__((used)) static int FUNC_4(int VAR_1, void *VAR_2)
{

    static const int VAR_3[] = { 6600, 8850, 12650, 14250, 15850, 18250,
                                 19850, 23050, 23850 };
    int VAR_4, VAR_5 = -1, VAR_6 = 0;
    char VAR_7[200];

    for (VAR_4 = 0; VAR_4 < 9; VAR_4++) {
        if (VAR_3[VAR_4] == VAR_1)
            return VAR_4;
        if (VAR_5 < 0 || FUNC_0(VAR_3[VAR_4] - VAR_1) < VAR_6) {
            VAR_5 = VAR_4;
            VAR_6 = FUNC_0(VAR_3[VAR_4] - VAR_1);
        }
    }

    FUNC_3(VAR_7, sizeof(VAR_7), "bitrate not supported: use one of ");
    for (VAR_4 = 0; VAR_4 < 9; VAR_4++)
        FUNC_2(VAR_7, sizeof(VAR_7), "%.2fk, ", VAR_3[VAR_4] / 1000.f);
    FUNC_2(VAR_7, sizeof(VAR_7), "using %.2fk", VAR_3[VAR_5] / 1000.f);
    FUNC_1(VAR_2, VAR_0, "%s\n", VAR_7);

    return VAR_5;
}
