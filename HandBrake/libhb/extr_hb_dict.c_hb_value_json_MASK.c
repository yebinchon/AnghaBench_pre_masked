
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int hb_value_t ;


 int FUNC_0 (char*,int ) ;
 int * FUNC_1 (char const*,int ,TYPE_1__*) ;

hb_value_t * FUNC_2(const char *VAR_0)
{
    json_error_t VAR_1;
    hb_value_t *VAR_2 = FUNC_1(VAR_0, 0, &VAR_1);
    if (VAR_2 == ((void*)0))
    {
        FUNC_0("hb_value_json: Failed, error %s", VAR_1.text);
    }
    return VAR_2;
}
