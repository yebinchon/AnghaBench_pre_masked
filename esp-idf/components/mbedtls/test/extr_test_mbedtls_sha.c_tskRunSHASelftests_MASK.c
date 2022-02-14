
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6(void *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < 5; VAR_2++) {
        if(FUNC_0(1)) {
            FUNC_3("SHA1 self-tests failed.\n");
            while(1) {}
        }

        if(FUNC_1(1)) {
            FUNC_3("SHA256 self-tests failed.\n");
            while(1) {}
        }

        if(FUNC_2(1)) {
            FUNC_3("SHA512 self-tests failed.\n");
            while(1) {}
        }

        if(FUNC_2(1)) {
            FUNC_3("SHA512 self-tests failed.\n");
            while(1) {}
        }
    }
    FUNC_5(VAR_0);
    FUNC_4(((void*)0));
}
