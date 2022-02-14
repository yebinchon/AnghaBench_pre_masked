
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_title_t ;
typedef int hb_job_t ;
typedef int hb_handle_t ;
typedef int hb_dict_t ;


 int FUNC_0 (char*,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const*,int *) ;
 scalar_t__ FUNC_6 (int const*,int *) ;
 scalar_t__ FUNC_7 (int *,int,int const*,int *) ;
 scalar_t__ FUNC_8 (int const*,int *) ;
 int FUNC_9 (int **) ;

hb_dict_t* FUNC_10(hb_handle_t *VAR_0, int VAR_1,
                              const hb_dict_t *VAR_2)
{
    hb_title_t *VAR_3 = FUNC_1(VAR_0, VAR_1);
    if (VAR_3 == ((void*)0))
    {
        FUNC_0("Invalid title index (%d)", VAR_1);
        return ((void*)0);
    }

    hb_job_t *VAR_4 = FUNC_3(VAR_3);
    hb_dict_t *VAR_5 = FUNC_4(VAR_4);
    FUNC_2(&VAR_4);

    if (FUNC_6(VAR_2, VAR_5) < 0)
        goto fail;

    if (FUNC_8(VAR_2, VAR_5) < 0)
        goto fail;

    if (FUNC_5(VAR_2, VAR_5) < 0)
        goto fail;

    if (FUNC_7(VAR_0, VAR_1, VAR_2, VAR_5) < 0)
        goto fail;

    return VAR_5;

fail:
    FUNC_9(&VAR_5);
    return ((void*)0);
}
