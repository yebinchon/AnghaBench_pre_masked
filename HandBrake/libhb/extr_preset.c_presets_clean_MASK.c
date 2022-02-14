
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int preset_do_context_t ;
struct TYPE_4__ {int depth; } ;
struct TYPE_5__ {TYPE_1__ path; } ;
struct TYPE_6__ {int * template; TYPE_2__ do_ctx; } ;
typedef TYPE_3__ preset_clean_context_t ;
typedef int hb_value_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(hb_value_t *VAR_1, hb_value_t *VAR_2)
{
    preset_clean_context_t VAR_3;
    VAR_3.do_ctx.path.depth = 1;
    VAR_3.template = VAR_2;
    FUNC_0(VAR_0, VAR_1, (preset_do_context_t*)&VAR_3);
}
