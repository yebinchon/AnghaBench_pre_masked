
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int crc; } ;
struct TYPE_5__ {int crc; } ;
struct TYPE_7__ {TYPE_2__ extra_sc; TYPE_1__ sc; scalar_t__ pos; } ;
typedef TYPE_3__ WavpackFrameContext ;



__attribute__((used)) static void FUNC_0(WavpackFrameContext *VAR_0)
{
    VAR_0->pos = 0;
    VAR_0->sc.crc = VAR_0->extra_sc.crc = 0xFFFFFFFF;
}
