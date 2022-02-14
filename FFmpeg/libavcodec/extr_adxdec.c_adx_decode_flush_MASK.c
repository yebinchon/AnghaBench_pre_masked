
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ eof; int prev; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ ADXContext ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0)
{
    ADXContext *VAR_1 = VAR_0->priv_data;
    FUNC_0(VAR_1->prev, 0, sizeof(VAR_1->prev));
    VAR_1->eof = 0;
}
