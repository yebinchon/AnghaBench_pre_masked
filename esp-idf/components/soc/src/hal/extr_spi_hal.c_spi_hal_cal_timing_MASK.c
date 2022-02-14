
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int const,int,int,int) ;
 int VAR_2 ;

void FUNC_1(int VAR_3, bool VAR_4, int VAR_5, int *VAR_6, int *VAR_7)
{
    const int VAR_8 = VAR_0 / 1000;

    const int VAR_9 = VAR_0 / VAR_3;
    const int VAR_10 = VAR_4 ? VAR_1 : 0;


    int VAR_11 = (1 + VAR_5 + VAR_10) * VAR_8 / 1000 / 1000;
    if (VAR_11 < 0) {
        VAR_11 = 0;
    }

    int VAR_12 = VAR_11 / VAR_9;

    int VAR_13 = 0;
    if (VAR_12 > 0) {


        VAR_13 = (VAR_12 + 1) * VAR_9 - VAR_11 - 1;
    } else {

        if (VAR_11 * 4 <= VAR_9) {
            VAR_13 = -1;
        }
    }
    *VAR_6 = VAR_12;
    *VAR_7 = VAR_13;
    FUNC_0(VAR_2, "eff: %d, limit: %dk(/%d), %d dummy, %d delay", VAR_3 / 1000, VAR_8 / (VAR_11 + 1), VAR_11, VAR_12, VAR_13);
}
