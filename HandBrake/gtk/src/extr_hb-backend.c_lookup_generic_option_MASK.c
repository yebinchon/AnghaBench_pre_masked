
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t gint ;
typedef char gchar ;
struct TYPE_6__ {size_t count; TYPE_1__* map; } ;
typedef TYPE_2__ combo_opts_t ;
struct TYPE_5__ {char* option; } ;
typedef int GhbValue ;


 size_t FUNC_0 (TYPE_2__ const*,int const*) ;

__attribute__((used)) static const gchar*
FUNC_1(const combo_opts_t *VAR_0, const GhbValue *VAR_1)
{
    gint VAR_2;
    const gchar *VAR_3 = "";

    VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2 < VAR_0->count)
    {
        VAR_3 = VAR_0->map[VAR_2].option;
    }
    return VAR_3;
}
