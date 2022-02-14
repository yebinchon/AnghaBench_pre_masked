
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unituse ;
typedef unsigned int u64 ;
typedef int busbyte ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 unsigned long long* VAR_24 ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(u64 VAR_25[], int VAR_26,
      unsigned int VAR_27[], unsigned long VAR_28[])
{
 unsigned long VAR_29 = 0, VAR_30 = 0, VAR_31 = 0;
 unsigned int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 unsigned int VAR_37, VAR_38;
 unsigned int VAR_39 = 0;
 unsigned int VAR_40[2];
 unsigned char VAR_41[4];
 unsigned char VAR_42[16];
 unsigned int VAR_43 = 0;
 int VAR_44;

 if (VAR_26 > 8)
  return -1;


 VAR_40[0] = VAR_40[1] = 0;
 FUNC_0(VAR_41, 0, sizeof(VAR_41));
 FUNC_0(VAR_42, 0, sizeof(VAR_42));
 for (VAR_44 = 0; VAR_44 < VAR_26; ++VAR_44) {
  VAR_32 = (VAR_25[VAR_44] >> VAR_21) & VAR_20;
  if (VAR_32) {
   if (VAR_39 & (1 << (VAR_32 - 1)))
    return -1;
   VAR_39 |= 1 << (VAR_32 - 1);

   ++VAR_40[((VAR_32 - 1) >> 1) & 1];
  }
  VAR_33 = (VAR_25[VAR_44] >> VAR_23) & VAR_22;
  VAR_34 = (VAR_25[VAR_44] >> VAR_16) & VAR_15;
  VAR_36 = (VAR_25[VAR_44] >> VAR_18) & VAR_17;
  if (VAR_33) {
   if (!VAR_32)
    ++VAR_40[VAR_34 & 1];
   if (VAR_33 == 6 || VAR_33 == 8)

    VAR_33 = (VAR_33 >> 1) - 1;
   if (VAR_41[VAR_34] && VAR_41[VAR_34] != VAR_33)
    return -1;
   VAR_41[VAR_34] = VAR_33;
   VAR_36 <<= VAR_33;
   if (VAR_42[VAR_33] && VAR_36 != (VAR_43 & VAR_36))
    return -1;
   VAR_42[VAR_33] = 1;
   VAR_43 |= VAR_36;
  }
 }
 if (VAR_40[0] > 4 || VAR_40[1] > 4)
  return -1;
 if (VAR_42[2] & (VAR_42[1] | (VAR_42[3] & VAR_42[9]))) {
  VAR_42[6] = 1;
  VAR_42[2] = 0;
 }
 if (VAR_42[3] & (VAR_42[1] | VAR_42[2])) {
  VAR_42[8] = 1;
  VAR_42[3] = 0;
  VAR_43 = (VAR_43 & ~8) | ((VAR_43 & 8) << 5);
 }

 if (VAR_42[1] + VAR_42[2] + VAR_42[3] > 1 ||
     VAR_42[4] + VAR_42[6] + VAR_42[7] > 1 ||
     VAR_42[8] + VAR_42[9] > 1 ||
     (VAR_42[5] | VAR_42[10] | VAR_42[11] |
      VAR_42[13] | VAR_42[14]))
  return -1;


 VAR_30 |= (unsigned long)(VAR_42[3] * 2 + VAR_42[2])
  << VAR_10;
 VAR_30 |= (unsigned long)(VAR_42[7] * 3 + VAR_42[6] * 2)
  << VAR_11;
 VAR_30 |= (unsigned long)VAR_42[9] << VAR_12;


 if (VAR_43 & 0xe)
  VAR_30 |= 1ull << VAR_6;
 if (VAR_43 & 0xf0)
  VAR_30 |= 1ull << VAR_7;
 if (VAR_43 & 0xf00)
  VAR_30 |= 1ull << VAR_8;
 if (VAR_43 & 0x7000)
  VAR_30 |= 1ull << VAR_9;


 for (VAR_34 = 0; VAR_34 < 4; ++VAR_34) {
  VAR_33 = VAR_41[VAR_34];
  if (!VAR_33)
   continue;
  if (VAR_33 == 0xf) {

   VAR_30 |= 1ull << (VAR_3 - VAR_34);
  } else {
   if (!VAR_42[VAR_33])
    VAR_37 = VAR_33 - 1;
   else
    VAR_37 = VAR_33 >> 2;
   VAR_30 |= (unsigned long)VAR_37
    << (VAR_5 - 2 * VAR_34);
  }
 }


 for (VAR_44 = 0; VAR_44 < VAR_26; ++VAR_44) {
  VAR_32 = (VAR_25[VAR_44] >> VAR_21) & VAR_20;
  VAR_33 = (VAR_25[VAR_44] >> VAR_23) & VAR_22;
  VAR_34 = (VAR_25[VAR_44] >> VAR_16) & VAR_15;
  VAR_35 = VAR_25[VAR_44] & VAR_19;
  if (!VAR_32) {

   if (VAR_33)
    VAR_35 |= 0x10 | ((VAR_34 & 2) << 2);
   for (VAR_32 = 0; VAR_32 < 8; ++VAR_32) {
    if (VAR_39 & (1 << VAR_32))
     continue;
    VAR_38 = (VAR_32 >> 1) & 1;
    if (VAR_33) {
     if (VAR_38 == (VAR_34 & 1))
      break;
    } else if (VAR_40[VAR_38] < 4) {
     ++VAR_40[VAR_38];
     break;
    }
   }
   VAR_39 |= 1 << VAR_32;
  } else {

   --VAR_32;
   if (VAR_35 == 0 && (VAR_34 & 2))

    VAR_30 |= 1ull << VAR_24[VAR_32];
   else if (VAR_35 == 6 && VAR_34 == 3)

    VAR_31 |= VAR_14;
   VAR_35 |= 8;
  }
  if (VAR_32 <= 1)
   VAR_29 |= VAR_35 << (VAR_1 - 7 * VAR_32);
  else
   VAR_30 |= VAR_35 << (VAR_4 - 5 * (VAR_32 - 2));
  if (VAR_32 == 7)
   VAR_31 |= (VAR_35 & 1) << VAR_13;
  VAR_27[VAR_44] = VAR_32;
  if (FUNC_1(VAR_25[VAR_44]))
   VAR_31 |= VAR_14;
 }

 if (VAR_39 & 1)
  VAR_29 |= VAR_0;
 if (VAR_39 & 0xfe)
  VAR_29 |= VAR_2;

 VAR_31 |= 0x2000;


 VAR_28[0] = VAR_29;
 VAR_28[1] = VAR_30;
 VAR_28[2] = VAR_31;
 return 0;
}
