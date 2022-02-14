
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_15 ;
 int FUNC_6 (char*,...) ;
 int VAR_16 ;

void FUNC_7(void)
{
 FUNC_2();





 if (!VAR_1) {
  if (FUNC_0())
   VAR_5 = 1;
 }

 if ((VAR_13 & 0x03) == 0)

  return;

 if (VAR_15 < 228)
  VAR_15++;

 VAR_16 += VAR_0;

 if (VAR_5 > 0) {
  if (--VAR_5 == 0) {

   VAR_12 = FUNC_4();
   if (VAR_10 & 0x20) {
    if (VAR_11 & 0x20) {
     VAR_11 &= 0xdf;



    }
    else {
     VAR_14 &= 0xdf;



    }
    FUNC_1();
   }





  }
 }

 if (VAR_6 > 0) {
  if (--VAR_6 == 0) {
   if (VAR_10 & 0x10) {



    VAR_11 &= 0xef;
    FUNC_1();
   }





  }
 }

 if (VAR_7 > 0)
  if (--VAR_7 == 0) {
   VAR_11 &= 0xf7;
   if (VAR_10 & 0x08) {



    FUNC_1();
   }




  }

 if ((VAR_8[VAR_2] -= VAR_0) < 0 ) {
  VAR_8[VAR_2] += VAR_9[VAR_2];
  if (VAR_10 & 0x01) {
   VAR_11 &= 0xfe;
   FUNC_1();
  }
 }

 if ((VAR_8[VAR_3] -= VAR_0) < 0 ) {
  VAR_8[VAR_3] += VAR_9[VAR_3];
  if (VAR_10 & 0x02) {
   VAR_11 &= 0xfd;
   FUNC_1();
  }
 }

 if ((VAR_8[VAR_4] -= VAR_0) < 0 ) {
  VAR_8[VAR_4] += VAR_9[VAR_4];
  if (VAR_10 & 0x04) {
   VAR_11 &= 0xfb;
   FUNC_1();
  }
 }
}
