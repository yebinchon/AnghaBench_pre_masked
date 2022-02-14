
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigtab ;
typedef unsigned long long pmask_t ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, pmask_t *VAR_1, pmask_t *VAR_2,
      char *VAR_3, char *VAR_4)
{
 static char VAR_5[10] = "EeSsPpAaBb";
 char VAR_6, VAR_7;
 pmask_t VAR_8, VAR_9;

 VAR_7 = VAR_6 = VAR_8 = VAR_9 = 0ULL;
 while (*VAR_0) {
  int VAR_10, VAR_11, VAR_12, VAR_13;
  for (VAR_10 = 0; (VAR_10 < sizeof(VAR_5)) && (VAR_5[VAR_10] != *VAR_0); VAR_10++)
   ;
  if (VAR_10 >= sizeof(VAR_5))
   return 0;
  VAR_13 = (VAR_10 & 1);
  VAR_10 >>= 1;
  VAR_6 |= (1 << VAR_10);

  VAR_0++;
  if (FUNC_0(*VAR_0)) {
   VAR_11 = *VAR_0 - '0';
   VAR_7 |= (1 << VAR_11);
  } else if (*VAR_0 == '-')
   VAR_11 = 8;
  else
   return 0;

  VAR_12 = (VAR_11 * 5) + VAR_10;

  VAR_8 |= 1ULL << VAR_12;
  if (!VAR_13)
   VAR_9 |= 1ULL << VAR_12;
  VAR_0++;
 }
 *VAR_1 = VAR_8;
 *VAR_2 = VAR_9;
 if (VAR_3)
  *VAR_3 |= VAR_6;
 if (VAR_4)
  *VAR_4 |= VAR_7;
 return 1;
}
