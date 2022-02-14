
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef char __u16 ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char*,int*) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_1, __u8 *VAR_2)
{
 const char *VAR_3, *VAR_4, *VAR_5;
 __u16 *VAR_6;
 char VAR_7[5];
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned short VAR_13[8] = {0, };

 VAR_9 = VAR_10 = VAR_11 = VAR_12 = VAR_8 = 0;
 VAR_3 = VAR_5 = VAR_1;
 VAR_6 = (__u16 *) VAR_2;
 FUNC_1(VAR_6, 0, 16);
 while (*VAR_3) {
  VAR_3 = FUNC_4(VAR_5, ':');
  if (VAR_3 == ((void*)0)) {
   VAR_3 = VAR_1 + FUNC_5(VAR_1);
   VAR_4 = FUNC_4(VAR_5, '\n');
   if (VAR_4 != ((void*)0))
    VAR_3 = VAR_4;
   VAR_10 = 1;
  }
  if ((VAR_3 - VAR_5)) {
   FUNC_1(VAR_7, 0, 5);
   if ((VAR_3 - VAR_5) > 4)
    return -VAR_0;
   FUNC_0(VAR_7, VAR_5, VAR_3 - VAR_5);
   if (!FUNC_2(VAR_7))
    return -VAR_0;
   FUNC_3(VAR_5, "%x", &VAR_8);
   if (VAR_11)
    VAR_13[VAR_12++] = VAR_8;
   else
    VAR_6[VAR_9++] = VAR_8;
   if (VAR_10)
    break;
  } else {
   if (VAR_11)
    return -VAR_0;
   VAR_11 = 1;
  }
  VAR_5 = ++VAR_3;
 }
 if (VAR_9 + VAR_12 > 8)
  return -VAR_0;
 VAR_9 = 7;
 while (VAR_12)
  VAR_6[VAR_9--] = VAR_13[--VAR_12];
 return 0;
}
