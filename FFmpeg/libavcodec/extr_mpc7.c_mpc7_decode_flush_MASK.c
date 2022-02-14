
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int frames_to_skip; int oldDSCF; } ;
typedef TYPE_1__ MPCContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0)
{
    MPCContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(VAR_1->oldDSCF, 0, sizeof(VAR_1->oldDSCF));
    VAR_1->frames_to_skip = 32;
}
