
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dispatch_semaphore_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,unsigned int) ;

__attribute__((used)) static void *
FUNC_4(void *VAR_5)
{
    dispatch_semaphore_t VAR_6;
    unsigned int VAR_7;

    VAR_6 = (dispatch_semaphore_t)VAR_5;

    FUNC_1(VAR_4);
    if (!VAR_6) {
        FUNC_2(VAR_3, VAR_0);
    }






    VAR_7 = VAR_2 - VAR_1 - 1 ;
    if (VAR_6) {



        VAR_7 -= 1;
    }

    FUNC_0("backtrace thread calling into %d frames (already at %d frames)",
        VAR_7, VAR_1);
    (void)FUNC_3(VAR_6, VAR_7);
    return ((void*)0);
}
