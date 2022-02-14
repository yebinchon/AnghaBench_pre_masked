
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;

FUNC_1()
{
 static char *VAR_0[] = {
  "Running this program should reveal these characteristics:",
 "     Radix = 1, 2, 4, 8, 10, 16, 100, 256 ...",
 "     Precision = number of significant digits carried.",
 "     U2 = Radix/Radix^Precision = One Ulp",
 "\t(OneUlpnit in the Last Place) of 1.000xxx .",
 "     U1 = 1/Radix^Precision = One Ulp of numbers a little less than 1.0 .",
 "     Adequacy of guard digits for Mult., Div. and Subt.",
 "     Whether arithmetic is chopped, correctly rounded, or something else",
 "\tfor Mult., Div., Add/Subt. and Sqrt.",
 "     Whether a Sticky Bit used correctly for rounding.",
 "     UnderflowThreshold = an underflow threshold.",
 "     E0 and PseudoZero tell whether underflow is abrupt, gradual, or fuzzy.",
 "     V = an overflow threshold, roughly.",
 "     V0  tells, roughly, whether  Infinity  is represented.",
 "     Comparisions are checked for consistency with subtraction",
 "\tand for contamination with pseudo-zeros.",
 "     Sqrt is tested.  Y^X is not tested.",
 "     Extra-precise subexpressions are revealed but NOT YET tested.",
 "     Decimal-Binary conversion is NOT YET tested for accuracy.",
 0};

 FUNC_0(VAR_0);
 }
