
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_12__ {int* TupleData; int TupleDataLen; } ;
typedef TYPE_2__ tuple_t ;
struct TYPE_16__ {int nwin; TYPE_1__* win; } ;
struct TYPE_17__ {scalar_t__ IRQInfo1; } ;
struct TYPE_18__ {scalar_t__ nwin; } ;
struct TYPE_14__ {scalar_t__ reserved; scalar_t__ ready; scalar_t__ wait; } ;
struct TYPE_15__ {scalar_t__ present; } ;
struct TYPE_13__ {int index; int flags; int interface; int subtuples; TYPE_6__ mem; TYPE_7__ irq; TYPE_8__ io; TYPE_4__ timing; TYPE_5__ vpp2; TYPE_5__ vpp1; TYPE_5__ vcc; } ;
typedef TYPE_3__ cistpl_cftable_entry_t ;
struct TYPE_11__ {int len; int card_addr; int host_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int*,int*,TYPE_8__*) ;
 int* FUNC_2 (int*,int*,TYPE_7__*) ;
 int* FUNC_3 (int*,int*,TYPE_6__*) ;
 int* FUNC_4 (int*,int*,TYPE_5__*) ;
 int* FUNC_5 (int*,int*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(tuple_t *VAR_6,
          cistpl_cftable_entry_t *VAR_7)
{
    u_char *VAR_8, *VAR_9, VAR_10;

    VAR_8 = VAR_6->TupleData;
    VAR_9 = VAR_8 + VAR_6->TupleDataLen;
    VAR_7->index = *VAR_8 & 0x3f;
    VAR_7->flags = 0;
    if (*VAR_8 & 0x40)
 VAR_7->flags |= VAR_1;
    if (*VAR_8 & 0x80) {
 if (++VAR_8 == VAR_9)
  return -VAR_5;
 if (*VAR_8 & 0x10)
     VAR_7->flags |= VAR_0;
 if (*VAR_8 & 0x20)
     VAR_7->flags |= VAR_4;
 if (*VAR_8 & 0x40)
     VAR_7->flags |= VAR_3;
 if (*VAR_8 & 0x80)
     VAR_7->flags |= VAR_2;
 VAR_7->interface = *VAR_8 & 0x0f;
    } else
 VAR_7->interface = 0;


    if (++VAR_8 == VAR_9)
     return -VAR_5;
    VAR_10 = *VAR_8; VAR_8++;


    if ((VAR_10 & 3) > 0) {
 VAR_8 = FUNC_4(VAR_8, VAR_9, &VAR_7->vcc);
 if (VAR_8 == ((void*)0))
  return -VAR_5;
    } else
 VAR_7->vcc.present = 0;
    if ((VAR_10 & 3) > 1) {
 VAR_8 = FUNC_4(VAR_8, VAR_9, &VAR_7->vpp1);
 if (VAR_8 == ((void*)0))
  return -VAR_5;
    } else
 VAR_7->vpp1.present = 0;
    if ((VAR_10 & 3) > 2) {
 VAR_8 = FUNC_4(VAR_8, VAR_9, &VAR_7->vpp2);
 if (VAR_8 == ((void*)0))
  return -VAR_5;
    } else
 VAR_7->vpp2.present = 0;


    if (VAR_10 & 0x04) {
 VAR_8 = FUNC_5(VAR_8, VAR_9, &VAR_7->timing);
 if (VAR_8 == ((void*)0))
  return -VAR_5;
    } else {
 VAR_7->timing.wait = 0;
 VAR_7->timing.ready = 0;
 VAR_7->timing.reserved = 0;
    }


    if (VAR_10 & 0x08) {
 VAR_8 = FUNC_1(VAR_8, VAR_9, &VAR_7->io);
 if (VAR_8 == ((void*)0))
  return -VAR_5;
    } else
 VAR_7->io.nwin = 0;


    if (VAR_10 & 0x10) {
 VAR_8 = FUNC_2(VAR_8, VAR_9, &VAR_7->irq);
 if (VAR_8 == ((void*)0))
  return -VAR_5;
    } else
 VAR_7->irq.IRQInfo1 = 0;

    switch (VAR_10 & 0x60) {
    case 0x00:
 VAR_7->mem.nwin = 0;
 break;
    case 0x20:
 VAR_7->mem.nwin = 1;
 VAR_7->mem.win[0].len = FUNC_0(VAR_8) << 8;
 VAR_7->mem.win[0].card_addr = 0;
 VAR_7->mem.win[0].host_addr = 0;
 VAR_8 += 2;
 if (VAR_8 > VAR_9)
  return -VAR_5;
 break;
    case 0x40:
 VAR_7->mem.nwin = 1;
 VAR_7->mem.win[0].len = FUNC_0(VAR_8) << 8;
 VAR_7->mem.win[0].card_addr = FUNC_0(VAR_8 + 2) << 8;
 VAR_7->mem.win[0].host_addr = 0;
 VAR_8 += 4;
 if (VAR_8 > VAR_9)
  return -VAR_5;
 break;
    case 0x60:
 VAR_8 = FUNC_3(VAR_8, VAR_9, &VAR_7->mem);
 if (VAR_8 == ((void*)0))
  return -VAR_5;
 break;
    }


    if (VAR_10 & 0x80) {
 if (VAR_8 == VAR_9)
  return -VAR_5;
 VAR_7->flags |= (*VAR_8 << 8);
 while (*VAR_8 & 0x80)
     if (++VAR_8 == VAR_9)
      return -VAR_5;
 VAR_8++;
    }

    VAR_7->subtuples = VAR_9-VAR_8;

    return 0;
}
