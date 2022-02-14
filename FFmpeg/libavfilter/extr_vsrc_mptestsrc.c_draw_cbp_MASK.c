
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0[3], int VAR_1[3], int VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_2&1) FUNC_0(VAR_0[0] , VAR_1[0], VAR_3, 1, VAR_4);
    if (VAR_2&2) FUNC_0(VAR_0[0]+8 , VAR_1[0], VAR_3, 1, VAR_4);
    if (VAR_2&4) FUNC_0(VAR_0[0]+ 8*VAR_1[0], VAR_1[0], VAR_3, 1, VAR_4);
    if (VAR_2&8) FUNC_0(VAR_0[0]+8+8*VAR_1[0], VAR_1[0], VAR_3, 1, VAR_4);
    if (VAR_2&16) FUNC_0(VAR_0[1] , VAR_1[1], VAR_3, 1, VAR_4);
    if (VAR_2&32) FUNC_0(VAR_0[2] , VAR_1[2], VAR_3, 1, VAR_4);
}
