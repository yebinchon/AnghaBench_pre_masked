
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int text; } ;
typedef TYPE_1__ json_error_t ;
struct TYPE_6__ {scalar_t__ state; } ;
typedef TYPE_2__ hb_state_t ;
typedef int hb_handle_t ;
typedef int hb_dict_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,char const*,int,int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int **) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (int *,TYPE_1__*,int ,char*,char*,char*,int ,char*,int ) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (char const**) ;

void FUNC_9( hb_handle_t * VAR_1, const char * VAR_2 )
{
    hb_dict_t * VAR_3;
    int VAR_4;
    json_error_t VAR_5;

    VAR_3 = FUNC_5(VAR_2);

    int VAR_6;
    const char *VAR_7 = ((void*)0);

    VAR_4 = FUNC_6(VAR_3, &VAR_5, 0, "{s:{s:s, s:i}}",
                            "Source",
                                "Path", FUNC_8(&VAR_7),
                                "Title", FUNC_7(&VAR_6)
                           );
    if (VAR_4 < 0)
    {
        FUNC_0("json unpack failure, failed to find title: %s", VAR_5.text);
        FUNC_4(&VAR_3);
        return;
    }



    FUNC_2(VAR_1, VAR_7, VAR_6, -1, 0, 0);


    hb_state_t VAR_8;
    FUNC_1(VAR_1, &VAR_8);
    while (VAR_8.state == VAR_0)
    {
        FUNC_3(50);
        FUNC_1(VAR_1, &VAR_8);
    }
    FUNC_4(&VAR_3);
}
