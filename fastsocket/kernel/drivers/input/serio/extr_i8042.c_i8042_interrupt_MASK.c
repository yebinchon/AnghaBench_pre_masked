
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct i8042_port {scalar_t__ exists; struct serio* serio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (int) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (char*,unsigned char,...) ;
 int FUNC_2 (unsigned char,unsigned char,struct serio*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 struct i8042_port* VAR_13 ;
 unsigned char FUNC_3 () ;
 unsigned char FUNC_4 () ;
 unsigned long VAR_14 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct serio*,unsigned char,unsigned int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_10 (unsigned char) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_15, void *VAR_16)
{
 struct i8042_port *VAR_17;
 struct serio *VAR_18;
 unsigned long VAR_19;
 unsigned char VAR_20, VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 bool VAR_24;
 int VAR_25 = 1;

 FUNC_7(&VAR_11, VAR_19);

 VAR_20 = FUNC_4();
 if (FUNC_10(~VAR_20 & VAR_6)) {
  FUNC_8(&VAR_11, VAR_19);
  if (VAR_15) FUNC_1("Interrupt %d, without any data", VAR_15);
  VAR_25 = 0;
  goto out;
 }

 VAR_21 = FUNC_3();

 if (VAR_12 && (VAR_20 & VAR_4)) {
  static unsigned long VAR_26;
  static unsigned char VAR_27;

  VAR_22 = 0;
  if (VAR_20 & VAR_5) {
   FUNC_1("MUX error, status is %02x, data is %02x", VAR_20, VAR_21);
   switch (VAR_21) {
    default:
     if (FUNC_9(VAR_14, VAR_26 + VAR_0/10)) {
      VAR_20 = VAR_27;
      break;
     }

    case 0xfc:
    case 0xfd:
    case 0xfe: VAR_22 = VAR_10; VAR_21 = 0xfe; break;
    case 0xff: VAR_22 = VAR_9; VAR_21 = 0xfe; break;
   }
  }

  VAR_23 = VAR_3 + ((VAR_20 >> 6) & 3);
  VAR_27 = VAR_20;
  VAR_26 = VAR_14;
 } else {

  VAR_22 = ((VAR_20 & VAR_7) ? VAR_9 : 0) |
        ((VAR_20 & VAR_8) ? VAR_10 : 0);

  VAR_23 = (VAR_20 & VAR_4) ?
    VAR_1 : VAR_2;
 }

 VAR_17 = &VAR_13[VAR_23];
 VAR_18 = VAR_17->exists ? VAR_17->serio : ((void*)0);

 FUNC_1("%02x <- i8042 (interrupt, %d, %d%s%s)",
     VAR_21, VAR_23, VAR_15,
     VAR_22 & VAR_9 ? ", bad parity" : "",
     VAR_22 & VAR_10 ? ", timeout" : "");

 VAR_24 = FUNC_2(VAR_21, VAR_20, VAR_18);

 FUNC_8(&VAR_11, VAR_19);

 if (FUNC_5(VAR_17->exists && !VAR_24))
  FUNC_6(VAR_18, VAR_21, VAR_22);

 out:
 return FUNC_0(VAR_25);
}
