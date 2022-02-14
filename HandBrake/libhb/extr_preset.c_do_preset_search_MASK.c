
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; } ;
struct TYPE_5__ {TYPE_1__ path; } ;
struct TYPE_6__ {int last_match_idx; int type; int name; scalar_t__ recurse; TYPE_2__ do_ctx; } ;
typedef TYPE_3__ preset_search_context_t ;
typedef int preset_do_context_t ;
typedef int hb_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(hb_value_t *VAR_3, preset_do_context_t *VAR_4)
{
    preset_search_context_t *VAR_5 = (preset_search_context_t*)VAR_4;
    int VAR_6, VAR_7;

    VAR_6 = VAR_5->do_ctx.path.depth - 1;
    if (VAR_5->last_match_idx >= 0 && VAR_6 > VAR_5->last_match_idx)
    {

        VAR_6 -= VAR_5->last_match_idx;
    }

    VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_5->name, VAR_5->type);
    if (VAR_5->recurse && VAR_7 == VAR_2)
    {
        VAR_7 = FUNC_0(VAR_3, 0, VAR_5->name, VAR_5->type);
        VAR_5->last_match_idx = VAR_6;
    }
    if (VAR_7 == VAR_1)
    {
        return VAR_0;
    }
    else
    {
        VAR_5->last_match_idx = -1;
    }

    return VAR_7;
}
