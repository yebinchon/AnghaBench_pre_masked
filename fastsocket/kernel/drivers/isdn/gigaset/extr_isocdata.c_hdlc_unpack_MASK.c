
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bas_bc_state* bas; } ;
struct bc_state {int inputstate; TYPE_1__ hw; } ;
struct bas_bc_state {unsigned int seqlen; unsigned int inbyte; unsigned int inbits; int aborts; int stolen0s; int shared0s; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char* VAR_3 ;
 int FUNC_0 (struct bc_state*) ;
 int FUNC_1 (struct bc_state*) ;
 int FUNC_2 (struct bc_state*,unsigned int) ;
 int FUNC_3 (unsigned int,struct bc_state*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6(unsigned char *VAR_4, unsigned VAR_5,
          struct bc_state *VAR_6)
{
 struct bas_bc_state *VAR_7 = VAR_6->hw.bas;
 int VAR_8;
 unsigned VAR_9, VAR_10, VAR_11;
 VAR_8 = VAR_6->inputstate;
 VAR_9 = VAR_7->seqlen;
 VAR_10 = VAR_7->inbyte;
 VAR_11 = VAR_7->inbits;






 while (VAR_5--) {
  unsigned char VAR_12 = *VAR_4++;
  unsigned char VAR_13 = VAR_3[VAR_12];
  unsigned VAR_14 = VAR_13 & 0x0f;
  unsigned VAR_15 = (VAR_13 >> 4) & 0x0f;

  VAR_9 += VAR_14;

  if (FUNC_5(VAR_8 & VAR_0)) {
   if (VAR_12 == VAR_2) {

    VAR_8 &= ~(VAR_0 | VAR_1);
    VAR_10 = 0;
    VAR_11 = 0;
   } else if (VAR_9 == 6 && VAR_15 != 7) {

    VAR_8 &= ~(VAR_0 | VAR_1);
    VAR_10 = VAR_12 >> (VAR_14 + 1);
    VAR_11 = 7 - VAR_14;
    if (VAR_15 >= 8) {

     VAR_11--;

     switch (VAR_12) {
     case 0xbe:
      VAR_10 = 0x3f;
      break;
     }
    }
   }

  } else if (FUNC_4(VAR_9 < 5 && VAR_15 < 7)) {

   VAR_10 |= VAR_12 << VAR_11;
   FUNC_3(VAR_10 & 0xff, VAR_6);
   VAR_8 |= VAR_1;
   VAR_10 >>= 8;

  } else if (FUNC_4(VAR_9 == 6 && VAR_11 == 7 - VAR_14 &&
      VAR_15 + 1 == VAR_11 &&
      !(VAR_8 & VAR_1))) {

  } else if (FUNC_5(VAR_9 > 6)) {

   VAR_7->aborts++;
   FUNC_1(VAR_6);
   VAR_8 |= VAR_0;
  } else if (VAR_9 == 6) {

   if (VAR_11 > 7 - VAR_14) {
    FUNC_2(VAR_6, VAR_11 + VAR_14 - 7);
    VAR_8 &= ~VAR_1;
   } else {
    if (VAR_11 < 7 - VAR_14)
     VAR_7->stolen0s ++;
    if (VAR_8 & VAR_1) {
     FUNC_0(VAR_6);
     VAR_8 &= ~VAR_1;
    }
   }

   if (VAR_12 == VAR_2) {

    VAR_7->shared0s ++;
    VAR_11 = 0;
    VAR_10 = 0;
   } else if (VAR_15 != 7) {

    VAR_10 = VAR_12 >> (VAR_14 + 1);
    VAR_11 = 7 - VAR_14;
    if (VAR_15 >= 8) {

     VAR_11--;

     switch (VAR_12) {
     case 0xbe:
      VAR_10 = 0x3f;
      break;
     }
    }
   } else {

    VAR_7->aborts++;
    VAR_8 |= VAR_0;
   }
  } else {

   if (VAR_12 == VAR_2) {

    if (VAR_9 == 5)
     VAR_7->stolen0s++;
    if (VAR_11) {
     FUNC_2(VAR_6, VAR_11);
     VAR_11 = 0;
     VAR_10 = 0;
    } else if (VAR_8 & VAR_1)
     FUNC_0(VAR_6);
    VAR_8 &= ~VAR_1;
   } else if (VAR_15 == 7) {

    VAR_7->aborts++;
    FUNC_1(VAR_6);
    VAR_8 |= VAR_0;
   } else {

    if (VAR_15 < 7) {

     unsigned char VAR_16 = (1 << VAR_14) - 1;
     VAR_12 = (VAR_12 & VAR_16) | ((VAR_12 & ~VAR_16) >> 1);
     VAR_10 |= VAR_12 << VAR_11;
     VAR_11 += 7;
    } else if (VAR_9 < 5) {


     switch (VAR_12) {
     case 0xbe:
      VAR_12 = 0x7e;
      break;
     }
     VAR_10 |= VAR_12 << VAR_11;
     VAR_11 += 7;
    } else {


     switch (VAR_12) {
     case 0x7d:
      VAR_12 = 0x3f;
      break;
     case 0xbe:
      VAR_12 = 0x3f;
      break;
     case 0x3e:
      VAR_12 = 0x1f;
      break;
     case 0x7c:
      VAR_12 = 0x3e;
      break;
     }
     VAR_10 |= VAR_12 << VAR_11;
     VAR_11 += 6;
    }
    if (VAR_11 >= 8) {
     VAR_11 -= 8;
     FUNC_3(VAR_10 & 0xff, VAR_6);
     VAR_8 |= VAR_1;
     VAR_10 >>= 8;
    }
   }
  }
  VAR_9 = VAR_15 & 7;
 }


 VAR_6->inputstate = VAR_8;
 VAR_7->seqlen = VAR_9;
 VAR_7->inbyte = VAR_10;
 VAR_7->inbits = VAR_11;
}
