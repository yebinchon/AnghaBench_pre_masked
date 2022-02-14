
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tlbsize; } ;
struct TYPE_3__ {int tlbsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_14 ;
 int FUNC_3 (char*,...) ;
 unsigned long FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 unsigned long FUNC_7 () ;
 int FUNC_8 (int) ;
 scalar_t__** VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(void)
{
 int VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20;
 unsigned long VAR_21;


 for (VAR_19=0; VAR_19<VAR_1; VAR_19++) {
     for(VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  VAR_15[VAR_19][VAR_17] = 0;
     }
 }
 VAR_20 = FUNC_4();

 if ((VAR_19 = ((VAR_20 & VAR_5)
   >> VAR_6) + 1) > 1) {

     if ((VAR_20 & VAR_7) && !VAR_14) {






  if ((VAR_18 = ((VAR_20 & VAR_3)
    >> VAR_4)) == 0) {






      FUNC_8(1);

      FUNC_11(VAR_11);
      FUNC_2();

      for (VAR_17=0; VAR_17 < VAR_19; VAR_17++) {
       FUNC_10(VAR_17);





   FUNC_9(
    FUNC_5() & ~ VAR_9 );
   FUNC_2();



   if (((FUNC_6() & VAR_2) >> 7) == 1) {
    VAR_21 = FUNC_7();
    VAR_18 += ((VAR_21 >> 25) & 0x3f) + 1;
   }


   FUNC_9(
    FUNC_5() | VAR_9 );
   FUNC_2();
      }
  }
  FUNC_9(FUNC_5() | VAR_8);
  FUNC_0();
  if (VAR_18 > 64)
   VAR_18 = 64;
  VAR_12[0].tlbsize = VAR_13.tlbsize = VAR_18;
  VAR_16 |= VAR_10;
  FUNC_1();

  FUNC_3("TLB of %d entry pairs shared by %d VPEs\n",
   VAR_18, VAR_19);
     } else {
  FUNC_3("WARNING: TLB Not Sharable on SMTC Boot!\n");
     }
 }
}
