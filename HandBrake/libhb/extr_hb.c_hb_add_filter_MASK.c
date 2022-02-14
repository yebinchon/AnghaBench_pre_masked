
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_job_t ;
typedef int hb_filter_object_t ;
typedef int hb_dict_t ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int **) ;

void FUNC_4( hb_job_t * VAR_0, hb_filter_object_t * VAR_1,
                    const char * VAR_2 )
{
    hb_dict_t * VAR_3 = FUNC_2(VAR_2);
    if (VAR_2 != ((void*)0) && VAR_3 == ((void*)0))
    {
        FUNC_1("hb_add_filter: failed to parse filter settings!");
        return;
    }
    FUNC_0(VAR_0, VAR_1, VAR_3);
    FUNC_3(&VAR_3);
}
