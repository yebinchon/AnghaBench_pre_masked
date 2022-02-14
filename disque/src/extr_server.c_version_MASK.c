
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,char*,int,char*,int,unsigned long long) ;

void FUNC_6(void) {
    FUNC_5("Disque server v=%s sha=%s:%d malloc=%s bits=%d build=%llx\n",
        VAR_0,
        FUNC_3(),
        FUNC_0(FUNC_2()) > 0,
        VAR_1,
        sizeof(long) == 4 ? 32 : 64,
        (unsigned long long) FUNC_1());
    FUNC_4(0);
}
