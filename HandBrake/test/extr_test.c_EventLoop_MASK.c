
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int hb_handle_t ;
typedef int hb_dict_t ;
typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_12 (scalar_t__,char*,int) ;
 int FUNC_13 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_14(hb_handle_t *VAR_7, hb_dict_t *VAR_8)
{

    VAR_6 = 0;
    while (!VAR_2 && !VAR_6)
    {
        fd_set VAR_9;
        struct timeval VAR_10;
        int VAR_11;
        char VAR_12[257];

        VAR_10.tv_sec = 0;
        VAR_10.tv_usec = 100000;

        FUNC_1( &VAR_9 );
        FUNC_0( VAR_1, &VAR_9 );
        VAR_11 = FUNC_13( VAR_1 + 1, &VAR_9, ((void*)0), ((void*)0), &VAR_10 );

        if( VAR_11 > 0 )
        {
            int VAR_13 = 0;

            while( VAR_13 < 256 &&
                   FUNC_12( VAR_1, &VAR_12[VAR_13], 1 ) > 0 )
            {
                if( VAR_12[VAR_13] == '\n' )
                {
                    break;
                }
                VAR_13++;
            }

            if( VAR_13 >= 256 || VAR_12[VAR_13] == '\n' )
            {
                switch( VAR_12[0] )
                {
                    case 'q':
                        FUNC_6( VAR_5, "\nEncoding Quit by user command\n" );
                        VAR_3 = VAR_0;
                        VAR_2 = 1;
                        break;
                    case 'p':
                        FUNC_6(VAR_5,
                                "\nEncoding Paused by user command, 'r' to resume\n");
                        FUNC_7(VAR_7);
                        FUNC_10(VAR_7);
                        break;
                    case 'r':
                        FUNC_11(VAR_7);
                        FUNC_8(VAR_7);
                        break;
                    case 'h':
                        FUNC_3();
                        break;
                }
            }
        }

        FUNC_9(200);

        FUNC_2( VAR_7, VAR_8 );
    }
    VAR_4 = 0;
}
