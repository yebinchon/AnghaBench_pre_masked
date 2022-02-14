
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int err_tx; } ;
struct isac_hw {int type; TYPE_1__ dch; int name; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct isac_hw*,int ) ;
 int FUNC_1 (struct isac_hw*,int ,int ) ;
 int FUNC_2 (struct isac_hw*) ;
 int FUNC_3 (struct isac_hw*,int) ;
 int FUNC_4 (struct isac_hw*) ;
 int FUNC_5 (struct isac_hw*) ;
 int FUNC_6 (struct isac_hw*) ;
 int FUNC_7 (struct isac_hw*) ;
 int FUNC_8 (struct isac_hw*) ;
 int FUNC_9 (struct isac_hw*) ;
 int FUNC_10 (char*,int ,...) ;
 scalar_t__ FUNC_11 (int) ;

irqreturn_t
FUNC_12(struct isac_hw *VAR_15, u8 VAR_16)
{
 if (FUNC_11(!VAR_16))
  return VAR_2;
 FUNC_10("%s: ISAC interrupt %02x\n", VAR_15->name, VAR_16);
 if (VAR_15->type & VAR_0) {
  if (VAR_16 & VAR_12)
   FUNC_8(VAR_15);
  if (VAR_16 & VAR_13) {
   VAR_16 = FUNC_0(VAR_15, VAR_11);
   FUNC_10("%s: ISTAD %02x\n", VAR_15->name, VAR_16);
   if (VAR_16 & VAR_8) {
    FUNC_10("%s: ISAC XDU\n", VAR_15->name);



    FUNC_5(VAR_15);
   }
   if (VAR_16 & VAR_9) {
    FUNC_10("%s: ISAC XMR\n", VAR_15->name);



    FUNC_5(VAR_15);
   }
   if (VAR_16 & VAR_10)
    FUNC_7(VAR_15);
   if (VAR_16 & VAR_5) {
    FUNC_10("%s: ISAC RFO\n", VAR_15->name);
    FUNC_1(VAR_15, VAR_3, VAR_4);
   }
   if (VAR_16 & VAR_6)
    FUNC_9(VAR_15);
   if (VAR_16 & VAR_7)
    FUNC_3(VAR_15, 0x20);
  }
 } else {
  if (VAR_16 & 0x80)
   FUNC_6(VAR_15);
  if (VAR_16 & 0x40)
   FUNC_3(VAR_15, 32);
  if (VAR_16 & 0x10)
   FUNC_7(VAR_15);
  if (VAR_16 & 0x04)
   FUNC_2(VAR_15);
  if (VAR_16 & 0x20)
   FUNC_10("%s: ISAC RSC interrupt\n", VAR_15->name);
  if (VAR_16 & 0x02)
   FUNC_10("%s: ISAC SIN interrupt\n", VAR_15->name);
  if (VAR_16 & 0x01) {
   VAR_16 = FUNC_0(VAR_15, VAR_14);
   FUNC_10("%s: ISAC EXIR %02x\n", VAR_15->name, VAR_16);
   if (VAR_16 & 0x80)
    FUNC_10("%s: ISAC XMR\n", VAR_15->name);
   if (VAR_16 & 0x40) {
    FUNC_10("%s: ISAC XDU\n", VAR_15->name);



    FUNC_5(VAR_15);
   }
   if (VAR_16 & 0x04)
    FUNC_4(VAR_15);
  }
 }
 return VAR_1;
}
