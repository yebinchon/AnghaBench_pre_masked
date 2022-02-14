
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double real ;


 scalar_t__ VAR_0 ;
 double* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 double* VAR_2 ;
 long long FUNC_2 (void**,int,int) ;
 double FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_4() {
    long long VAR_6, VAR_7;
    VAR_4++;


    VAR_6 = FUNC_2((void **)&VAR_1, 128, 2 * VAR_5 * VAR_4 * sizeof(real));
    if (VAR_1 == ((void*)0)) {
        FUNC_1(VAR_3, "Error allocating memory for W\n");
        FUNC_0(1);
    }
    VAR_6 = FUNC_2((void **)&VAR_2, 128, 2 * VAR_5 * VAR_4 * sizeof(real));
    if (VAR_2 == ((void*)0)) {
        FUNC_1(VAR_3, "Error allocating memory for gradsq\n");
        FUNC_0(1);
    }
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < 2 * VAR_5; VAR_6++) {
            VAR_1[VAR_6 * VAR_4 + VAR_7] = (FUNC_3() / (real)VAR_0 - 0.5) / VAR_4;
        }
    }
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < 2 * VAR_5; VAR_6++) {
            VAR_2[VAR_6 * VAR_4 + VAR_7] = 1.0;
        }
    }
    VAR_4--;
}
