
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(int *VAR_1, int *VAR_2, int VAR_3)
{
    int VAR_4;

    for (VAR_4 = VAR_3-2; VAR_4 >= 0; VAR_4--)
    {
        int VAR_5, VAR_6, VAR_7 = VAR_2[VAR_4];

        for (VAR_5 = 0, VAR_6 = VAR_4+1; VAR_6 < VAR_3; VAR_5++,VAR_6++)
            {
            int VAR_8 = VAR_7 + FUNC_0(VAR_1[VAR_5] * VAR_2[VAR_6], VAR_0);
            VAR_2[VAR_6] += FUNC_0(VAR_1[VAR_5]*VAR_7, VAR_0);
            VAR_7 = VAR_8;
        }
    }
}
