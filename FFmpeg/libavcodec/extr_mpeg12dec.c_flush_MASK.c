
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {scalar_t__ sync; } ;
typedef TYPE_1__ Mpeg1Context ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0)
{
    Mpeg1Context *VAR_1 = VAR_0->priv_data;

    VAR_1->sync = 0;

    FUNC_0(VAR_0);
}
