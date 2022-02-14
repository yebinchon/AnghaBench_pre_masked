
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (void const*,int,char const*,int*) ;
 int FUNC_1 (char const*,int) ;

const char *FUNC_2(const void *VAR_2, int VAR_3,
          const char *VAR_4, int VAR_5,
          int *VAR_6)
{
 const char *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_9);
 if (!VAR_7) {
  if (VAR_6)
   *VAR_6 = VAR_9;

  return ((void*)0);
 }

 VAR_8 = VAR_7 + VAR_9;

 while (VAR_7 < VAR_8) {
  VAR_9 = FUNC_1(VAR_7, VAR_8 - VAR_7) + 1;


  if (VAR_7 + VAR_9 > VAR_8) {
   if (VAR_6)
    *VAR_6 = -VAR_0;

   return ((void*)0);
  }

  if (VAR_5 == 0) {
   if (VAR_6)
    *VAR_6 = VAR_9 - 1;

   return VAR_7;
  }

  VAR_7 += VAR_9;
  VAR_5--;
 }

 if (VAR_6)
  *VAR_6 = -VAR_1;

 return ((void*)0);
}
