
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_work_object_t ;
typedef int hb_handle_t ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ) ;

hb_work_object_t* FUNC_1(hb_handle_t *VAR_3, int VAR_4)
{
    hb_work_object_t * VAR_5 = ((void*)0);
    if (VAR_4 & VAR_0)
    {
        VAR_5 = FUNC_0(VAR_3, VAR_1);
    }
    switch (VAR_4)
    {
        case 128:
            VAR_5 = FUNC_0(VAR_3, VAR_2);
            break;
        default:
            break;
    }
    return VAR_5;
}
