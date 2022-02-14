
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
    int VAR_4;
    FUNC_2(0x1234);
    FUNC_3((int)VAR_3 / VAR_2);
    VAR_4 = FUNC_1();
    FUNC_0("Rand1: %d\n", VAR_4);
    if (VAR_4 != 869320854) {
        VAR_1++;
    }
    FUNC_3((int)VAR_3 / VAR_2);
    VAR_4 = FUNC_1();
    FUNC_0("Rand2: %d\n", VAR_4);
    if (VAR_4 != 1148737841) {
        VAR_1++;
    }
    VAR_0++;
    FUNC_4(((void*)0));
}
