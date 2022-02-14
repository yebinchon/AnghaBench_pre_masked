
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (void const*,int,int*) ;
 int FUNC_2 (void const*,int,int*) ;
 int FUNC_3 (char*,char const*,int) ;

int FUNC_4(const void *VAR_4, int VAR_5, char *VAR_6, int VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12;
 const char *VAR_13;

 FUNC_0(VAR_4);

 if (VAR_7 < 2)
  return -VAR_2;

 for (VAR_10 = 0, VAR_11 = 0;
      (VAR_10 >= 0) && (VAR_10 <= VAR_5);
      VAR_10 = FUNC_2(VAR_4, VAR_10, &VAR_11)) {
  while (VAR_8 > VAR_11) {
   do {
    VAR_9--;
   } while (VAR_6[VAR_9-1] != '/');
   VAR_8--;
  }

  if (VAR_8 >= VAR_11) {
   VAR_13 = FUNC_1(VAR_4, VAR_10, &VAR_12);
   if (!VAR_13)
    return VAR_12;
   if ((VAR_9 + VAR_12 + 1) <= VAR_7) {
    FUNC_3(VAR_6 + VAR_9, VAR_13, VAR_12);
    VAR_9 += VAR_12;
    VAR_6[VAR_9++] = '/';
    VAR_8++;
   }
  }

  if (VAR_10 == VAR_5) {
   if (VAR_8 < (VAR_11 + 1))
    return -VAR_2;

   if (VAR_9 > 1)
    VAR_9--;
   VAR_6[VAR_9] = '\0';
   return 0;
  }
 }

 if ((VAR_10 == -VAR_3) || (VAR_10 >= 0))
  return -VAR_0;
 else if (VAR_10 == -VAR_0)
  return -VAR_1;

 return VAR_10;
}
