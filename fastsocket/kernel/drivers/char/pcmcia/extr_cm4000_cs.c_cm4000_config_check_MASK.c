
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int IOAddrLines; int Attributes1; int NumPorts1; int BasePort1; } ;
struct pcmcia_device {TYPE_4__ io; } ;
struct TYPE_8__ {int flags; TYPE_1__* win; int nwin; } ;
struct TYPE_9__ {TYPE_2__ io; } ;
typedef TYPE_3__ cistpl_cftable_entry_t ;
struct TYPE_7__ {int len; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pcmcia_device*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_7,
          cistpl_cftable_entry_t *VAR_8,
          cistpl_cftable_entry_t *VAR_9,
          unsigned int VAR_10,
          void *VAR_11)
{
 if (!VAR_8->io.nwin)
  return -VAR_3;


 VAR_7->io.BasePort1 = VAR_8->io.win[0].base;
 VAR_7->io.NumPorts1 = VAR_8->io.win[0].len;
 VAR_7->io.Attributes1 = VAR_6;
 if (!(VAR_8->io.flags & VAR_1))
  VAR_7->io.Attributes1 = VAR_4;
 if (!(VAR_8->io.flags & VAR_0))
  VAR_7->io.Attributes1 = VAR_5;
 VAR_7->io.IOAddrLines = VAR_8->io.flags & VAR_2;

 return FUNC_0(VAR_7, &VAR_7->io);
}
