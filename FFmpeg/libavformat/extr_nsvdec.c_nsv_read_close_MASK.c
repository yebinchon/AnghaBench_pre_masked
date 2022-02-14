
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {TYPE_4__* ahead; int nsvs_timestamps; int nsvs_file_offset; } ;
typedef TYPE_1__ NSVContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    NSVContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->nsvs_file_offset);
    FUNC_0(&VAR_1->nsvs_timestamps);
    if (VAR_1->ahead[0].data)
        FUNC_1(&VAR_1->ahead[0]);
    if (VAR_1->ahead[1].data)
        FUNC_1(&VAR_1->ahead[1]);
    return 0;
}
