
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ BasePort1; int IOAddrLines; } ;
struct TYPE_9__ {int Vpp; } ;
struct pcmcia_device {TYPE_8__ io; TYPE_1__ conf; } ;
struct TYPE_12__ {scalar_t__ nwin; int flags; TYPE_3__* win; } ;
struct TYPE_10__ {int present; int* param; } ;
struct TYPE_13__ {TYPE_4__ io; TYPE_2__ vpp1; } ;
typedef TYPE_5__ cistpl_cftable_entry_t ;
struct TYPE_11__ {int const len; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_device*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_3,
          cistpl_cftable_entry_t *VAR_4,
          cistpl_cftable_entry_t *VAR_5,
          unsigned int VAR_6,
          void *VAR_7)
{
 static const int VAR_8[2] = { 8, 16 };
 int *VAR_9 = VAR_7;

 if (VAR_4->vpp1.present & (1 << VAR_1))
  VAR_3->conf.Vpp =
   VAR_4->vpp1.param[VAR_1] / 10000;

 if ((VAR_4->io.nwin > 0) && (VAR_4->io.win[0].len == VAR_8[(*VAR_9 >> 1)])
     && (VAR_4->io.win[0].base != 0)) {
  VAR_3->io.BasePort1 = VAR_4->io.win[0].base;
  VAR_3->io.IOAddrLines = ((*VAR_9 & 0x1) == 0) ?
   16 : VAR_4->io.flags & VAR_0;
  if (!FUNC_0(VAR_3, &VAR_3->io))
   return 0;
 }
 return -VAR_2;
}
