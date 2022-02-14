
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_2)
{
    int VAR_3;
    int16_t *VAR_4;

    VAR_4 = VAR_2;
    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        FUNC_0(VAR_4, 1, 0x80, 8, 11, VAR_1);
        VAR_4 += 8;
    }

    VAR_4 = VAR_2;
    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        FUNC_0(VAR_4, 8, 0x2000, 14, 8, VAR_0);
        VAR_4++;
    }
}
