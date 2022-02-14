
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dispatch_semaphore_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,unsigned int) ;

__attribute__((used)) static int __attribute__((noinline,not_tail_called))
FUNC_3(dispatch_semaphore_t VAR_1, unsigned int VAR_2)
{
    if (VAR_2 == 0) {
        if (VAR_1) {
            FUNC_0(VAR_1);
            for (;;);
        } else {
            FUNC_1(VAR_0, 0, 0, 0, 0);
            return 0;
        }
    }

    return FUNC_2(VAR_1, VAR_2 - 1) + 1;
}
