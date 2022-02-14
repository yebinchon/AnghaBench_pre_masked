
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int low; } ;
struct TYPE_8__ {int dialtone; scalar_t__ busytone; scalar_t__ ringback; } ;
struct TYPE_10__ {TYPE_2__ dsp; TYPE_1__ flags; } ;
typedef TYPE_3__ IXJ ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int,TYPE_3__*) ;
 int FUNC_2 (int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(IXJ *VAR_0)
{
 VAR_0->flags.ringback = 0;
 VAR_0->flags.dialtone = 1;
 VAR_0->flags.busytone = 0;
 if (VAR_0->dsp.low == 0x20) {
  return;
 } else {
  FUNC_2(0xFFFF, VAR_0);
  FUNC_1(0x0000, VAR_0);
  FUNC_0(VAR_0, 25);
 }
}
