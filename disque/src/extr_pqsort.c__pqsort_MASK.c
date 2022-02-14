
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,size_t) ;
 char* FUNC_1 (char*,char*,char*,int (*) (void const*,void const*)) ;
 size_t FUNC_2 (size_t,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, size_t VAR_1, size_t VAR_2,
    int (*VAR_3) (const void *, const void *), void *VAR_4, void *VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 size_t VAR_13, VAR_14;
 int VAR_15, VAR_16;

loop: FUNC_0(VAR_0, VAR_2);
 if (VAR_1 < 7) {
  for (VAR_11 = (char *) VAR_0 + VAR_2; VAR_11 < (char *) VAR_0 + VAR_1 * VAR_2; VAR_11 += VAR_2)
   for (VAR_10 = VAR_11; VAR_10 > (char *) VAR_0 && VAR_3(VAR_10 - VAR_2, VAR_10) > 0;
        VAR_10 -= VAR_2)
    FUNC_3(VAR_10, VAR_10 - VAR_2);
  return;
 }
 VAR_11 = (char *) VAR_0 + (VAR_1 / 2) * VAR_2;
 if (VAR_1 > 7) {
  VAR_10 = (char *) VAR_0;
  VAR_12 = (char *) VAR_0 + (VAR_1 - 1) * VAR_2;
  if (VAR_1 > 40) {
   VAR_13 = (VAR_1 / 8) * VAR_2;
   VAR_10 = FUNC_1(VAR_10, VAR_10 + VAR_13, VAR_10 + 2 * VAR_13, VAR_3);
   VAR_11 = FUNC_1(VAR_11 - VAR_13, VAR_11, VAR_11 + VAR_13, VAR_3);
   VAR_12 = FUNC_1(VAR_12 - 2 * VAR_13, VAR_12 - VAR_13, VAR_12, VAR_3);
  }
  VAR_11 = FUNC_1(VAR_10, VAR_11, VAR_12, VAR_3);
 }
 FUNC_3(VAR_0, VAR_11);
 VAR_6 = VAR_7 = (char *) VAR_0 + VAR_2;

 VAR_8 = VAR_9 = (char *) VAR_0 + (VAR_1 - 1) * VAR_2;
 for (;;) {
  while (VAR_7 <= VAR_8 && (VAR_16 = VAR_3(VAR_7, VAR_0)) <= 0) {
   if (VAR_16 == 0) {
    FUNC_3(VAR_6, VAR_7);
    VAR_6 += VAR_2;
   }
   VAR_7 += VAR_2;
  }
  while (VAR_7 <= VAR_8 && (VAR_16 = VAR_3(VAR_8, VAR_0)) >= 0) {
   if (VAR_16 == 0) {
    FUNC_3(VAR_8, VAR_9);
    VAR_9 -= VAR_2;
   }
   VAR_8 -= VAR_2;
  }
  if (VAR_7 > VAR_8)
   break;
  FUNC_3(VAR_7, VAR_8);
  VAR_7 += VAR_2;
  VAR_8 -= VAR_2;
 }

 VAR_12 = (char *) VAR_0 + VAR_1 * VAR_2;
 VAR_14 = FUNC_2(VAR_6 - (char *) VAR_0, VAR_7 - VAR_6);
 FUNC_4(VAR_0, VAR_7 - VAR_14, VAR_14);
 VAR_14 = FUNC_2((size_t)(VAR_9 - VAR_8), VAR_12 - VAR_9 - VAR_2);
 FUNC_4(VAR_7, VAR_12 - VAR_14, VAR_14);
 if ((VAR_14 = VAR_7 - VAR_6) > VAR_2) {
                void *VAR_17 = VAR_0, *VAR_18 = ((unsigned char*)VAR_0)+VAR_14-1;
                if (!((VAR_4 < VAR_17 && VAR_5 < VAR_17) ||
                    (VAR_4 > VAR_18 && VAR_5 > VAR_18)))
      FUNC_5(VAR_0, VAR_14 / VAR_2, VAR_2, VAR_3, VAR_4, VAR_5);
        }
 if ((VAR_14 = VAR_9 - VAR_8) > VAR_2) {
                void *VAR_19, *VAR_20;


  VAR_0 = VAR_12 - VAR_14;
  VAR_1 = VAR_14 / VAR_2;

                VAR_19 = VAR_0;
                VAR_20 = ((unsigned char*)VAR_0)+VAR_14-1;
                if (!((VAR_4 < VAR_19 && VAR_5 < VAR_19) ||
                    (VAR_4 > VAR_20 && VAR_5 > VAR_20)))
      goto loop;
 }

}
