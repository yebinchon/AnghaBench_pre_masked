
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int cbc; int fragment; } ;
typedef TYPE_1__ MPEG2MetadataContext ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(AVBSFContext *VAR_0)
{
    MPEG2MetadataContext *VAR_1 = VAR_0->priv_data;

    FUNC_1(VAR_1->cbc, &VAR_1->fragment);
    FUNC_0(&VAR_1->cbc);
}
