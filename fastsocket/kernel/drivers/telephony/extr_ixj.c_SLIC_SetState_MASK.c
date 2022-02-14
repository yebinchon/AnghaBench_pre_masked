
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


struct TYPE_17__ {int c1; int c2; int c3; int b2en; } ;
struct TYPE_16__ {int byte; TYPE_7__ bits; } ;
struct TYPE_12__ {int powerdown; int ring0; int ring1; } ;
struct TYPE_15__ {int byte; TYPE_2__ bits; } ;
struct TYPE_13__ {int dev; scalar_t__ rw; } ;
struct TYPE_14__ {int byte; TYPE_3__ bits; } ;
struct TYPE_11__ {scalar_t__ pcmciasct; } ;
struct TYPE_18__ {scalar_t__ cardtype; scalar_t__ XILINXbase; TYPE_6__ pld_slicw; TYPE_5__ pslic; TYPE_4__ psccr; int writers; int readers; TYPE_1__ flags; } ;
typedef TYPE_8__ IXJ ;
typedef int BYTE ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(BYTE VAR_1, IXJ *VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_2->cardtype == VAR_0) {
  if (VAR_2->flags.pcmciasct) {
   switch (VAR_1) {
   case 128:
   case 133:
    VAR_2->pslic.bits.powerdown = 1;
    VAR_2->pslic.bits.ring0 = VAR_2->pslic.bits.ring1 = 0;
    VAR_3 = 1;
    break;
   case 130:
    if (VAR_2->readers || VAR_2->writers) {
     VAR_2->pslic.bits.powerdown = 0;
     VAR_2->pslic.bits.ring0 = 1;
     VAR_2->pslic.bits.ring1 = 0;
     VAR_3 = 1;
    }
    break;
   case 132:

   case 129:
   case 135:
    if (VAR_2->readers || VAR_2->writers) {
     VAR_2->pslic.bits.powerdown = 0;
    } else {
     VAR_2->pslic.bits.powerdown = 1;
    }
    VAR_2->pslic.bits.ring0 = VAR_2->pslic.bits.ring1 = 0;
    VAR_3 = 1;
    break;
   case 134:

   case 131:

   default:
    VAR_3 = 0;
    break;
   }
   VAR_2->psccr.bits.dev = 3;
   VAR_2->psccr.bits.rw = 0;
   FUNC_2(VAR_2->psccr.byte << 8 | VAR_2->pslic.byte, VAR_2->XILINXbase + 0x00);
   FUNC_0(VAR_2);
  }
 } else {

  switch (VAR_1) {
  case 133:
   VAR_2->pld_slicw.bits.c1 = 0;
   VAR_2->pld_slicw.bits.c2 = 0;
   VAR_2->pld_slicw.bits.c3 = 0;
   VAR_2->pld_slicw.bits.b2en = 0;
   FUNC_1(VAR_2->pld_slicw.byte, VAR_2->XILINXbase + 0x01);
   VAR_3 = 1;
   break;
  case 130:
   VAR_2->pld_slicw.bits.c1 = 1;
   VAR_2->pld_slicw.bits.c2 = 0;
   VAR_2->pld_slicw.bits.c3 = 0;
   VAR_2->pld_slicw.bits.b2en = 1;
   FUNC_1(VAR_2->pld_slicw.byte, VAR_2->XILINXbase + 0x01);
   VAR_3 = 1;
   break;
  case 135:
   VAR_2->pld_slicw.bits.c1 = 0;
   VAR_2->pld_slicw.bits.c2 = 1;
   VAR_2->pld_slicw.bits.c3 = 0;
   VAR_2->pld_slicw.bits.b2en = 0;
   FUNC_1(VAR_2->pld_slicw.byte, VAR_2->XILINXbase + 0x01);
   VAR_3 = 1;
   break;
  case 132:

   VAR_2->pld_slicw.bits.c1 = 1;
   VAR_2->pld_slicw.bits.c2 = 1;
   VAR_2->pld_slicw.bits.c3 = 0;
   VAR_2->pld_slicw.bits.b2en = 0;
   FUNC_1(VAR_2->pld_slicw.byte, VAR_2->XILINXbase + 0x01);
   VAR_3 = 1;
   break;
  case 128:
   VAR_2->pld_slicw.bits.c1 = 0;
   VAR_2->pld_slicw.bits.c2 = 0;
   VAR_2->pld_slicw.bits.c3 = 1;
   VAR_2->pld_slicw.bits.b2en = 0;
   FUNC_1(VAR_2->pld_slicw.byte, VAR_2->XILINXbase + 0x01);
   VAR_3 = 1;
   break;
  case 129:
   VAR_2->pld_slicw.bits.c1 = 1;
   VAR_2->pld_slicw.bits.c2 = 0;
   VAR_2->pld_slicw.bits.c3 = 1;
   VAR_2->pld_slicw.bits.b2en = 1;
   FUNC_1(VAR_2->pld_slicw.byte, VAR_2->XILINXbase + 0x01);
   VAR_3 = 1;
   break;
  case 134:

   VAR_2->pld_slicw.bits.c1 = 0;
   VAR_2->pld_slicw.bits.c2 = 1;
   VAR_2->pld_slicw.bits.c3 = 1;
   VAR_2->pld_slicw.bits.b2en = 0;
   FUNC_1(VAR_2->pld_slicw.byte, VAR_2->XILINXbase + 0x01);
   VAR_3 = 1;
   break;
  case 131:

   VAR_2->pld_slicw.bits.c1 = 1;
   VAR_2->pld_slicw.bits.c2 = 1;
   VAR_2->pld_slicw.bits.c3 = 1;
   VAR_2->pld_slicw.bits.b2en = 0;
   FUNC_1(VAR_2->pld_slicw.byte, VAR_2->XILINXbase + 0x01);
   VAR_3 = 1;
   break;
  default:
   VAR_3 = 0;
   break;
  }
 }

 return VAR_3;
}
