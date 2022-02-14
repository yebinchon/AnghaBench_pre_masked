
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0(int VAR_7)
{
 size_t VAR_8, VAR_9, VAR_10;
 char *VAR_11, *VAR_12;
 volatile char VAR_13;

 VAR_8 = VAR_3 / (size_t)VAR_4;
 VAR_9 = VAR_8 * (size_t)VAR_7;

 if((size_t)VAR_7 < VAR_3 % (size_t)VAR_4) {
  VAR_9 += (size_t)VAR_7;
  VAR_8++;
 }
 else {
  VAR_9 += VAR_3 % (size_t)VAR_4;
 }

 VAR_9 *= VAR_5;
 VAR_8 *= VAR_5;
 VAR_10 = VAR_9 + VAR_8;

 VAR_12 = (VAR_6 == VAR_0)? VAR_2: VAR_1;
 for(VAR_11 = VAR_12 + VAR_9; VAR_11 < VAR_12 + VAR_10; VAR_11 += VAR_5) {
  VAR_13 = *VAR_11;
 }
}
