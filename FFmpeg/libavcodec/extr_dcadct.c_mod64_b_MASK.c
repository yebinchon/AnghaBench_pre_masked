
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const,int) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, int *VAR_1)
{
    static const int VAR_2[16] = {
         4199362, 4240198, 4323885, 4454708,
         4639772, 4890013, 5221943, 5660703,
         6245623, 7040975, 8158494, 9809974,
        12450076, 17261920, 28585092, 85479984
    };

    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
        VAR_0[16 + VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_0[16 + VAR_3]);

    for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
        VAR_1[VAR_3] = VAR_0[VAR_3] + VAR_0[16 + VAR_3];

    for (VAR_3 = 16, VAR_4 = 15; VAR_3 < 32; VAR_3++, VAR_4--)
        VAR_1[VAR_3] = VAR_0[VAR_4] - VAR_0[16 + VAR_4];
}
