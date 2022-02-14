
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_27__ {int gpio6; int gpio7; } ;
struct TYPE_26__ {int high; } ;
struct TYPE_24__ {int rly1; int spken; int rly3; } ;
struct TYPE_20__ {int mic; int spk; } ;
struct TYPE_25__ {int byte; TYPE_6__ bits; TYPE_2__ pcib; } ;
struct TYPE_23__ {int byte; } ;
struct TYPE_21__ {int daafsyncen; } ;
struct TYPE_22__ {int byte; TYPE_3__ bits; } ;
struct TYPE_19__ {int pcmciasct; } ;
struct TYPE_17__ {int word; TYPE_9__ bits; TYPE_8__ bytes; } ;
struct TYPE_18__ {scalar_t__ cardtype; int port; TYPE_10__ gpio; int XILINXbase; TYPE_7__ pld_slicw; TYPE_5__ pld_clock; TYPE_4__ pld_scrw; TYPE_1__ flags; } ;
typedef TYPE_11__ IXJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 scalar_t__ VAR_3 ;

 int FUNC_0 (int ,TYPE_11__*) ;
 int FUNC_1 (int,TYPE_11__*) ;
 int FUNC_2 (int,TYPE_11__*) ;
 int FUNC_3 (TYPE_11__*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(IXJ *VAR_4, int VAR_5)
{
 if (VAR_4->cardtype == VAR_3) {
  if (VAR_5 != 134)
   return 10;
  else
   return 0;
 }
 switch (VAR_5) {
 case 134:
  VAR_4->port = 134;
  switch (VAR_4->cardtype) {
  case 130:
   if (VAR_4->flags.pcmciasct == 1)
    FUNC_0(VAR_0, VAR_4);
   else
    return 11;
   break;
  case 128:
   VAR_4->pld_slicw.pcib.mic = 0;
   VAR_4->pld_slicw.pcib.spk = 0;
   FUNC_4(VAR_4->pld_slicw.byte, VAR_4->XILINXbase + 0x01);
   break;
  case 131:
   FUNC_3(VAR_4, 0);
   if (FUNC_1(0xC528, VAR_4))

    return 2;
   VAR_4->pld_scrw.bits.daafsyncen = 0;

   FUNC_4(VAR_4->pld_scrw.byte, VAR_4->XILINXbase);
   VAR_4->pld_clock.byte = 0;
   FUNC_4(VAR_4->pld_clock.byte, VAR_4->XILINXbase + 0x04);
   VAR_4->pld_slicw.bits.rly1 = 1;
   VAR_4->pld_slicw.bits.spken = 0;
   FUNC_4(VAR_4->pld_slicw.byte, VAR_4->XILINXbase + 0x01);
   FUNC_2(0x1200, VAR_4);
   FUNC_2(0x1401, VAR_4);
   FUNC_2(0x1300, VAR_4);
   FUNC_2(0x1501, VAR_4);
   FUNC_2(0x0E80, VAR_4);
   FUNC_2(0x0F00, VAR_4);
   FUNC_2(0x0080, VAR_4);
   FUNC_2(0x0180, VAR_4);
   FUNC_0(VAR_2, VAR_4);

   break;
  case 129:
   VAR_4->gpio.bytes.high = 0x0B;
   VAR_4->gpio.bits.gpio6 = 0;
   VAR_4->gpio.bits.gpio7 = 0;
   FUNC_1(VAR_4->gpio.word, VAR_4);
   break;
  }
  break;
 case 133:
  if (VAR_4->cardtype == 131) {
   FUNC_1(0xC534, VAR_4);

   VAR_4->pld_slicw.bits.rly3 = 0;
   VAR_4->pld_slicw.bits.rly1 = 1;
   VAR_4->pld_slicw.bits.spken = 0;
   FUNC_4(VAR_4->pld_slicw.byte, VAR_4->XILINXbase + 0x01);
   VAR_4->port = 133;
  } else {
   return 4;
  }
  break;
 case 132:
  VAR_4->port = 132;
  switch (VAR_4->cardtype) {
  case 130:
   if (VAR_4->flags.pcmciasct) {
    FUNC_0(VAR_1, VAR_4);
   }
   break;
  case 128:
   VAR_4->pld_slicw.pcib.mic = 1;
   VAR_4->pld_slicw.pcib.spk = 1;
   FUNC_4(VAR_4->pld_slicw.byte, VAR_4->XILINXbase + 0x01);
   break;
  case 131:
   FUNC_3(VAR_4, 0);
   if (FUNC_1(0xC528, VAR_4))

    return 2;
   VAR_4->pld_scrw.bits.daafsyncen = 0;

   FUNC_4(VAR_4->pld_scrw.byte, VAR_4->XILINXbase);
   VAR_4->pld_clock.byte = 0;
   FUNC_4(VAR_4->pld_clock.byte, VAR_4->XILINXbase + 0x04);
   VAR_4->pld_slicw.bits.rly1 = 1;
   VAR_4->pld_slicw.bits.spken = 1;
   FUNC_4(VAR_4->pld_slicw.byte, VAR_4->XILINXbase + 0x01);
   FUNC_2(0x1201, VAR_4);
   FUNC_2(0x1400, VAR_4);
   FUNC_2(0x1301, VAR_4);
   FUNC_2(0x1500, VAR_4);
   FUNC_2(0x0E06, VAR_4);
   FUNC_2(0x0F80, VAR_4);
   FUNC_2(0x0000, VAR_4);
   FUNC_2(0x0100, VAR_4);
   break;
  case 129:
   VAR_4->gpio.bytes.high = 0x0B;
   VAR_4->gpio.bits.gpio6 = 0;
   VAR_4->gpio.bits.gpio7 = 1;
   FUNC_1(VAR_4->gpio.word, VAR_4);
   break;
  }
  break;
 case 135:
  if (VAR_4->cardtype != 129) {
   return 5;
  } else {
   VAR_4->gpio.bytes.high = 0x0B;
   VAR_4->gpio.bits.gpio6 = 1;
   VAR_4->gpio.bits.gpio7 = 0;
   FUNC_1(VAR_4->gpio.word, VAR_4);
   VAR_4->port = 135;
  }
  break;
 default:
  return 6;
  break;
 }
 return 0;
}
