
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int depth; } ;
struct TYPE_4__ {TYPE_3__ path; } ;
struct TYPE_5__ {char const* name; int type; int recurse; int last_match_idx; TYPE_1__ do_ctx; } ;
typedef TYPE_2__ preset_search_context_t ;
typedef int preset_do_context_t ;
typedef int hb_preset_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static hb_preset_index_t * FUNC_2(const char *VAR_3,
                                              int VAR_4, int VAR_5)
{
    preset_search_context_t VAR_6;
    int VAR_7;

    VAR_6.do_ctx.path.depth = 1;
    VAR_6.name = VAR_3;
    VAR_6.type = VAR_5;
    VAR_6.recurse = VAR_4;
    VAR_6.last_match_idx = -1;
    VAR_7 = FUNC_1(VAR_1, VAR_2,
                        (preset_do_context_t*)&VAR_6);
    if (VAR_7 != VAR_0)
        VAR_6.do_ctx.path.depth = 0;

    return FUNC_0(&VAR_6.do_ctx.path);
}
