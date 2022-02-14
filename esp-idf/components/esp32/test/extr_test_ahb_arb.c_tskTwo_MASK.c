
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_1(void *VAR_5)
{
    int VAR_6;
    int *VAR_7 = (int *)VAR_0;
    int *VAR_8 = (int *)VAR_4;
    void (*VAR_9)(volatile int * VAR_10, int VAR_11, int VAR_12, volatile int * VAR_13) = (void *)VAR_0;
    volatile int VAR_14;
    int VAR_15;
    for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
        *VAR_7++ = *VAR_8++;
    }

    while (1) {
        while (VAR_3 != 1) ;
        for (VAR_6 = 0; VAR_6 < 16 * 1024; VAR_6++) {
            VAR_9(&VAR_2, 2, 0, &VAR_1);

            if ((VAR_6 & 0x1f) == 0) {
                VAR_15 = FUNC_0() & 0x1f;
                for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++);
            }
        }
        while (VAR_3 != 2);
    }
}
