
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits64 ;
typedef int bits32 ;



void FUNC_0(bits64 VAR_0, bits64 VAR_1, bits64 * VAR_2, bits64 * VAR_3)
{
 bits32 VAR_4, VAR_5, VAR_6, VAR_7;
 bits64 VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_5 = VAR_0;
 VAR_4 = VAR_0 >> 32;
 VAR_7 = VAR_1;
 VAR_6 = VAR_1 >> 32;
 VAR_11 = ((bits64) VAR_5) * VAR_7;
 VAR_9 = ((bits64) VAR_5) * VAR_6;
 VAR_10 = ((bits64) VAR_4) * VAR_7;
 VAR_8 = ((bits64) VAR_4) * VAR_6;
 VAR_9 += VAR_10;
 VAR_8 += (((bits64) (VAR_9 < VAR_10)) << 32) + (VAR_9 >> 32);
 VAR_9 <<= 32;
 VAR_11 += VAR_9;
 VAR_8 += (VAR_11 < VAR_9);
 *VAR_3 = VAR_11;
 *VAR_2 = VAR_8;

}
