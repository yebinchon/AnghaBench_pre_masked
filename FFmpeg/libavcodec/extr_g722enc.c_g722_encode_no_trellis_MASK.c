
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;
typedef int G722Context ;


 int FUNC_0 (int *,int ,int const*) ;

__attribute__((used)) static void FUNC_1(G722Context *VAR_0,
                                   uint8_t *VAR_1, int VAR_2,
                                   const int16_t *VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 2)
        FUNC_0(VAR_0, VAR_1++, &VAR_3[VAR_4]);
}
