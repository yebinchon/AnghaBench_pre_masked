
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int cluster_pos; int cluster_bc; } ;
typedef TYPE_1__ MatroskaMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0)
{
    MatroskaMuxContext *VAR_1 = VAR_0->priv_data;

    FUNC_1(VAR_0->pb, &VAR_1->cluster_bc, VAR_1);
    VAR_1->cluster_pos = -1;
    FUNC_0(VAR_0->pb);
}
