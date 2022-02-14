
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfin_twi_iface {int writeNum; int* transPtr; scalar_t__ cur_mode; int manual_stop; int cur_msg; int msg_num; int readNum; int result; int complete; TYPE_1__* pmsg; int read_write; } ;
struct TYPE_2__ {int flags; int* buf; int len; int addr; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned short VAR_15 ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct bfin_twi_iface*) ;
 int FUNC_3 (struct bfin_twi_iface*) ;
 unsigned short FUNC_4 (struct bfin_twi_iface*) ;
 int FUNC_5 (struct bfin_twi_iface*) ;
 int FUNC_6 (struct bfin_twi_iface*,int ) ;
 int FUNC_7 (struct bfin_twi_iface*,unsigned short) ;
 int FUNC_8 (struct bfin_twi_iface*,int ) ;
 int FUNC_9 (struct bfin_twi_iface*,int) ;
 int FUNC_10 (struct bfin_twi_iface*,int) ;
 int FUNC_11 (struct bfin_twi_iface*,int ) ;

__attribute__((used)) static void FUNC_12(struct bfin_twi_iface *VAR_16)
{
 unsigned short VAR_17 = FUNC_2(VAR_16);
 unsigned short VAR_18 = FUNC_4(VAR_16);

 if (VAR_17 & VAR_15) {

  if (VAR_16->writeNum > 0) {
   FUNC_11(VAR_16, *(VAR_16->transPtr++));
   VAR_16->writeNum--;
  }



  else if (VAR_16->cur_mode == VAR_12)
   FUNC_9(VAR_16,
    FUNC_3(VAR_16) | VAR_7 | VAR_10);
  else if (VAR_16->manual_stop)
   FUNC_9(VAR_16,
    FUNC_3(VAR_16) | VAR_11);
  else if (VAR_16->cur_mode == VAR_13 &&
           VAR_16->cur_msg + 1 < VAR_16->msg_num) {
   if (VAR_16->pmsg[VAR_16->cur_msg + 1].flags & VAR_3)
    FUNC_9(VAR_16,
     FUNC_3(VAR_16) | VAR_10 | VAR_7);
   else
    FUNC_9(VAR_16,
     (FUNC_3(VAR_16) | VAR_10) & ~VAR_7);
  }
  FUNC_0();

  FUNC_7(VAR_16, VAR_15);
  FUNC_0();
 }
 if (VAR_17 & VAR_9) {
  if (VAR_16->readNum > 0) {

   *(VAR_16->transPtr) = FUNC_5(VAR_16);
   if (VAR_16->cur_mode == VAR_12) {



    VAR_16->cur_mode = VAR_14;



    if (VAR_16->readNum == 1 && VAR_16->manual_stop)
     VAR_16->readNum = *VAR_16->transPtr + 1;
   }
   VAR_16->transPtr++;
   VAR_16->readNum--;
  } else if (VAR_16->manual_stop) {
   FUNC_9(VAR_16,
    FUNC_3(VAR_16) | VAR_11);
   FUNC_0();
  } else if (VAR_16->cur_mode == VAR_13 &&
             VAR_16->cur_msg + 1 < VAR_16->msg_num) {
   if (VAR_16->pmsg[VAR_16->cur_msg + 1].flags & VAR_3)
    FUNC_9(VAR_16,
     FUNC_3(VAR_16) | VAR_10 | VAR_7);
   else
    FUNC_9(VAR_16,
     (FUNC_3(VAR_16) | VAR_10) & ~VAR_7);
   FUNC_0();
  }

  FUNC_7(VAR_16, VAR_9);
  FUNC_0();
 }
 if (VAR_17 & VAR_8) {
  FUNC_7(VAR_16, VAR_8);
  FUNC_6(VAR_16, 0);
  FUNC_10(VAR_16, 0x3e);
  FUNC_9(VAR_16, 0);
  FUNC_0();
  VAR_16->result = -VAR_2;



  if (VAR_17 & VAR_6) {
   FUNC_7(VAR_16, VAR_6);
   FUNC_6(VAR_16, 0);
   FUNC_9(VAR_16, 0);
   FUNC_0();



   if (VAR_16->writeNum == 0 && (VAR_18 & VAR_1))
    VAR_16->result = 1;



   else if (!(VAR_18 & VAR_0))
    VAR_16->result = 0;
  }
  FUNC_1(&VAR_16->complete);
  return;
 }
 if (VAR_17 & VAR_6) {
  FUNC_7(VAR_16, VAR_6);
  FUNC_0();
  if (VAR_16->cur_mode == VAR_12) {
   if (VAR_16->readNum == 0) {



    VAR_16->readNum = 1;
    VAR_16->manual_stop = 1;
    FUNC_9(VAR_16,
     FUNC_3(VAR_16) | (0xff << 6));
   } else {



    FUNC_9(VAR_16,
     (FUNC_3(VAR_16) &
     (~(0xff << 6))) |
     (VAR_16->readNum << 6));
   }

   FUNC_9(VAR_16,
    FUNC_3(VAR_16) & ~VAR_10);
   FUNC_0();
  } else if (VAR_16->cur_mode == VAR_13 &&
    VAR_16->cur_msg+1 < VAR_16->msg_num) {
   VAR_16->cur_msg++;
   VAR_16->transPtr = VAR_16->pmsg[VAR_16->cur_msg].buf;
   VAR_16->writeNum = VAR_16->readNum =
    VAR_16->pmsg[VAR_16->cur_msg].len;

   FUNC_8(VAR_16,
    VAR_16->pmsg[VAR_16->cur_msg].addr);
   if (VAR_16->pmsg[VAR_16->cur_msg].flags & VAR_3)
    VAR_16->read_write = VAR_4;
   else {
    VAR_16->read_write = VAR_5;

    if (VAR_16->writeNum > 0) {
     FUNC_11(VAR_16,
      *(VAR_16->transPtr++));
     VAR_16->writeNum--;
     FUNC_0();
    }
   }

   if (VAR_16->pmsg[VAR_16->cur_msg].len <= 255)
     FUNC_9(VAR_16,
     (FUNC_3(VAR_16) &
     (~(0xff << 6))) |
    (VAR_16->pmsg[VAR_16->cur_msg].len << 6));
   else {
    FUNC_9(VAR_16,
     (FUNC_3(VAR_16) |
     (0xff << 6)));
    VAR_16->manual_stop = 1;
   }

   FUNC_9(VAR_16,
    FUNC_3(VAR_16) & ~VAR_10);
   FUNC_0();
  } else {
   VAR_16->result = 1;
   FUNC_6(VAR_16, 0);
   FUNC_9(VAR_16, 0);
   FUNC_0();
   FUNC_1(&VAR_16->complete);
  }
 }
}
