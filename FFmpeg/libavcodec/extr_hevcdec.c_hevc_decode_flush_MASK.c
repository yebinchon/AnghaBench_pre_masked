
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int eos; int max_ra; int sei; } ;
typedef TYPE_1__ HEVCContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_1)
{
    HEVCContext *VAR_2 = VAR_1->priv_data;
    FUNC_0(VAR_2);
    FUNC_1(&VAR_2->sei);
    VAR_2->max_ra = VAR_0;
    VAR_2->eos = 1;
}
