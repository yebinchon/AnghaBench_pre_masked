
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int __attribute__((noinline,not_tail_called))
FUNC_3(unsigned int VAR_0)
{
    if (VAR_0 == 1) {
        FUNC_0();
        FUNC_1();
        return 0;
    }

    return FUNC_2(VAR_0 - 1) + 1;
}
