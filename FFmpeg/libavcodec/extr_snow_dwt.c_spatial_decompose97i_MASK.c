
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWTELEM ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int *,int *,int *,int) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int FUNC_5 (int *,int *,int *,int) ;

__attribute__((used)) static void FUNC_6(DWTELEM *VAR_0, DWTELEM *VAR_1,
                                 int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    DWTELEM *VAR_6 = VAR_0 + FUNC_0(-4 - 1, VAR_3 - 1) * VAR_4;
    DWTELEM *VAR_7 = VAR_0 + FUNC_0(-4, VAR_3 - 1) * VAR_4;
    DWTELEM *VAR_8 = VAR_0 + FUNC_0(-4 + 1, VAR_3 - 1) * VAR_4;
    DWTELEM *VAR_9 = VAR_0 + FUNC_0(-4 + 2, VAR_3 - 1) * VAR_4;

    for (VAR_5 = -4; VAR_5 < VAR_3; VAR_5 += 2) {
        DWTELEM *VAR_10 = VAR_0 + FUNC_0(VAR_5 + 3, VAR_3 - 1) * VAR_4;
        DWTELEM *VAR_11 = VAR_0 + FUNC_0(VAR_5 + 4, VAR_3 - 1) * VAR_4;

        if (VAR_5 + 3 < (unsigned)VAR_3)
            FUNC_1(VAR_10, VAR_1, VAR_2);
        if (VAR_5 + 4 < (unsigned)VAR_3)
            FUNC_1(VAR_11, VAR_1, VAR_2);

        if (VAR_5 + 3 < (unsigned)VAR_3)
            FUNC_2(VAR_9, VAR_10, VAR_11, VAR_2);
        if (VAR_5 + 2 < (unsigned)VAR_3)
            FUNC_4(VAR_8, VAR_9, VAR_10, VAR_2);
        if (VAR_5 + 1 < (unsigned)VAR_3)
            FUNC_3(VAR_7, VAR_8, VAR_9, VAR_2);
        if (VAR_5 + 0 < (unsigned)VAR_3)
            FUNC_5(VAR_6, VAR_7, VAR_8, VAR_2);

        VAR_6 = VAR_8;
        VAR_7 = VAR_9;
        VAR_8 = VAR_10;
        VAR_9 = VAR_11;
    }
}
