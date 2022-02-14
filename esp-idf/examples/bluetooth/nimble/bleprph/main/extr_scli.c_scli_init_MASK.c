
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int,void*,int,int **) ;

int FUNC_3(void)
{

    FUNC_0();

    FUNC_2(VAR_4, "scli_cli", 4096, (void *) 0, 3, &VAR_3);
    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }
    VAR_2 = FUNC_1( 1, sizeof(int) );
    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }
    return VAR_1;
}
