
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cbc; void* pkt; void* in; } ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVBSFContext ;
typedef TYPE_2__ AV1FMergeContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 () ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(AVBSFContext *VAR_2)
{
    AV1FMergeContext *VAR_3 = VAR_2->priv_data;

    VAR_3->in = FUNC_1();
    VAR_3->pkt = FUNC_1();
    if (!VAR_3->in || !VAR_3->pkt)
        return FUNC_0(VAR_1);

    return FUNC_2(&VAR_3->cbc, VAR_0, VAR_2);
}
