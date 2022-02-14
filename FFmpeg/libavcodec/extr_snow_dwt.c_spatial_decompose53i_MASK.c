
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWTELEM ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int *,int *,int *,int) ;

__attribute__((used)) static void FUNC_4(DWTELEM *VAR_0, DWTELEM *VAR_1,
                                 int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    DWTELEM *VAR_6 = VAR_0 + FUNC_0(-2 - 1, VAR_3 - 1) * VAR_4;
    DWTELEM *VAR_7 = VAR_0 + FUNC_0(-2, VAR_3 - 1) * VAR_4;

    for (VAR_5 = -2; VAR_5 < VAR_3; VAR_5 += 2) {
        DWTELEM *VAR_8 = VAR_0 + FUNC_0(VAR_5 + 1, VAR_3 - 1) * VAR_4;
        DWTELEM *VAR_9 = VAR_0 + FUNC_0(VAR_5 + 2, VAR_3 - 1) * VAR_4;

        if (VAR_5 + 1 < (unsigned)VAR_3)
            FUNC_1(VAR_8, VAR_1, VAR_2);
        if (VAR_5 + 2 < (unsigned)VAR_3)
            FUNC_1(VAR_9, VAR_1, VAR_2);

        if (VAR_5 + 1 < (unsigned)VAR_3)
            FUNC_2(VAR_7, VAR_8, VAR_9, VAR_2);
        if (VAR_5 + 0 < (unsigned)VAR_3)
            FUNC_3(VAR_6, VAR_7, VAR_8, VAR_2);

        VAR_6 = VAR_8;
        VAR_7 = VAR_9;
    }
}
