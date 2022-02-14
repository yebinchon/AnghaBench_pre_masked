
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int base_url; int avio_opts; } ;
typedef TYPE_1__ DASHContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0)
{
    DASHContext *VAR_1 = VAR_0->priv_data;
    FUNC_2(VAR_1);
    FUNC_3(VAR_1);
    FUNC_0(&VAR_1->avio_opts);
    FUNC_1(&VAR_1->base_url);
    return 0;
}
