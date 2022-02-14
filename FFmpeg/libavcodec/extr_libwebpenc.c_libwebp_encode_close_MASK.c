
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int ref; } ;
typedef TYPE_1__ LibWebPContextCommon ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0)
{
    LibWebPContextCommon *VAR_1 = VAR_0->priv_data;
    FUNC_0(&VAR_1->ref);

    return 0;
}
