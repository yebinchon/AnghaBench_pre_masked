
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static __attribute__((noreturn)) inline void FUNC_3(void)
{
    VAR_3 = 1;
    while (1) {
        if (FUNC_2()) {
            __asm__ ("break 0,0");
        }
        *((int *) 0) = 0;
    }
}
