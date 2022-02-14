
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (const byte *VAR_4, int VAR_5, byte *VAR_6)
{
    const dword *VAR_7;
    dword VAR_8;

    VAR_7 = (const dword *)VAR_4;
    if (VAR_5 & 16) {
 VAR_7++;
 VAR_5 &= 15;
    }
    VAR_5 = (VAR_7[0] >> (VAR_5 * 2)) & 3;

    VAR_5 *= 15;
    VAR_7 = (const dword *)(VAR_4 + 8 + VAR_5 / 8);
    VAR_8 = VAR_7[0] >> (VAR_5 & 7);
    VAR_6[VAR_1] = FUNC_0(VAR_8);
    VAR_6[VAR_2] = FUNC_0(VAR_8 >> 5);
    VAR_6[VAR_3] = FUNC_0(VAR_8 >> 10);
    VAR_6[VAR_0] = 255;
}
