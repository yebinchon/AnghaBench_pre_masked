
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ gazel; } ;
struct IsdnCardState {int subtyp; TYPE_2__ hw; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_1 (struct IsdnCardState*,int ,int) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (unsigned long,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct IsdnCardState *VAR_13)
{
 unsigned long VAR_14, VAR_15 = VAR_13->hw.gazel.cfg_reg;

 switch (VAR_13->subtyp) {
  case 131:
   FUNC_5(VAR_15, 0, 0);
   FUNC_0(10);
   FUNC_5(VAR_15, 0, 1);
   FUNC_0(2);
   break;
  case 130:
   VAR_14 = FUNC_2(VAR_15 + VAR_9);
   VAR_14 |= (VAR_11 + VAR_12);
   FUNC_4(VAR_14, VAR_15 + VAR_9);
   VAR_14 &= ~(VAR_11 + VAR_12);
   FUNC_0(4);
   FUNC_4(VAR_14, VAR_15 + VAR_9);
   FUNC_0(10);
   FUNC_3(VAR_2 + VAR_0 + VAR_3, VAR_15 + VAR_10);
   break;
  case 128:
   VAR_14 = FUNC_2(VAR_15 + VAR_9);
   VAR_14 |= (VAR_11 + VAR_12);
   FUNC_4(VAR_14, VAR_15 + VAR_9);
   VAR_14 &= ~(VAR_11 + VAR_12);
   FUNC_1(VAR_13, VAR_8 - 0x80, 0x20);
   FUNC_0(4);
   FUNC_4(VAR_14, VAR_15 + VAR_9);
   FUNC_0(10);
   FUNC_1(VAR_13, VAR_8 - 0x80, 0x00);
   FUNC_1(VAR_13, VAR_4 - 0x80, 0xff);
   FUNC_1(VAR_13, VAR_5 - 0x80, 0x0);
   FUNC_1(VAR_13, VAR_7 - 0x80, 0xff);
   FUNC_1(VAR_13, VAR_6 - 0x80, 0x1);
   FUNC_3(VAR_1 + VAR_3, VAR_15 + VAR_10);
   FUNC_1(VAR_13, VAR_7 - 0x80, 0xc0);
   break;
  case 129:
   FUNC_1(VAR_13, VAR_8 - 0x80, 0x20);
   FUNC_0(4);
   FUNC_1(VAR_13, VAR_8 - 0x80, 0x00);
   FUNC_1(VAR_13, VAR_4 - 0x80, 0xff);
   FUNC_1(VAR_13, VAR_5 - 0x80, 0x0);
   FUNC_1(VAR_13, VAR_7 - 0x80, 0xff);
   FUNC_1(VAR_13, VAR_6 - 0x80, 0x1);
   FUNC_1(VAR_13, VAR_7 - 0x80, 0xc0);
   break;
 }
 return (0);
}
