
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {int nb_bsfs; char const* item_name; TYPE_2__** bsfs; } ;
struct TYPE_6__ {TYPE_1__* filter; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_3__ BSFListContext ;
typedef TYPE_4__ AVBSFContext ;
typedef int AVBPrint ;


 int FUNC_0 (int *,char const**) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static const char *FUNC_3(void *VAR_0)
{
    static const char *VAR_1 = "null";
    AVBSFContext *VAR_2 = VAR_0;
    BSFListContext *VAR_3 = VAR_2->priv_data;

    if (!VAR_3->nb_bsfs)
        return VAR_1;

    if (!VAR_3->item_name) {
        int VAR_4;
        AVBPrint VAR_5;
        FUNC_1(&VAR_5, 16, 128);

        FUNC_2(&VAR_5, "bsf_list(");
        for (VAR_4 = 0; VAR_4 < VAR_3->nb_bsfs; VAR_4++)
            FUNC_2(&VAR_5, VAR_4 ? ",%s" : "%s", VAR_3->bsfs[VAR_4]->filter->name);
        FUNC_2(&VAR_5, ")");

        FUNC_0(&VAR_5, &VAR_3->item_name);
    }

    return VAR_3->item_name;
}
