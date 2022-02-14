
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* mdmreg; } ;
struct TYPE_6__ {TYPE_1__ emu; } ;
typedef TYPE_2__ modem_info ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, modem_info * VAR_1)
{
 char VAR_2[6];

 FUNC_1(VAR_2, "\r\n%d", VAR_1->emu.mdmreg[VAR_0]);
 FUNC_0(VAR_2, VAR_1);
}
