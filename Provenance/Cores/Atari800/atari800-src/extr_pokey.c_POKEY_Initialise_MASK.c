
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef void* UBYTE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void** VAR_18 ;
 void** VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (int *) ;

int FUNC_6(int *VAR_23, char *VAR_24[])
{
 int VAR_25;
 ULONG VAR_26;


 VAR_4 = 0;
 VAR_5 = 0;
 VAR_6 = 0;

 VAR_12 = 0xff;
 VAR_15 = 0x00;
 VAR_11 = 0xff;
 VAR_10 = 0x00;
 VAR_17 = 0xef;
 VAR_16 = 0x00;

 for (VAR_25 = 0; VAR_25 < (VAR_13 * 4); VAR_25++) {
  VAR_0[VAR_25] = 0;
  VAR_2[VAR_25] = 0;
 }

 for (VAR_25 = 0; VAR_25 < VAR_13; VAR_25++) {
  VAR_1[VAR_25] = 0;
  VAR_3[VAR_25] = VAR_7;
 }

 for (VAR_25 = 0; VAR_25 < 4; VAR_25++)
  VAR_8[VAR_25] = VAR_9[VAR_25] = 0;

 VAR_21 = 0;


 VAR_26 = 0x1ff;
 for (VAR_25 = 0; VAR_25 < 511; VAR_25++) {
  VAR_26 = ((((VAR_26 >> 5) ^ VAR_26) & 1) << 8) + (VAR_26 >> 1);
  VAR_19[VAR_25] = (UBYTE) VAR_26;
 }

 VAR_26 = 0x1ffff;
 for (VAR_25 = 0; VAR_25 < 16385; VAR_25++) {
  VAR_26 = ((((VAR_26 >> 5) ^ VAR_26) & 0xff) << 9) + (VAR_26 >> 8);
  VAR_18[VAR_25] = (UBYTE) (VAR_26 >> 1);
 }


 if (FUNC_2()) {
  VAR_22 = FUNC_1();
 }
 else

 {
  VAR_22 =





  0;

 }

 if (FUNC_4()) {
  FUNC_3(VAR_22);
 }


 return VAR_20;
}
