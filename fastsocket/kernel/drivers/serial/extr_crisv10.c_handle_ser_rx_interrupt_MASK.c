
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame; int overrun; int parity; int brk; } ;
struct e100_serial {unsigned char* ioport; size_t line; unsigned long last_rx_active_usec; unsigned long last_rx_active; char break_detected_cnt; scalar_t__ errorcode; int char_time_usec; int * icmdadr; TYPE_1__ icount; int uses_dma_in; } ;
struct TYPE_4__ {int ser_ints_ok_cnt; int early_errors_cnt; } ;


 int FUNC_0 (size_t,char*,unsigned char) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_4 () ;
 int VAR_2 ;
 unsigned char FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 int FUNC_8 (struct e100_serial*,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (struct e100_serial*,unsigned char,int ) ;
 int VAR_16 ;
 int FUNC_10 (struct e100_serial*) ;
 struct e100_serial* FUNC_11 (struct e100_serial*) ;
 int VAR_17 ;
 void* VAR_18 ;
 int FUNC_12 (char*,...) ;
 int VAR_19 ;
 TYPE_2__* VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static struct e100_serial* FUNC_13(struct e100_serial *VAR_22)
{
 unsigned char VAR_23;





 if (!VAR_22->uses_dma_in) {
  return FUNC_11(VAR_22);
 }

 VAR_23 = VAR_22->ioport[VAR_4];
 if (VAR_23 & FUNC_5(VAR_6, VAR_21) ) {
  FUNC_1(FUNC_0(VAR_22->line, "XOFF detect\n", 0));
 }

 if (VAR_23 & VAR_7) {
  unsigned char VAR_24;

  VAR_22->last_rx_active_usec = FUNC_4();
  VAR_22->last_rx_active = VAR_18;



  VAR_24 = VAR_22->ioport[VAR_3];
  FUNC_2(FUNC_0(VAR_22->line, "ser_rx!  %c\n", VAR_24));
  FUNC_2(FUNC_0(VAR_22->line, "ser_rx err stat %02X\n", VAR_23));
  if (!VAR_24 && (VAR_23 & VAR_8)) {




   if (!VAR_22->break_detected_cnt) {
    FUNC_0(VAR_22->line, "#BRK start\n", 0);
   }
   if (VAR_23 & VAR_11) {







    FUNC_0(VAR_22->line, "# BL BRK\n", 0);
    VAR_22->errorcode = VAR_0;
   }
   VAR_22->break_detected_cnt++;
  } else {



   if (VAR_22->break_detected_cnt) {
    FUNC_0(VAR_22->line, "EBRK %i\n", VAR_22->break_detected_cnt);
    VAR_22->errorcode = VAR_0;
   } else {
    if (VAR_22->errorcode == VAR_0) {
     VAR_22->icount.brk++;
     FUNC_9(VAR_22, '\0', VAR_12);
    }

    if (VAR_23 & VAR_10) {
     VAR_22->icount.parity++;
     FUNC_9(VAR_22, VAR_24, VAR_15);
    } else if (VAR_23 & VAR_9) {
     VAR_22->icount.overrun++;
     FUNC_9(VAR_22, VAR_24, VAR_14);
    } else if (VAR_23 & VAR_8) {
     VAR_22->icount.frame++;
     FUNC_9(VAR_22, VAR_24, VAR_13);
    }

    VAR_22->errorcode = 0;
   }
   VAR_22->break_detected_cnt = 0;
   FUNC_0(VAR_22->line, "#iERR s d %04X\n",
             ((VAR_23 & VAR_7) << 8) | VAR_24);
  }
  FUNC_7(VAR_20[VAR_22->line].early_errors_cnt++);
 } else {
  unsigned long VAR_25 = FUNC_4();
  unsigned long VAR_26 = VAR_18;

  if (VAR_22->break_detected_cnt) {





   long VAR_27 =
     (VAR_26 - VAR_22->last_rx_active) * (1000000/VAR_2) +
     VAR_25 - VAR_22->last_rx_active_usec;
   if (VAR_27 < 2*VAR_22->char_time_usec) {
    FUNC_0(VAR_22->line, "FBRK %i\n", VAR_22->line);



    VAR_22->errorcode = VAR_1;
   } else {
    FUNC_0(VAR_22->line, "Not end of BRK (V)%i\n", VAR_22->line);
   }
   FUNC_0(VAR_22->line, "num brk %i\n", VAR_22->break_detected_cnt);
  }




  FUNC_10(VAR_22);
  FUNC_3(FUNC_0(VAR_22->line, "ser_rx OK %d\n", VAR_22->line));
  VAR_22->break_detected_cnt = 0;

  FUNC_7(VAR_20[VAR_22->line].ser_ints_ok_cnt++);
 }

 *VAR_22->icmdadr = FUNC_6(VAR_5, VAR_16, VAR_19);
 FUNC_8(VAR_22, "ser_int");
 return VAR_22;
}
