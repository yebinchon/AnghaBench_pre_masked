
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,scalar_t__,float) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void) {

    FUNC_3(&VAR_0);
    FUNC_2(&VAR_0);

    FUNC_1();

    ++VAR_1;

    if(VAR_2 + 10 <= FUNC_4(((void*)0))) {
        FUNC_0("%d frames in %d seconds FPS: %f\n", VAR_1, FUNC_4(((void*)0)) -
               VAR_2, ((float)(VAR_1)) / (FUNC_4(((void*)0)) - VAR_2));
        VAR_1 = 0;
        VAR_2 = FUNC_4(((void*)0));
    }
}
