
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int busytone; scalar_t__ dialtone; scalar_t__ ringback; } ;
struct TYPE_8__ {TYPE_1__ flags; } ;
typedef TYPE_2__ IXJ ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int,TYPE_2__*) ;
 int FUNC_2 (int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(IXJ *VAR_0)
{
 VAR_0->flags.ringback = 0;
 VAR_0->flags.dialtone = 0;
 VAR_0->flags.busytone = 1;
 FUNC_2(0x07D0, VAR_0);
 FUNC_1(0x07D0, VAR_0);
 FUNC_0(VAR_0, 27);
}
