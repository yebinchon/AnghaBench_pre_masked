
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int BasePort1; int IOAddrLines; } ;
struct pcmcia_device {TYPE_3__ io; } ;
struct TYPE_6__ {scalar_t__ nwin; int flags; } ;
struct TYPE_7__ {TYPE_1__ io; } ;
typedef TYPE_2__ cistpl_cftable_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_device*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_2,
     cistpl_cftable_entry_t *VAR_3,
     cistpl_cftable_entry_t *VAR_4,
     unsigned int VAR_5,
     void *VAR_6)
{
 static unsigned int VAR_7[5] = { 0x3f8, 0x2f8, 0x3e8, 0x2e8, 0x0 };
 int VAR_8;

 if ((VAR_3->io.nwin > 0) && ((VAR_3->io.flags & VAR_0) <= 3)) {
  for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
   VAR_2->io.BasePort1 = VAR_7[VAR_8];
   VAR_2->io.IOAddrLines = VAR_7[VAR_8] ? 16 : 3;
   if (!FUNC_0(VAR_2, &VAR_2->io))
    return 0;
  }
 }
 return -VAR_1;
}
