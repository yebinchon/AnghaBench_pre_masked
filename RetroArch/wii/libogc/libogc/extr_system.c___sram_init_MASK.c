
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; int srambuf; int sync; scalar_t__ locked; scalar_t__ enabled; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;

void FUNC_1()
{
 VAR_0.enabled = 0;
 VAR_0.locked = 0;
 VAR_0.sync = FUNC_0(VAR_0.srambuf);

 VAR_0.offset = 64;
}
