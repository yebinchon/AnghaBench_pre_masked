
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_title_t ;
typedef int hb_job_t ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;

hb_job_t * FUNC_2( hb_title_t * VAR_0 )
{
    hb_job_t * VAR_1;

    if ( VAR_0 == ((void*)0) )
        return ((void*)0);

    VAR_1 = FUNC_0( sizeof( hb_job_t ), 1 );
    FUNC_1(VAR_1, VAR_0);

    return VAR_1;
}
