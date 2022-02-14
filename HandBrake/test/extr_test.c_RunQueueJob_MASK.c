
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_handle_t ;
typedef int hb_dict_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 char* FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_7(hb_handle_t *VAR_2, hb_dict_t *VAR_3)
{
    if (VAR_3 == ((void*)0))
    {
        return -1;
    }

    char * VAR_4;
    VAR_4 = FUNC_6(VAR_3);
    FUNC_5(&VAR_3);
    if (VAR_4 == ((void*)0))
    {
        FUNC_1(VAR_1, "Error in setting up job! Aborting.\n");
        return -1;
    }

    FUNC_3(VAR_2, VAR_4);
    FUNC_2(VAR_4);
    VAR_0 = 1;
    FUNC_4( VAR_2 );

    FUNC_0(VAR_2, ((void*)0));

    return 0;
}
