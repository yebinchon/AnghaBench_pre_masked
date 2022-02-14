
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int high; } ;
typedef TYPE_2__ floatx80 ;
typedef int float64 ;
typedef int float32 ;
struct TYPE_15__ {int* fType; TYPE_1__* fpreg; } ;
struct TYPE_13__ {int fSingle; int fDouble; TYPE_2__ fExtended; } ;
typedef TYPE_3__ FPA11 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int const) ;
 TYPE_3__* FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 TYPE_2__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int,int) ;
 TYPE_2__ FUNC_10 (int) ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_2__,TYPE_2__) ;
 scalar_t__ FUNC_13 (TYPE_2__) ;
 scalar_t__ FUNC_14 (TYPE_2__,TYPE_2__) ;
 int FUNC_15 (unsigned int) ;
 TYPE_2__ FUNC_16 (unsigned int) ;
 unsigned int FUNC_17 (unsigned int const) ;
 unsigned int FUNC_18 (unsigned int const) ;
 int FUNC_19 (unsigned int) ;
 int FUNC_20 () ;



 int FUNC_21 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_22(const unsigned int VAR_6)
{
 FPA11 *VAR_7 = FUNC_1();
 unsigned int VAR_8 = FUNC_18(VAR_6), VAR_9 = FUNC_17(VAR_6);
 int VAR_10 = VAR_6 & 0x400000;
 int VAR_11 = VAR_6 & 0x200000;
 unsigned int VAR_12 = 0;
 if (FUNC_0(VAR_6)) {


  if (VAR_7->fType[VAR_8] == 128) {
   float32 VAR_13 = FUNC_19(VAR_9);
   float32 VAR_14 = VAR_7->fpreg[VAR_8].fSingle;

   if (FUNC_3(VAR_14))
    goto unordered;

   if (VAR_11)
    VAR_13 ^= 0x80000000;


   if (FUNC_4(VAR_14, VAR_13))
    VAR_12 |= VAR_2;


   if (FUNC_2(VAR_14, VAR_13))
    VAR_12 |= VAR_4;


   if (FUNC_4(VAR_13, VAR_14))
    VAR_12 |= VAR_1;
  } else {
   float64 VAR_15 = FUNC_15(VAR_9);
   float64 VAR_16 = VAR_7->fpreg[VAR_8].fDouble;

   if (FUNC_8(VAR_16))
    goto unordered;

   if (VAR_11)
    VAR_15 ^= 0x8000000000000000ULL;


   if (FUNC_9(VAR_16, VAR_15))
    VAR_12 |= VAR_2;


   if (FUNC_7(VAR_16, VAR_15))
    VAR_12 |= VAR_4;


   if (FUNC_9(VAR_15, VAR_16))
    VAR_12 |= VAR_1;
  }
 } else {

  if (VAR_7->fType[VAR_8] == 128
      && VAR_7->fType[VAR_9] == 128) {
   float32 VAR_17 = VAR_7->fpreg[VAR_9].fSingle;
   float32 VAR_18 = VAR_7->fpreg[VAR_8].fSingle;

   if (FUNC_3(VAR_18)
       || FUNC_3(VAR_17))
    goto unordered;

   if (VAR_11)
    VAR_17 ^= 0x80000000;


   if (FUNC_4(VAR_18, VAR_17))
    VAR_12 |= VAR_2;


   if (FUNC_2(VAR_18, VAR_17))
    VAR_12 |= VAR_4;


   if (FUNC_4(VAR_17, VAR_18))
    VAR_12 |= VAR_1;
  } else {

   float64 VAR_19, VAR_20;

   VAR_19 = (VAR_7->fType[VAR_9] == 128) ?
       FUNC_5(VAR_7->fpreg[VAR_9].fSingle)
       : VAR_7->fpreg[VAR_9].fDouble;

   VAR_20 = (VAR_7->fType[VAR_8] == 128) ?
       FUNC_5(VAR_7->fpreg[VAR_8].fSingle)
       : VAR_7->fpreg[VAR_8].fDouble;

   if (FUNC_8(VAR_20)
       || FUNC_8(VAR_19))
    goto unordered;

   if (VAR_11)
    VAR_19 ^= 0x8000000000000000ULL;


   if (FUNC_9(VAR_20, VAR_19))
    VAR_12 |= VAR_2;


   if (FUNC_7(VAR_20, VAR_19))
    VAR_12 |= VAR_4;


   if (FUNC_9(VAR_19, VAR_20))
    VAR_12 |= VAR_1;
  }
 }



 FUNC_21(VAR_12);

 return 1;

      unordered:





 VAR_12 |= VAR_3;
 VAR_12 &= ~(VAR_4 | VAR_2);

 if (VAR_0 & FUNC_20())
  VAR_12 |= VAR_1;

 if (VAR_10)
  FUNC_11(VAR_5);

 FUNC_21(VAR_12);
 return 1;
}
