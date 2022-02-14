
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_8__ {void** RAM1; void** RAM0; } ;
struct TYPE_9__ {TYPE_3__ bank; } ;
struct TYPE_6__ {size_t* r0; size_t* r1; } ;
struct TYPE_7__ {TYPE_1__ bank; } ;
struct TYPE_10__ {TYPE_4__ mem; TYPE_2__ ptr; } ;


 TYPE_5__* VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1, u32 VAR_2)
{
  int VAR_3 = (VAR_1&3) | ((VAR_1>>6)&4) | ((VAR_1<<1)&0x18);
  switch (VAR_3)
  {

    case 0x00:
    case 0x01:
    case 0x02: VAR_0->mem.bank.RAM0[VAR_0->ptr.bank.r0[VAR_3&3]] = VAR_2; return;
    case 0x03: VAR_0->mem.bank.RAM0[0] = VAR_2; return;
    case 0x04:
    case 0x05:
    case 0x06: VAR_0->mem.bank.RAM1[VAR_0->ptr.bank.r1[VAR_3&3]] = VAR_2; return;
    case 0x07: VAR_0->mem.bank.RAM1[0] = VAR_2; return;


    case 0x08:
    case 0x18:
    case 0x09:
    case 0x19:
    case 0x0a:
    case 0x1a: VAR_0->mem.bank.RAM0[VAR_0->ptr.bank.r0[VAR_3&3]++] = VAR_2; return;
    case 0x0b: VAR_0->mem.bank.RAM0[1] = VAR_2; return;
    case 0x0c:
    case 0x1c:
    case 0x0d:
    case 0x1d:
    case 0x0e:
    case 0x1e: VAR_0->mem.bank.RAM1[VAR_0->ptr.bank.r1[VAR_3&3]++] = VAR_2; return;
    case 0x0f: VAR_0->mem.bank.RAM1[1] = VAR_2; return;

    case 0x10:
    case 0x11:
    case 0x12: VAR_0->mem.bank.RAM0[VAR_0->ptr.bank.r0[VAR_3&3]--] = VAR_2; return;
    case 0x13: VAR_0->mem.bank.RAM0[2] = VAR_2; return;
    case 0x14:
    case 0x15:
    case 0x16: VAR_0->mem.bank.RAM1[VAR_0->ptr.bank.r1[VAR_3&3]--] = VAR_2; return;
    case 0x17: VAR_0->mem.bank.RAM1[2] = VAR_2; return;

    case 0x1b: VAR_0->mem.bank.RAM0[3] = VAR_2; return;
    case 0x1f: VAR_0->mem.bank.RAM1[3] = VAR_2; return;
  }
}
