
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cbc; } ;
typedef TYPE_1__ VP9MetadataContext ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(AVBSFContext *VAR_1)
{
    VP9MetadataContext *VAR_2 = VAR_1->priv_data;

    return FUNC_0(&VAR_2->cbc, VAR_0, VAR_1);
}
