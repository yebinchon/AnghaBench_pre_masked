
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int U8 ;
typedef unsigned int U32 ;
struct TYPE_2__ {int EnableState; unsigned int DisabledEvents; unsigned int LastTxTimeStamp; int RecursionCnt; scalar_t__ PacketCount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int*,int) ;
 int FUNC_4 (int ,unsigned int*,int) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(U8* VAR_4, U8* VAR_5, unsigned int VAR_6) {
  unsigned int VAR_7;
  U32 VAR_8;
  U32 VAR_9;

  int VAR_10;



  FUNC_6();







  if (VAR_3.EnableState == 1) {
    goto Send;
  }
  if (VAR_3.EnableState == 0) {
    goto SendDone;
  }





  if (VAR_3.EnableState == 2) {
    FUNC_10();
    if (VAR_3.EnableState != 1) {
      goto SendDone;
    }
  }
Send:




  if (VAR_6 < 32) {
    if (VAR_3.DisabledEvents & ((U32)1u << VAR_6)) {
      goto SendDone;
    }
  }





  if (VAR_6 < 24) {
    *--VAR_4 = VAR_6;
  } else {
    VAR_7 = VAR_5 - VAR_4;
    if (VAR_7 > 127) {
      *--VAR_4 = (VAR_7 >> 7);
      *--VAR_4 = VAR_7 | 0x80;
    } else {
      *--VAR_4 = VAR_7;
    }
    if (VAR_6 > 127) {
      *--VAR_4 = (VAR_6 >> 7);
      *--VAR_4 = VAR_6 | 0x80;
    } else {
      *--VAR_4 = VAR_6;
    }
  }



  VAR_8 = FUNC_5();
  VAR_9 = VAR_8 - VAR_3.LastTxTimeStamp;
  FUNC_1(VAR_9);
  FUNC_0(VAR_5, VAR_9);
  VAR_10 = FUNC_3(VAR_1, VAR_4, VAR_5 - VAR_4);
  if (VAR_10) {
    VAR_3.LastTxTimeStamp = VAR_8;
  } else {
    VAR_3.EnableState++;
  }
SendDone:





  if (FUNC_2(VAR_0)) {
    if (VAR_3.RecursionCnt == 0) {
      VAR_3.RecursionCnt = 1;
      FUNC_8();
      VAR_3.RecursionCnt = 0;
    }
  }



  FUNC_7();

}
