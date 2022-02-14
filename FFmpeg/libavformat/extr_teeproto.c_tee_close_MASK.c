
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int child_count; TYPE_4__* child; } ;
typedef TYPE_2__ TeeContext ;
struct TYPE_7__ {int url_context; } ;


 int FUNC_0 (TYPE_4__**) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0)
{
    TeeContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;
    int VAR_3 = 0;

    for (VAR_2=0; VAR_2<VAR_1->child_count; VAR_2++) {
        int VAR_4 = FUNC_1(&VAR_1->child[VAR_2].url_context);
        if (VAR_4 < 0)
            VAR_3 = VAR_4;
    }

    FUNC_0(&VAR_1->child);
    VAR_1->child_count = 0;
    return VAR_3;
}
