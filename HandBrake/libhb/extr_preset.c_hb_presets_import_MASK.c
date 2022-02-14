
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; } ;
struct TYPE_5__ {TYPE_1__ path; } ;
struct TYPE_6__ {int result; int micro; int minor; int major; TYPE_2__ do_ctx; } ;
typedef TYPE_3__ preset_import_context_t ;
typedef int preset_do_context_t ;
typedef int const hb_value_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int,int ,int ) ;
 int VAR_0 ;
 int const* FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int *,int *,int *) ;
 int const* FUNC_3 (int const*) ;
 int FUNC_4 (int const**) ;
 int const* FUNC_5 (int const*) ;
 int FUNC_6 (int ,int const*,int *) ;

int FUNC_7(const hb_value_t *VAR_1, hb_value_t **VAR_2)
{
    preset_import_context_t VAR_3;
    hb_value_t * VAR_4;

    VAR_3.do_ctx.path.depth = 1;
    VAR_3.result = 0;


    VAR_4 = FUNC_3(VAR_1);
    FUNC_2(VAR_4, &VAR_3.major, &VAR_3.minor, &VAR_3.micro);
    FUNC_6(VAR_0, VAR_4, (preset_do_context_t*)&VAR_3);
    if (FUNC_0(VAR_3.major, VAR_3.minor, VAR_3.micro, 29, 0, 0) <= 0)
    {
        hb_value_t * VAR_5;

        VAR_5 = FUNC_5(VAR_4);
        *VAR_2 = FUNC_1(VAR_5);
        FUNC_4(&VAR_5);
    }
    else if (VAR_3.result)
    {
        *VAR_2 = FUNC_1(VAR_4);
    }
    else
    {
        *VAR_2 = FUNC_3(VAR_4);
    }
    FUNC_4(&VAR_4);

    return VAR_3.result;
}
