
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unituse ;
typedef int u64 ;
typedef int busbyte ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 unsigned int VAR_17 ;
 size_t VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned long* VAR_26 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(u64 VAR_27[], int VAR_28,
    unsigned int VAR_29[], unsigned long VAR_30[])
{
 unsigned long VAR_31 = 0;
 unsigned long VAR_32 = 0;
 unsigned int VAR_33, VAR_34, VAR_35, VAR_36;
 unsigned int VAR_37;
 int VAR_38, VAR_39, VAR_40, VAR_41;
 unsigned int VAR_42 = 0;
 unsigned char VAR_43[4];
 unsigned char VAR_44[16];
 int VAR_45;

 if (VAR_28 > 6)
  return -1;


 FUNC_1(VAR_43, 0, sizeof(VAR_43));
 FUNC_1(VAR_44, 0, sizeof(VAR_44));
 for (VAR_38 = 0; VAR_38 < VAR_28; ++VAR_38) {
  VAR_33 = (VAR_27[VAR_38] >> VAR_23) & VAR_22;
  if (VAR_33) {
   if (VAR_33 > 6)
    return -1;
   if (VAR_42 & (1 << (VAR_33 - 1)))
    return -1;
   VAR_42 |= 1 << (VAR_33 - 1);
  }
  if (VAR_27[VAR_38] & VAR_8) {
   VAR_34 = (VAR_27[VAR_38] >> VAR_25) & VAR_24;
   VAR_35 = (VAR_27[VAR_38] >> VAR_10) & VAR_9;
   if (VAR_34 > VAR_19)
    return -1;
   if (VAR_34 == VAR_17)
    VAR_34 = VAR_16;
   if (VAR_35 >= 4) {
    if (VAR_34 != VAR_20)
     return -1;
    ++VAR_34;
    VAR_35 &= 3;
   }
   if (VAR_43[VAR_35] && VAR_43[VAR_35] != VAR_34)
    return -1;
   VAR_43[VAR_35] = VAR_34;
   VAR_44[VAR_34] = 1;
  }
 }







 if (VAR_44[VAR_16] &
     (VAR_44[VAR_11] | VAR_44[VAR_15] | VAR_44[VAR_18])) {
  VAR_44[VAR_17] = 1;
  VAR_44[VAR_16] = 0;
 }

 VAR_45 = 0;
 for (VAR_38 = VAR_11; VAR_38 <= VAR_18; ++VAR_38) {
  if (!VAR_44[VAR_38])
   continue;
  if (VAR_45++)
   return -1;
  VAR_31 |= (unsigned long)VAR_38 << VAR_4;
 }
 VAR_45 = 0;
 for (; VAR_38 <= VAR_12; ++VAR_38) {
  if (!VAR_44[VAR_38])
   continue;
  if (VAR_45++)
   return -1;
  VAR_31 |= (unsigned long)(VAR_38 & 3) << VAR_5;
 }
 if (VAR_45 > 1)
  return -1;


 for (VAR_35 = 0; VAR_35 < 4; ++VAR_35) {
  VAR_34 = VAR_43[VAR_35];
  if (!VAR_34)
   continue;
  if (VAR_34 == VAR_16 && VAR_44[VAR_17]) {

   VAR_34 = VAR_17;
  } else if (VAR_34 == VAR_20 + 1) {

   VAR_31 |= 1ul << (VAR_6 + 3 - VAR_35);
  }
  VAR_37 = VAR_34 >> 2;
  VAR_31 |= (unsigned long)VAR_37
   << (VAR_3 - 2 * VAR_35);
 }


 for (VAR_38 = 0; VAR_38 < VAR_28; ++VAR_38) {
  VAR_33 = (VAR_27[VAR_38] >> VAR_23) & VAR_22;
  VAR_34 = (VAR_27[VAR_38] >> VAR_25) & VAR_24;
  VAR_35 = (VAR_27[VAR_38] >> VAR_10) & VAR_9;
  VAR_36 = VAR_27[VAR_38] & VAR_21;
  VAR_39 = VAR_27[VAR_38] & VAR_8;
  if (!VAR_33) {

   for (VAR_33 = 0; VAR_33 < 4; ++VAR_33) {
    if (!(VAR_42 & (1 << VAR_33)))
     break;
   }
   if (VAR_33 >= 4)
    return -1;
   VAR_42 |= 1 << VAR_33;
  } else if (VAR_33 <= 4) {

   --VAR_33;
   if (VAR_39 && (VAR_35 & 2) &&
       (VAR_36 == 8 || VAR_36 == 0x10 || VAR_36 == 0x28))

    VAR_31 |= 1ul << (VAR_2 - VAR_33);
  } else {

   --VAR_33;
  }
  if (VAR_39 && VAR_34 == VAR_12) {
   VAR_40 = VAR_36 & 7;
   VAR_41 = (VAR_27[VAR_38] >> VAR_14) & VAR_13;
   VAR_31 |= (unsigned long)VAR_41 << VAR_26[VAR_40];
  }
  if (FUNC_2(VAR_27[VAR_38]))
   VAR_32 |= VAR_7;
  if ((VAR_36 & 0x58) == 0x40 && (VAR_35 & 1) != ((VAR_33 >> 1) & 1))

   VAR_36 |= 0x10;
  if (VAR_33 <= 3)
   VAR_31 |= VAR_36 << FUNC_0(VAR_33);
  VAR_29[VAR_38] = VAR_33;
 }


 VAR_30[0] = 0;
 if (VAR_42 & 1)
  VAR_30[0] = VAR_0;
 if (VAR_42 & 0x3e)
  VAR_30[0] |= VAR_1;
 VAR_30[1] = VAR_31;
 VAR_30[2] = VAR_32;
 return 0;
}
