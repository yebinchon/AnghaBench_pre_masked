
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int time_scale; int fc; } ;
struct TYPE_5__ {int time_scale; int ffindex; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(MOVContext *VAR_1, MOVStreamContext *VAR_2)
{
    if (VAR_2->time_scale <= 0) {
        FUNC_0(VAR_1->fc, VAR_0, "stream %d, timescale not set\n", VAR_2->ffindex);
        VAR_2->time_scale = VAR_1->time_scale;
        if (VAR_2->time_scale <= 0)
            VAR_2->time_scale = 1;
    }
}
