
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;
typedef int GetBitContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(int8_t *VAR_3,
                                        GetBitContext *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    if (FUNC_0(VAR_4) < 16)
        return -1;
    VAR_8 = FUNC_2(VAR_4, &VAR_1, 0, 2);

    VAR_3[0] = VAR_8;

    for (VAR_5 = 0; VAR_5 < 7; ) {
        if (FUNC_0(VAR_4) < 16)
            return -1;
        VAR_7 = FUNC_2(VAR_4, &VAR_2, 0, 1) + 1;

        if (VAR_5 + VAR_7 >= 8)
            return -1;

        if (FUNC_0(VAR_4) < 16)
            return -1;
        VAR_9 = FUNC_1(&VAR_0, VAR_4, 2);

        for (VAR_6 = 1; VAR_6 <= VAR_7; VAR_6++)
            VAR_3[VAR_5 + VAR_6] = (VAR_8 + ((VAR_6 * VAR_9) / VAR_7));

        VAR_8 += VAR_9;
        VAR_5 += VAR_7;
    }
    return 0;
}
