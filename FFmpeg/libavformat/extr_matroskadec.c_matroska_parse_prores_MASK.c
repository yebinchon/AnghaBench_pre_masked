
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MatroskaTrack ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (char,char,char,float) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(MatroskaTrack *VAR_2, uint8_t *VAR_3,
                                 uint8_t **VAR_4, int *VAR_5)
{
    uint8_t *VAR_6 = VAR_3;
    int VAR_7 = *VAR_5;

    if (FUNC_1(&VAR_3[4]) != FUNC_3('i', 'c', 'p', 'f')) {
        VAR_7 += 8;

        VAR_6 = FUNC_4(VAR_7 + VAR_0);
        if (!VAR_6)
            return FUNC_0(VAR_1);

        FUNC_2(VAR_6, VAR_7);
        FUNC_2(VAR_6 + 4, FUNC_3('i', 'c', 'p', 'f'));
        FUNC_5(VAR_6 + 8, VAR_3, VAR_7 - 8);
        FUNC_6(VAR_6 + VAR_7, 0, VAR_0);
    }

    *VAR_4 = VAR_6;
    *VAR_5 = VAR_7;

    return 0;
}
