
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef intptr_t uint32_t ;


 intptr_t FUNC_0 (unsigned char const**,int) ;
 int FUNC_1 (intptr_t) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(const unsigned char* VAR_0, int VAR_1)
{
    intptr_t VAR_2 = (intptr_t) FUNC_0(&VAR_0, -1);
    VAR_0++;
    uint32_t VAR_3 = FUNC_0(&VAR_0, -1);

    if (FUNC_1(VAR_2) < 0 || FUNC_1(VAR_2 + VAR_3 - 1) < 0) {
        FUNC_5("E01");
        return;
    }

    FUNC_4();
    for (int VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
        int VAR_5 = FUNC_1(VAR_2++);
        FUNC_3(VAR_5, 8);
    }
    FUNC_2();
}
