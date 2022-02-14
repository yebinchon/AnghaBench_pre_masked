
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int codec_param; } ;
typedef TYPE_1__ hb_work_object_t ;
typedef int hb_handle_t ;


 int FUNC_0 (char*,int,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;

hb_work_object_t* FUNC_2(hb_handle_t *VAR_0, int VAR_1, int VAR_2)
{
    hb_work_object_t * VAR_3;

    VAR_3 = FUNC_1(VAR_0, VAR_1);
    if (VAR_3 == ((void*)0))
    {
        FUNC_0("Invalid video decoder: codec %d, param %d", VAR_1, VAR_2);
        return ((void*)0);
    }
    VAR_3->codec_param = VAR_2;

    return VAR_3;
}
