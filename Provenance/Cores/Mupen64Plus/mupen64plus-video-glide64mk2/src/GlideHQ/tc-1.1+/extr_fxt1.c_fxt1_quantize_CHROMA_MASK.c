
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qword ;
typedef int dword ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (float**,int const,int *,int const) ;
 scalar_t__ FUNC_4 (float**,int const,int **,int const,int) ;
 int FUNC_5 (float**,int const,int **,int const,int) ;

__attribute__((used)) static void
FUNC_6 (dword *VAR_3,
        byte VAR_4[VAR_2][VAR_0])
{
    const int VAR_5 = 4;
    const int VAR_6 = 3;
    float VAR_7[VAR_1][VAR_0];
    int VAR_8, VAR_9, VAR_10;
    qword VAR_11;
    dword VAR_12, VAR_13;

    if (FUNC_4(VAR_7, VAR_5, VAR_4, VAR_6, VAR_2) != 0) {
 FUNC_5(VAR_7, VAR_5, VAR_4, VAR_6, VAR_2);
    }

    FUNC_0(VAR_11, 4);
    for (VAR_9 = VAR_5 - 1; VAR_9 >= 0; VAR_9--) {
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {

     FUNC_2(VAR_11, 5);
     FUNC_1(VAR_11, (dword)(VAR_7[VAR_9][VAR_8] / 8.0F));
 }
    }
    ((qword *)VAR_3)[1] = VAR_11;

    VAR_12 = VAR_13 = 0;

    for (VAR_10 = VAR_2 - 1; VAR_10 >= VAR_2 / 2; VAR_10--) {
 VAR_12 <<= 2;
 VAR_12 |= FUNC_3(VAR_7, VAR_5, VAR_4[VAR_10], VAR_6);
    }

    for (; VAR_10 >= 0; VAR_10--) {
 VAR_13 <<= 2;
 VAR_13 |= FUNC_3(VAR_7, VAR_5, VAR_4[VAR_10], VAR_6);
    }
    VAR_3[1] = VAR_12;
    VAR_3[0] = VAR_13;
}
