
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,char*,int) ;

int
FUNC_2(int VAR_1, int VAR_2)
{



    static char VAR_3[4096] = {0};
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += VAR_5) {
        VAR_5 = FUNC_1(VAR_1, VAR_3, sizeof VAR_3);
        if (VAR_5 == -1)
            return VAR_0;
    }
    FUNC_0(VAR_1, 0, 0);
    return 0;
}
