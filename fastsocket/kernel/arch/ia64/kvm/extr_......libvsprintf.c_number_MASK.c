
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_spec {int flags; int base; scalar_t__ field_width; int precision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (char*,unsigned long long) ;

__attribute__((used)) static char *FUNC_1(char *VAR_7, char *VAR_8, unsigned long long VAR_9,
   struct printf_spec VAR_10)
{

 static const char VAR_11[16] = "0123456789ABCDEF";

 char VAR_12[66];
 char VAR_13;
 char VAR_14;
 int VAR_15 = ((VAR_10.flags & VAR_5) && VAR_10.base != 10);
 int VAR_16;



 VAR_14 = (VAR_10.flags & VAR_3);
 if (VAR_10.flags & VAR_0)
  VAR_10.flags &= ~VAR_6;
 VAR_13 = 0;
 if (VAR_10.flags & VAR_2) {
  if ((signed long long) VAR_9 < 0) {
   VAR_13 = '-';
   VAR_9 = - (signed long long) VAR_9;
   VAR_10.field_width--;
  } else if (VAR_10.flags & VAR_1) {
   VAR_13 = '+';
   VAR_10.field_width--;
  } else if (VAR_10.flags & VAR_4) {
   VAR_13 = ' ';
   VAR_10.field_width--;
  }
 }
 if (VAR_15) {
  VAR_10.field_width--;
  if (VAR_10.base == 16)
   VAR_10.field_width--;
 }


 VAR_16 = 0;
 if (VAR_9 == 0)
  VAR_12[VAR_16++] = '0';





 else if (VAR_10.base != 10) {
  int VAR_17 = VAR_10.base - 1;
  int VAR_18 = 3;
  if (VAR_10.base == 16) VAR_18 = 4;
  do {
   VAR_12[VAR_16++] = (VAR_11[((unsigned char)VAR_9) & VAR_17] | VAR_14);
   VAR_9 >>= VAR_18;
  } while (VAR_9);
 } else {
  VAR_16 = FUNC_0(VAR_12, VAR_9) - VAR_12;
 }


 if (VAR_16 > VAR_10.precision)
  VAR_10.precision = VAR_16;

 VAR_10.field_width -= VAR_10.precision;
 if (!(VAR_10.flags & (VAR_6+VAR_0))) {
  while(--VAR_10.field_width >= 0) {
   if (VAR_7 < VAR_8)
    *VAR_7 = ' ';
   ++VAR_7;
  }
 }

 if (VAR_13) {
  if (VAR_7 < VAR_8)
   *VAR_7 = VAR_13;
  ++VAR_7;
 }

 if (VAR_15) {
  if (VAR_7 < VAR_8)
   *VAR_7 = '0';
  ++VAR_7;
  if (VAR_10.base == 16) {
   if (VAR_7 < VAR_8)
    *VAR_7 = ('X' | VAR_14);
   ++VAR_7;
  }
 }

 if (!(VAR_10.flags & VAR_0)) {
  char VAR_19 = (VAR_10.flags & VAR_6) ? '0' : ' ';
  while (--VAR_10.field_width >= 0) {
   if (VAR_7 < VAR_8)
    *VAR_7 = VAR_19;
   ++VAR_7;
  }
 }

 while (VAR_16 <= --VAR_10.precision) {
  if (VAR_7 < VAR_8)
   *VAR_7 = '0';
  ++VAR_7;
 }

 while (--VAR_16 >= 0) {
  if (VAR_7 < VAR_8)
   *VAR_7 = VAR_12[VAR_16];
  ++VAR_7;
 }

 while (--VAR_10.field_width >= 0) {
  if (VAR_7 < VAR_8)
   *VAR_7 = ' ';
  ++VAR_7;
 }
 return VAR_7;
}
