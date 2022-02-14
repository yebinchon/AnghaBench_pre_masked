
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qword ;
typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (float**,int const,int *,int const) ;
 scalar_t__ FUNC_4 (float**,int const,int **,int const,int) ;
 int FUNC_5 (float**,int const,int **,int const,int) ;

__attribute__((used)) static void
FUNC_6 (dword *VAR_4,
        byte VAR_5[VAR_3][VAR_1],
        byte VAR_6[VAR_3][VAR_1], int VAR_7)
{
    const int VAR_8 = 3;
    const int VAR_9 = 4;
    float VAR_10[VAR_2][VAR_1];
    int VAR_11, VAR_12, VAR_13;
    qword VAR_14;
    dword VAR_15, VAR_16;


    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
 VAR_10[VAR_8][VAR_11] = 0;
    }


    if (FUNC_4(VAR_10, VAR_8, VAR_6, VAR_9, VAR_7) != 0) {
 FUNC_5(VAR_10, VAR_8, VAR_6, VAR_9, VAR_7);
    }

    FUNC_0(VAR_14, 6);
    for (VAR_12 = VAR_8 - 1; VAR_12 >= 0; VAR_12--) {

 FUNC_2(VAR_14, 5);
 FUNC_1(VAR_14, (dword)(VAR_10[VAR_12][VAR_0] / 8.0F));
    }
    for (VAR_12 = VAR_8 - 1; VAR_12 >= 0; VAR_12--) {
 for (VAR_11 = 0; VAR_11 < VAR_9 - 1; VAR_11++) {

     FUNC_2(VAR_14, 5);
     FUNC_1(VAR_14, (dword)(VAR_10[VAR_12][VAR_11] / 8.0F));
 }
    }
    ((qword *)VAR_4)[1] = VAR_14;

    VAR_15 = VAR_16 = 0;

    for (VAR_13 = VAR_3 - 1; VAR_13 >= VAR_3 / 2; VAR_13--) {
 VAR_15 <<= 2;
 VAR_15 |= FUNC_3(VAR_10, VAR_8 + 1, VAR_5[VAR_13], VAR_9);
    }

    for (; VAR_13 >= 0; VAR_13--) {
 VAR_16 <<= 2;
 VAR_16 |= FUNC_3(VAR_10, VAR_8 + 1, VAR_5[VAR_13], VAR_9);
    }
    VAR_4[1] = VAR_15;
    VAR_4[0] = VAR_16;
}
