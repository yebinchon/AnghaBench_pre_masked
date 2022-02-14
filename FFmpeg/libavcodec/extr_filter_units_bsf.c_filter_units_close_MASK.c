
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int cbc; int fragment; int type_list; } ;
typedef TYPE_1__ FilterUnitsContext ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(AVBSFContext *VAR_0)
{
    FilterUnitsContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->type_list);

    FUNC_2(VAR_1->cbc, &VAR_1->fragment);
    FUNC_1(&VAR_1->cbc);
}
