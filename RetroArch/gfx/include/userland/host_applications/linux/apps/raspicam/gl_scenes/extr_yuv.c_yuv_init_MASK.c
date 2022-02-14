
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * uniform_locations; int program; } ;
struct TYPE_6__ {int egl_config_attribs; } ;
typedef TYPE_1__ RASPITEX_STATE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_5(RASPITEX_STATE *VAR_2)
{
    int VAR_3;
    VAR_2->egl_config_attribs = VAR_0;
    VAR_3 = FUNC_4(VAR_2);
    if (VAR_3 != 0)
       goto end;

    VAR_3 = FUNC_3(&VAR_1);
    FUNC_0(FUNC_2(VAR_1.program));
    FUNC_0(FUNC_1(VAR_1.uniform_locations[0], 0));
end:
    return VAR_3;
}
