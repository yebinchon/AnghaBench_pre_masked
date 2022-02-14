
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ device; } ;
typedef TYPE_1__ al_data ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(AVFormatContext* VAR_0)
{
    al_data *VAR_1 = VAR_0->priv_data;

    if (VAR_1->device) {
        FUNC_1(VAR_1->device);
        FUNC_0(VAR_1->device);
    }
    return 0;
}
