
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int*,int*,int*,int*,char*) ;

int FUNC_1(const char *VAR_1, __u8 *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 int VAR_5[4];
 char VAR_6;

 VAR_4 = FUNC_0(VAR_1, "%u.%u.%u.%u%c",
      &VAR_5[0], &VAR_5[1], &VAR_5[2], &VAR_5[3], &VAR_6);
 if (VAR_4 != 4 && (VAR_4 != 5 || VAR_6 != '\n'))
  return -VAR_0;
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  if (VAR_5[VAR_3] > 255)
   return -VAR_0;
  VAR_2[VAR_3] = VAR_5[VAR_3];
 }
 return 0;
}
