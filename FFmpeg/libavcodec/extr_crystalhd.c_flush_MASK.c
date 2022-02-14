
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int dev; scalar_t__ draining; scalar_t__ need_second_field; } ;
typedef TYPE_1__ CHDContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0)
{
    CHDContext *VAR_1 = VAR_0->priv_data;

    VAR_1->need_second_field = 0;
    VAR_1->draining = 0;


    FUNC_0(VAR_1->dev, 4);
}
