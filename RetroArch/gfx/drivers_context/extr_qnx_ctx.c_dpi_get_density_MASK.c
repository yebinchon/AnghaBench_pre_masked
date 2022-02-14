
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int screen_disp; } ;
typedef TYPE_1__ qnx_ctx_data_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(qnx_ctx_data_t *VAR_1)
{
    int VAR_2[2];

    if(!VAR_1)
        return -1;

    if (FUNC_2(VAR_1->screen_disp,
             VAR_0, VAR_2))
    {
       FUNC_0("screen_get_display_property_iv [SCREEN_PROPERTY_DPI] failed.\n");
       return -1;
    }

    return FUNC_1(VAR_2[0], VAR_2[1]);
}
