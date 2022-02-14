
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
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 unsigned int VAR_19 ;
 size_t VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 unsigned long* VAR_28 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(u64 VAR_29[], int VAR_30,
          unsigned int VAR_31[], unsigned long VAR_32[])
{
 unsigned long VAR_33 = 0;
 unsigned long VAR_34 = VAR_8 | VAR_9;
 unsigned int VAR_35, VAR_36, VAR_37, VAR_38;
 unsigned int VAR_39, VAR_40;
 int VAR_41, VAR_42, VAR_43, VAR_44;
 unsigned int VAR_45 = 0;
 unsigned int VAR_46[2];
 unsigned char VAR_47[4];
 unsigned char VAR_48[16];
 int VAR_49;

 if (VAR_30 > 6)
  return -1;


 VAR_46[0] = VAR_46[1] = 0;
 FUNC_1(VAR_47, 0, sizeof(VAR_47));
 FUNC_1(VAR_48, 0, sizeof(VAR_48));
 for (VAR_41 = 0; VAR_41 < VAR_30; ++VAR_41) {
  VAR_35 = (VAR_29[VAR_41] >> VAR_25) & VAR_24;
  if (VAR_35) {
   if (VAR_35 > 6)
    return -1;
   if (VAR_45 & (1 << (VAR_35 - 1)))
    return -1;
   VAR_45 |= 1 << (VAR_35 - 1);

   if (VAR_35 <= 4)
    ++VAR_46[(VAR_35 - 1) >> 1];
  }
  if (VAR_29[VAR_41] & VAR_10) {
   VAR_36 = (VAR_29[VAR_41] >> VAR_27) & VAR_26;
   VAR_37 = (VAR_29[VAR_41] >> VAR_12) & VAR_11;
   if (VAR_36 > VAR_21)
    return -1;
   if (VAR_36 == VAR_19)
    VAR_36 = VAR_18;
   if (VAR_37 >= 4) {
    if (VAR_36 != VAR_22)
     return -1;
    ++VAR_36;
    VAR_37 &= 3;
   }
   if (!VAR_35)
    ++VAR_46[VAR_37 & 1];
   if (VAR_47[VAR_37] && VAR_47[VAR_37] != VAR_36)
    return -1;
   VAR_47[VAR_37] = VAR_36;
   VAR_48[VAR_36] = 1;
  }
 }
 if (VAR_46[0] > 2 || VAR_46[1] > 2)
  return -1;







 if (VAR_48[VAR_18] &
     (VAR_48[VAR_13] | VAR_48[VAR_17] | VAR_48[VAR_20])) {
  VAR_48[VAR_19] = 1;
  VAR_48[VAR_18] = 0;
 }

 VAR_49 = 0;
 for (VAR_41 = VAR_13; VAR_41 <= VAR_20; ++VAR_41) {
  if (!VAR_48[VAR_41])
   continue;
  if (VAR_49++)
   return -1;
  VAR_33 |= (unsigned long)VAR_41 << VAR_4;
 }
 VAR_49 = 0;
 for (; VAR_41 <= VAR_14; ++VAR_41) {
  if (!VAR_48[VAR_41])
   continue;
  if (VAR_49++)
   return -1;
  VAR_33 |= (unsigned long)(VAR_41 & 3) << VAR_5;
 }
 if (VAR_49 > 1)
  return -1;


 for (VAR_37 = 0; VAR_37 < 4; ++VAR_37) {
  VAR_36 = VAR_47[VAR_37];
  if (!VAR_36)
   continue;
  if (VAR_36 == VAR_18 && VAR_48[VAR_19]) {

   VAR_36 = VAR_19;
  } else if (VAR_36 == VAR_22 + 1) {

   VAR_33 |= 1ul << (VAR_6 + 3 - VAR_37);
  }
  VAR_39 = VAR_36 >> 2;
  VAR_33 |= (unsigned long)VAR_39
   << (VAR_3 - 2 * VAR_37);
 }


 for (VAR_41 = 0; VAR_41 < VAR_30; ++VAR_41) {
  VAR_35 = (VAR_29[VAR_41] >> VAR_25) & VAR_24;
  VAR_36 = (VAR_29[VAR_41] >> VAR_27) & VAR_26;
  VAR_37 = (VAR_29[VAR_41] >> VAR_12) & VAR_11;
  VAR_38 = VAR_29[VAR_41] & VAR_23;
  VAR_42 = VAR_29[VAR_41] & VAR_10;
  if (!VAR_35) {

   for (VAR_35 = 0; VAR_35 < 4; ++VAR_35) {
    if (VAR_45 & (1 << VAR_35))
     continue;
    VAR_40 = (VAR_35 >> 1) & 1;
    if (VAR_42) {
     if (VAR_40 == (VAR_37 & 1))
      break;
    } else if (VAR_46[VAR_40] < 2) {
     ++VAR_46[VAR_40];
     break;
    }
   }
   VAR_45 |= 1 << VAR_35;
  } else if (VAR_35 <= 4) {

   --VAR_35;
   if ((VAR_38 == 8 || VAR_38 == 0x10) && VAR_42 && (VAR_37 & 2))

    VAR_33 |= 1ul << (VAR_2 - VAR_35);
  } else {

   --VAR_35;
  }
  if (VAR_42 && VAR_36 == VAR_14) {
   VAR_43 = VAR_38 & 7;
   VAR_44 = (VAR_29[VAR_41] >> VAR_16) & VAR_15;
   VAR_33 |= (unsigned long)VAR_44 << VAR_28[VAR_43];
  }
  if (FUNC_2(VAR_29[VAR_41]))
   VAR_34 |= VAR_7;
  if (VAR_35 <= 3)
   VAR_33 |= VAR_38 << FUNC_0(VAR_35);
  VAR_31[VAR_41] = VAR_35;
 }


 VAR_32[0] = 0;
 if (VAR_45 & 1)
  VAR_32[0] = VAR_0;
 if (VAR_45 & 0x3e)
  VAR_32[0] |= VAR_1;
 VAR_32[1] = VAR_33;
 VAR_32[2] = VAR_34;
 return 0;
}
