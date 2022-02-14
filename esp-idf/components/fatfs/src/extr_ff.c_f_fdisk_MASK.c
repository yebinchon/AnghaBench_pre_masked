
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int FRESULT ;
typedef int DWORD ;
typedef int DSTATUS ;
typedef int BYTE ;


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
 int FUNC_0 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,int*) ;
 scalar_t__ FUNC_3 (int,int*,int ,int) ;
 int* FUNC_4 (int ) ;
 int FUNC_5 (int*,int ,int ) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int*,int) ;

FRESULT FUNC_8 (
 BYTE VAR_16,
 const DWORD* VAR_17,
 void* VAR_18
)
{
 UINT VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 BYTE VAR_26, VAR_27, *VAR_28, *VAR_29 = (BYTE*)VAR_18;
 DSTATUS VAR_30;
 DWORD VAR_31, VAR_32, VAR_33;
 DWORD VAR_34 = VAR_0;
 FRESULT VAR_35;


 VAR_30 = FUNC_1(VAR_16);
 if (VAR_30 & VAR_12) return VAR_6;
 if (VAR_30 & VAR_13) return VAR_8;
 if (FUNC_2(VAR_16, VAR_9, &VAR_31)) return VAR_3;

 VAR_29 = (BYTE*)VAR_18;



 if (!VAR_29) return VAR_5;


 for (VAR_20 = 16; VAR_20 < 256 && VAR_31 / VAR_20 / VAR_34 > 1024; VAR_20 *= 2) {
  ;
 }
 if (VAR_20 == 256) VAR_20--;
 if (VAR_31 < VAR_14) {
  VAR_34 = 1;
  VAR_20 = VAR_31;
 }
 VAR_27 = VAR_20 - 1;
 VAR_21 = VAR_34 * VAR_20;
 VAR_22 = VAR_31 / VAR_21;


 FUNC_5(VAR_29, 0, VAR_2);
 VAR_28 = VAR_29 + VAR_10; VAR_23 = 0;
 for (VAR_19 = 0; VAR_19 < 4; VAR_19++, VAR_28 += VAR_15) {
  VAR_25 = (VAR_17[VAR_19] <= 100U) ? (DWORD)VAR_22 * VAR_17[VAR_19] / 100 : VAR_17[VAR_19] / VAR_21;
  if (VAR_25 == 0) continue;
  VAR_33 = (DWORD)VAR_21 * VAR_23;
  VAR_32 = (DWORD)VAR_21 * VAR_25;
  if (VAR_19 == 0) {
   VAR_26 = 1;
   VAR_33 += VAR_34; VAR_32 -= VAR_34;
  } else {
   VAR_26 = 0;
  }
  VAR_24 = VAR_23 + VAR_25 - 1;
  if (VAR_24 >= VAR_22) FUNC_0(VAR_4);


  VAR_28[1] = VAR_26;
  VAR_28[2] = (BYTE)(((VAR_23 >> 2) & 0xC0) | 1);
  VAR_28[3] = (BYTE)VAR_23;
  VAR_28[4] = 0x07;
  VAR_28[5] = VAR_27;
  VAR_28[6] = (BYTE)(((VAR_24 >> 2) & 0xC0) | VAR_34);
  VAR_28[7] = (BYTE)VAR_24;
  FUNC_6(VAR_28 + 8, VAR_33);
  FUNC_6(VAR_28 + 12, VAR_32);


  VAR_23 += VAR_25;
 }
 FUNC_7(VAR_28, 0xAA55);


 VAR_35 = (FUNC_3(VAR_16, VAR_29, 0, 1) == VAR_11 && FUNC_2(VAR_16, VAR_1, 0) == VAR_11) ? VAR_7 : VAR_3;
 FUNC_0(VAR_35);
}
