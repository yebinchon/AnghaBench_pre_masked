
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_work_object_t ;
typedef int hb_handle_t ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int ) ;

hb_work_object_t* FUNC_1(hb_handle_t *VAR_5, int VAR_6)
{
    if (VAR_6 & VAR_0)
    {
        return FUNC_0(VAR_5, VAR_1);
    }
    switch (VAR_6)
    {
        case 132:
        case 129: return FUNC_0(VAR_5, VAR_1);
        case 128: return FUNC_0(VAR_5, VAR_2);
        case 131: return FUNC_0(VAR_5, VAR_3);
        case 130: return FUNC_0(VAR_5, VAR_4);
        default: break;
    }
    return ((void*)0);
}
