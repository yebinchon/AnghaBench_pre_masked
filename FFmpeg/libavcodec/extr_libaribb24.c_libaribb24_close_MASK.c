
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ lib_instance; scalar_t__ decoder; } ;
typedef TYPE_1__ Libaribb24Context ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    Libaribb24Context *VAR_1 = VAR_0->priv_data;

    if (VAR_1->decoder)
        FUNC_0(VAR_1->decoder);

    if (VAR_1->lib_instance)
        FUNC_1(VAR_1->lib_instance);

    return 0;
}
