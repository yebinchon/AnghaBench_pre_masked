
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int state; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AMRWBContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0)
{
    AMRWBContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(VAR_1->state);
    return 0;
}
