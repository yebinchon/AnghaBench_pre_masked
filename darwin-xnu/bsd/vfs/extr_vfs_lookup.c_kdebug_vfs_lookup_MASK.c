
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,long,long,long,long) ;
 int FUNC_1 (int,long,long,long,long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_2 (void*) ;

void
FUNC_3(long *VAR_6, int VAR_7, void *VAR_8, uint32_t VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;
 bool VAR_12 = VAR_9 & VAR_2;
 bool VAR_13 = VAR_9 & VAR_3;





 if (VAR_12) {
  VAR_10 = VAR_4 | VAR_1;
 } else {
  VAR_10 = VAR_5 | VAR_1;
 }

 if (VAR_7 <= (int)(3 * sizeof(long)))
  VAR_10 |= VAR_0;

 if (VAR_13) {
  FUNC_1(VAR_10, FUNC_2(VAR_8), VAR_6[0],
    VAR_6[1], VAR_6[2]);
 } else {
  FUNC_0(VAR_10, FUNC_2(VAR_8), VAR_6[0], VAR_6[1],
    VAR_6[2]);
 }

 VAR_10 &= ~VAR_1;

 for (VAR_11=3, VAR_7 -= (3 * sizeof(long)); VAR_7 > 0; VAR_11+=4, VAR_7 -= (4 * sizeof(long))) {
  if (VAR_7 <= (int)(4 * sizeof(long)))
   VAR_10 |= VAR_0;

  if (VAR_13) {
   FUNC_1(VAR_10, VAR_6[VAR_11], VAR_6[VAR_11 + 1],
     VAR_6[VAR_11 + 2], VAR_6[VAR_11 + 3]);
  } else {
   FUNC_0(VAR_10, VAR_6[VAR_11], VAR_6[VAR_11 + 1], VAR_6[VAR_11 + 2],
     VAR_6[VAR_11 + 3]);
  }
 }
}
