
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(u32 VAR_17, u8 *VAR_18, u32 VAR_19, u32 VAR_20,
   u32 VAR_21)
{
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 if (VAR_16 == ((void*)0))
  return -1;


 FUNC_3((u32 *)(VAR_16 + VAR_7), 0);
 FUNC_3((u32 *)(VAR_16 + VAR_6), 0);
 FUNC_3((u32 *)(VAR_16 + VAR_5), 0);
 FUNC_3((u32 *)(VAR_16 + VAR_4), (4 << 3) | 0x4);

 if (FUNC_0(VAR_3,
    VAR_15) < 0)
  return -1;


 VAR_24 = VAR_1 | VAR_3;
 VAR_25 = VAR_12;
 if (FUNC_0(VAR_24, VAR_25) < 0)
  return -1;


 VAR_23 = VAR_17 & ~0x1;
 VAR_24 = VAR_3;
 VAR_25 = VAR_14;
 if (FUNC_2(VAR_23, VAR_24, VAR_25) < 0)
  return -1;


 VAR_24 = VAR_3;
 VAR_25 = VAR_13;
 if (VAR_20 > 1) {
  if (FUNC_2(VAR_19 >> 8, VAR_24, VAR_25) < 0)
   return -1;
 }
 if (FUNC_2(VAR_19, VAR_24, VAR_25) < 0)
  return -1;


 VAR_24 = VAR_1 | VAR_3;
 VAR_25 = VAR_11;
 if (FUNC_0(VAR_24, VAR_25) < 0)
  return -1;


 VAR_23 = VAR_17 | 0x1;
 VAR_24 = VAR_3;
 VAR_25 = VAR_8;
 if (FUNC_2(VAR_23, VAR_24, VAR_25) < 0)
  return -1;


 VAR_24 = VAR_0 | VAR_3;
 VAR_25 = VAR_9;

 for (VAR_22=1; VAR_22<VAR_21; VAR_22++) {
  VAR_23 = FUNC_1(VAR_24, VAR_25);
  if (VAR_23 < 0) {
   FUNC_4("errors on iteration %d\n", VAR_22);
   return -1;
  }
  *VAR_18++ = VAR_23;
 }


 VAR_24 = VAR_3;
 VAR_25 = VAR_10;
 VAR_23 = FUNC_1(VAR_24, VAR_25);
 if (VAR_23 < 0)
  return -1;
 *VAR_18++ = VAR_23;


 VAR_24 = VAR_2 | VAR_3;
 VAR_25 = VAR_15;
 if (FUNC_0(VAR_24, VAR_25) < 0)
  return -1;

 return VAR_21;
}
