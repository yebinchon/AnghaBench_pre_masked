
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int * pb; } ;
typedef TYPE_1__ MlvContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    MlvContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < 100; VAR_2++)
        FUNC_0(VAR_0, &VAR_1->pb[VAR_2]);
    return 0;
}
