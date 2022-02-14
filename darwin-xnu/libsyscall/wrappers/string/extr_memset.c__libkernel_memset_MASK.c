
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;

__attribute__((visibility("hidden")))
void *
FUNC_0(void *VAR_5, int VAR_6, size_t VAR_7)
{
 size_t VAR_8;
 u_int VAR_9;
 u_char *VAR_10;

 VAR_10 = VAR_5;
 if (VAR_7 < 3 * VAR_4) {
  while (VAR_7 != 0) {
   *VAR_10++ = VAR_1;
   --VAR_7;
  }
  VAR_0;
 }

 if ((VAR_9 = (u_char)VAR_6) != 0) {
  VAR_9 = (VAR_9 << 8) | VAR_9;






 }

 if ((VAR_8 = (long)VAR_10 & VAR_3) != 0) {
  VAR_8 = VAR_4 - VAR_8;
  VAR_7 -= VAR_8;
  do {
   *VAR_10++ = VAR_1;
  } while (--VAR_8 != 0);
 }


 VAR_8 = VAR_7 / VAR_4;
 do {
  *(u_int *)VAR_10 = VAR_2;
  VAR_10 += VAR_4;
 } while (--VAR_8 != 0);


 VAR_8 = VAR_7 & VAR_3;
 if (VAR_8 != 0)
  do {
   *VAR_10++ = VAR_1;
  } while (--VAR_8 != 0);
 VAR_0;
}
