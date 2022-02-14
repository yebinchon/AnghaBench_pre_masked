
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int * FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int *) ;

void FUNC_4(void)
{

    VAR_3 = FUNC_2();
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_2, ("udp_new failed!\n"));
        return;
    }


    if (FUNC_1(VAR_3, VAR_1, 7) != VAR_0) {
        FUNC_0(VAR_2, ("udp_bind failed!\n"));
        return;
    }



    FUNC_3(VAR_3, VAR_4, ((void*)0));
}
