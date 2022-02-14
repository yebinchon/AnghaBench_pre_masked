
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int const*,int) ;
 size_t VAR_2 ;
 int FUNC_1 (int,int,int,int) ;
 size_t VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static void
FUNC_4 (const byte *VAR_4, int VAR_5, byte *VAR_6)
{
    const dword *VAR_7;

    VAR_5 *= 3;
    VAR_7 = (const dword *)(VAR_4 + VAR_5 / 8);
    VAR_5 = (VAR_7[0] >> (VAR_5 & 7)) & 7;

    if (VAR_5 == 7) {
 FUNC_3(VAR_6);
    } else {
 VAR_7 = (const dword *)(VAR_4 + 12);
 if (VAR_5 == 0) {
     VAR_6[VAR_1] = FUNC_2(FUNC_0(VAR_7, 0));
     VAR_6[VAR_2] = FUNC_2(FUNC_0(VAR_7, 5));
     VAR_6[VAR_3] = FUNC_2(FUNC_0(VAR_7, 10));
 } else if (VAR_5 == 6) {
     VAR_6[VAR_1] = FUNC_2(FUNC_0(VAR_7, 15));
     VAR_6[VAR_2] = FUNC_2(FUNC_0(VAR_7, 20));
     VAR_6[VAR_3] = FUNC_2(FUNC_0(VAR_7, 25));
 } else {
     VAR_6[VAR_1] = FUNC_1(6, VAR_5, FUNC_2(FUNC_0(VAR_7, 0)), FUNC_2(FUNC_0(VAR_7, 15)));
     VAR_6[VAR_2] = FUNC_1(6, VAR_5, FUNC_2(FUNC_0(VAR_7, 5)), FUNC_2(FUNC_0(VAR_7, 20)));
     VAR_6[VAR_3] = FUNC_1(6, VAR_5, FUNC_2(FUNC_0(VAR_7, 10)), FUNC_2(FUNC_0(VAR_7, 25)));
 }
 VAR_6[VAR_0] = 255;
    }
}
