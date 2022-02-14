
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int,int const,int ) ;

__attribute__((used)) static void FUNC_1(int* VAR_1, const int16_t* VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    VAR_1[0] = 0x400000;
    VAR_1[1] = -VAR_2[0] * 256;

    for(VAR_4=2; VAR_4<=VAR_3; VAR_4++)
    {
        VAR_1[VAR_4] = VAR_1[VAR_4-2];
        for(VAR_5=VAR_4; VAR_5>1; VAR_5--)
            VAR_1[VAR_5] -= FUNC_0(VAR_1[VAR_5-1], VAR_2[2*VAR_4-2], VAR_0) - VAR_1[VAR_5-2];

        VAR_1[1] -= VAR_2[2*VAR_4-2] * 256;
    }
}
