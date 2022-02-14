
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;

int FUNC_6(void)
{
    FUNC_4(VAR_1, "wps task deinit");

    if (VAR_2) {
        FUNC_2(VAR_2);
        VAR_2 = ((void*)0);
        FUNC_4(VAR_1, "wps task deinit: free api sem");
    }

    if (VAR_6) {
        FUNC_2(VAR_6);
        VAR_6 = ((void*)0);
        FUNC_4(VAR_1, "wps task deinit: free task create sem");
    }

    if (VAR_4) {
        FUNC_1(VAR_4);
        VAR_4 = ((void*)0);
        FUNC_4(VAR_1, "wps task deinit: free queue");
    }

    if (VAR_7) {
        FUNC_3(VAR_7);
        VAR_7 = ((void*)0);
        FUNC_4(VAR_1, "wps task deinit: free task");
    }

    if (FUNC_0(&VAR_5) != ((void*)0)){
        FUNC_5();
    }

    if (VAR_3) {
        FUNC_2(VAR_3);
        VAR_3 = ((void*)0);
        FUNC_4(VAR_1, "wps task deinit: free data lock");
    }

    return VAR_0;
}
