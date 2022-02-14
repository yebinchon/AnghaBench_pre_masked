
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_job_t ;
typedef int hb_dict_t ;


 int * FUNC_0 (int const*) ;
 int FUNC_1 (int **) ;
 char* FUNC_2 (int *) ;

char* FUNC_3( const hb_job_t * VAR_0 )
{
    hb_dict_t *VAR_1 = FUNC_0(VAR_0);

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    char *VAR_2 = FUNC_2(VAR_1);
    FUNC_1(&VAR_1);

    return VAR_2;
}
