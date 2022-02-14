
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UBYTE ;
typedef scalar_t__ SWORD ;


 double VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 double VAR_7 ;
 int FUNC_0 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (scalar_t__,unsigned int) ;
 double FUNC_3 (double,double*) ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 double FUNC_4 () ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_12)
{
 double VAR_13;
 unsigned int VAR_14;
 UBYTE *VAR_15 = VAR_3 + VAR_4;
 UBYTE *VAR_16 = VAR_3 + VAR_5;
 unsigned int VAR_17;

 for (;;) {
  double VAR_18;
  VAR_13 = VAR_10 + VAR_11;
  VAR_13 = FUNC_3(VAR_13, &VAR_18);
  VAR_14 = (unsigned int)VAR_18;
  if (VAR_14 > VAR_12) {
   VAR_10 -= VAR_12;
   break;
  }
  if (VAR_15 >= VAR_16)
   break;

  VAR_10 = VAR_13;
  VAR_12 -= VAR_14;

  for (VAR_17 = 0; VAR_17 < VAR_8; ++VAR_17) {

   FUNC_0(VAR_9 + VAR_17, VAR_14);
   if (VAR_6 & VAR_2) {
    *((SWORD *)VAR_15) = (SWORD)FUNC_1(
     (FUNC_2(VAR_9 + VAR_17, VAR_10) - VAR_0 / 2.0)
     * (65535.0 / VAR_0 / 4 * VAR_1 * 0.95)
     + 0.5 + 0.5 * FUNC_4() / VAR_7 - 0.25
    );
    VAR_15 += 2;
   }
   else
    *VAR_15++ = (UBYTE)FUNC_1(
     (FUNC_2(VAR_9 + VAR_17, VAR_10) - VAR_0 / 2.0)
     * (255.0 / VAR_0 / 4 * VAR_1 * 0.95)
     + 128 + 0.5 + 0.5 * FUNC_4() / VAR_7 - 0.25
    );
  }
 }

 VAR_4 = VAR_15 - VAR_3;
 if (VAR_12 > 0) {

  for (VAR_17 = 0; VAR_17 < VAR_8; ++VAR_17)
   FUNC_0(VAR_9 + VAR_17, VAR_12);
 }
}
