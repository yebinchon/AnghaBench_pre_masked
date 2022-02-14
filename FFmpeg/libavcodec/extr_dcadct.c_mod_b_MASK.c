
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const,int) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, int *VAR_1)
{
    static const int VAR_2[8] = {
        4214598, 4383036, 4755871, 5425934,
        6611520, 8897610, 14448934, 42791536
    };

    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
        VAR_0[8 + VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_0[8 + VAR_3]);

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
        VAR_1[VAR_3] = VAR_0[VAR_3] + VAR_0[8 + VAR_3];

    for (VAR_3 = 8, VAR_4 = 7; VAR_3 < 16; VAR_3++, VAR_4--)
        VAR_1[VAR_3] = VAR_0[VAR_4] - VAR_0[8 + VAR_4];
}
