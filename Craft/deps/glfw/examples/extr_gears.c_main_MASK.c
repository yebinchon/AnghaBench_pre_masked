
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int,int,char*,int *,int *) ;
 int FUNC_5 (int *,int*,int*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int (*) (int *,int,int)) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;
 int VAR_3 ;
 int FUNC_17 (int *,int,int) ;
 int VAR_4 ;

int FUNC_18(int VAR_5, char *VAR_6[])
{
    GLFWwindow* VAR_7;
    int VAR_8, VAR_9;

    if( !FUNC_6() )
    {
        FUNC_3( VAR_4, "Failed to initialize GLFW\n" );
        FUNC_2( VAR_0 );
    }

    FUNC_14(VAR_2, 16);

    VAR_7 = FUNC_4( 300, 300, "Gears", ((void*)0), ((void*)0) );
    if (!VAR_7)
    {
        FUNC_3( VAR_4, "Failed to open GLFW window\n" );
        FUNC_13();
        FUNC_2( VAR_0 );
    }


    FUNC_9(VAR_7, FUNC_17);
    FUNC_10(VAR_7, VAR_3);

    FUNC_7(VAR_7);
    FUNC_12( 1 );

    FUNC_5(VAR_7, &VAR_8, &VAR_9);
    FUNC_17(VAR_7, VAR_8, VAR_9);


    FUNC_16();


    while( !FUNC_15(VAR_7) )
    {

        FUNC_1();


        FUNC_0();


        FUNC_11(VAR_7);
        FUNC_8();
    }


    FUNC_13();


    FUNC_2( VAR_1 );
}
