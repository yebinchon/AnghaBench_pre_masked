
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dchannel {int state; int err_tx; } ;
struct w6692_hw {int state; int fmask; int name; struct dchannel dch; } ;


 int FUNC_0 (struct w6692_hw*,int ) ;
 int FUNC_1 (struct w6692_hw*) ;
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


 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct w6692_hw*,int ,int ) ;
 int FUNC_3 (struct w6692_hw*) ;
 int VAR_17 ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (struct w6692_hw*,int) ;

__attribute__((used)) static void
FUNC_6(struct w6692_hw *VAR_18)
{
 struct dchannel *VAR_19 = &VAR_18->dch;
 u8 VAR_20, VAR_21, VAR_22;

 VAR_20 = FUNC_0(VAR_18, VAR_6);

 FUNC_4("%s: D_EXIR %02x\n", VAR_18->name, VAR_20);
 if (VAR_20 & (VAR_14 | VAR_13)) {

  FUNC_4("%s: D-channel underrun/collision\n", VAR_18->name);



  FUNC_3(VAR_18);
 }
 if (VAR_20 & VAR_9) {
  FUNC_4("%s: D-channel RDOV\n", VAR_18->name);
  FUNC_2(VAR_18, VAR_4, VAR_5);
 }
 if (VAR_20 & VAR_11)
  FUNC_4("%s: spurious TIN2 interrupt\n", VAR_18->name);
 if (VAR_20 & VAR_8) {
  VAR_21 = FUNC_0(VAR_18, VAR_15);
  FUNC_4("%s: spurious MOC interrupt MOSR %02x\n",
   VAR_18->name, VAR_21);
 }
 if (VAR_20 & VAR_7) {
  VAR_22 = FUNC_0(VAR_18, VAR_0);
  FUNC_4("%s: ISC CIR %02X\n", VAR_18->name, VAR_22);
  if (VAR_22 & VAR_2) {
   VAR_21 = VAR_22 & VAR_1;
   FUNC_4("%s: ph_state_change %x -> %x\n", VAR_18->name,
    VAR_19->state, VAR_21);
   VAR_18->state = VAR_21;
   if (VAR_18->fmask & VAR_17) {
    switch (VAR_21) {
    case 128:
    case 129:
     FUNC_5(VAR_18, 1);
     break;
    default:
     FUNC_5(VAR_18, 0);
     break;
    }
   }
   FUNC_1(VAR_18);
  }
  if (VAR_22 & VAR_3) {
   VAR_21 = FUNC_0(VAR_18, VAR_16);
   FUNC_4("%s: SCC SQR %02X\n", VAR_18->name, VAR_21);
  }
 }
 if (VAR_20 & VAR_12)
  FUNC_4("%s: spurious WEXP interrupt!\n", VAR_18->name);
 if (VAR_20 & VAR_10)
  FUNC_4("%s: spurious TEXP interrupt!\n", VAR_18->name);
}
