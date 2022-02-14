
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ULONG ;
typedef int UBYTE ;
struct TYPE_2__ {scalar_t__ nDigitized; } ;
typedef int SWORD ;


 void* VAR_0 ;
 size_t* VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 void* VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 scalar_t__* VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int* VAR_20 ;
 int* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 size_t VAR_29 ;
 int VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 int VAR_33 ;
 size_t VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 size_t* VAR_38 ;
 int* VAR_39 ;
 size_t FUNC_0 (int*) ;
 int* VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_1 (int*,size_t) ;
 int* VAR_43 ;
 scalar_t__* VAR_44 ;
 TYPE_1__ VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int* VAR_48 ;
 int* VAR_49 ;
 void* VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 scalar_t__* VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;

__attribute__((used)) static void FUNC_2(void *VAR_56, int VAR_57)
{
 register UBYTE *VAR_58 = (UBYTE *) VAR_56;
 register int VAR_59 = VAR_57;

 register ULONG *VAR_60;
 register UBYTE *VAR_61;
 register ULONG VAR_62;
 register UBYTE VAR_63;






 register UBYTE VAR_64;




 register UBYTE *VAR_65;
 register UBYTE VAR_66;
 register UBYTE VAR_67;
 register UBYTE VAR_68;
 register UBYTE *VAR_69;





 VAR_61 = ((UBYTE *) (&VAR_40[0]) + 1);



 VAR_65 = VAR_5;
 VAR_69 = VAR_48;




 VAR_64 = VAR_12;







 VAR_68 = VAR_4;
 do {
  if (*VAR_65++)
   VAR_64 += *VAR_69;
  VAR_69++;

  if (*VAR_65++)
   VAR_64 += *VAR_69;
  VAR_69++;

  if (*VAR_65++)
   VAR_64 += *VAR_69;
  VAR_69++;

  if (*VAR_65++)
   VAR_64 += *VAR_69;
  VAR_69++;
  VAR_68--;
 } while (VAR_68);






 while (VAR_59) {







  VAR_63 = VAR_36;
  VAR_62 = FUNC_0(VAR_61);

  VAR_60 = VAR_1;

  VAR_68 = 0;
  do {

   if (*VAR_60 <= VAR_62) {
    VAR_62 = *VAR_60;
    VAR_63 = VAR_24 + (VAR_68 << 2);
   }
   VAR_60++;
   if (*VAR_60 <= VAR_62) {
    VAR_62 = *VAR_60;
    VAR_63 = VAR_25 + (VAR_68 << 2);
   }
   VAR_60++;
   if (*VAR_60 <= VAR_62) {
    VAR_62 = *VAR_60;
    VAR_63 = VAR_26 + (VAR_68 << 2);
   }
   VAR_60++;
   if (*VAR_60 <= VAR_62) {
    VAR_62 = *VAR_60;
    VAR_63 = VAR_27 + (VAR_68 << 2);
   }
   VAR_60++;

   VAR_68++;
  } while (VAR_68 < VAR_4);


  if (VAR_63 != VAR_36) {


   VAR_68 = VAR_4;
   do {


    VAR_60--;
    *VAR_60 -= VAR_62;
    VAR_60--;
    *VAR_60 -= VAR_62;
    VAR_60--;
    *VAR_60 -= VAR_62;
    VAR_60--;
    *VAR_60 -= VAR_62;

    VAR_68--;
   } while (VAR_68);


   FUNC_1(VAR_61, FUNC_0(VAR_61) - VAR_62);






   VAR_7 = (VAR_7 + VAR_62) % VAR_31;
   VAR_8 = (VAR_8 + VAR_62) % VAR_32;
   VAR_9 = (VAR_9 + VAR_62) % VAR_34;
   VAR_6 = (VAR_6 + VAR_62) % VAR_29;


   VAR_1[VAR_63] += VAR_2[VAR_63];


   VAR_66 = VAR_20[VAR_63];


   VAR_65 = &VAR_5[VAR_63];


   VAR_67 = VAR_3;






   if (!(VAR_66 & VAR_37)) {


    if ((VAR_66 & VAR_28) || VAR_44[VAR_8]) {

     if (VAR_66 & VAR_35) {

      VAR_67 = VAR_42;
     }

     else if (VAR_66 & VAR_30) {

      VAR_67 = (VAR_43[VAR_7] == !(*VAR_65));
     }
     else {

      if (VAR_21[VAR_63 >> 2] & VAR_33) {

       VAR_67 = ((VAR_39[VAR_9] & 1) == !(*VAR_65));
      }
      else {

       VAR_67 = (((VAR_38[VAR_6 >> 3] >> (VAR_6 & 7)) & 1) == !(*VAR_65));
      }
     }
    }
   }


   if ( VAR_21[VAR_63 >> 2] & VAR_22) {

    if ((VAR_63 & 0x03) == VAR_26) {

     if (VAR_5[VAR_63 & 0xfd]) {

      VAR_5[VAR_63 & 0xfd] = 0;
       VAR_64 -= VAR_48[VAR_63 & 0xfd];
     }
    }
   }


   if ( VAR_21[VAR_63 >> 2] & VAR_23) {

    if ((VAR_63 & 0x03) == VAR_27) {

     if (VAR_5[VAR_63 & 0xfd]) {

      VAR_5[VAR_63 & 0xfd] = 0;
       VAR_64 -= VAR_48[VAR_63 & 0xfd];
     }
    }
   }


   if (VAR_67) {
    if (*VAR_65) {
      VAR_64 -= VAR_48[VAR_63];


     *VAR_65 = 0;
    }
    else {

     *VAR_65 = 1;
      VAR_64 += VAR_48[VAR_63];
    }
   }
  }
  else {



   int VAR_70;
   VAR_70 = VAR_64;
   *VAR_58++ = (UBYTE) VAR_70;
   *VAR_40 += VAR_41;


   VAR_59--;







  }
 }
}
