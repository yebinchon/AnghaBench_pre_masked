
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 int FUNC_3 () ;
 char* FUNC_4 (char*,char*,char*) ;
 int * FUNC_5 (char*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

void FUNC_9()
{
    char * VAR_0;
    DIR * VAR_1;
    struct dirent * VAR_2;

    FUNC_3();


    VAR_0 = FUNC_2();

    VAR_1 = FUNC_5( VAR_0 );
    if (VAR_1)
    {
        while( ( VAR_2 = FUNC_6( VAR_1 ) ) )
        {
            char * VAR_3;
            if( VAR_2->d_name[0] == '.' )
            {
                continue;
            }
            VAR_3 = FUNC_4("%s/%s", VAR_0, VAR_2->d_name);
            FUNC_8( VAR_3 );
            FUNC_1(VAR_3);
        }
        FUNC_0( VAR_1 );
        FUNC_7( VAR_0 );
    }
    FUNC_1(VAR_0);
}
