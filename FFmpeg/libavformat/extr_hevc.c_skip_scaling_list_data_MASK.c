
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(GetBitContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4;

    for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
        for (VAR_2 = 0; VAR_2 < (VAR_1 == 3 ? 2 : 6); VAR_2++)
            if (!FUNC_1(VAR_0))
                FUNC_3(VAR_0);
            else {
                VAR_4 = FUNC_0(64, 1 << (4 + (VAR_1 << 1)));

                if (VAR_1 > 1)
                    FUNC_2(VAR_0);

                for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
                    FUNC_2(VAR_0);
            }
}
