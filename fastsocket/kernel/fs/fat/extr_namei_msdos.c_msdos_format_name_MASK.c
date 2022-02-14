
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fat_mount_options {char name_check; int nocase; scalar_t__ dotsOK; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned char) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_4, int VAR_5,
        unsigned char *VAR_6, struct fat_mount_options *VAR_7)






{
 unsigned char *VAR_8;
 unsigned char VAR_9;
 int VAR_10;

 if (VAR_4[0] == '.') {
  if (VAR_7->dotsOK) {

   VAR_4++;
   VAR_5--;
  } else
   return -VAR_0;
 }



 VAR_10 = 1;
 VAR_9 = 0;
 for (VAR_8 = VAR_6; VAR_5 && VAR_8 - VAR_6 < 8; VAR_8++) {
  VAR_9 = *VAR_4++;
  VAR_5--;
  if (VAR_7->name_check != 'r' && FUNC_0(VAR_2, VAR_9))
   return -VAR_0;
  if (VAR_7->name_check == 's' && FUNC_0(VAR_3, VAR_9))
   return -VAR_0;
  if (VAR_9 >= 'A' && VAR_9 <= 'Z' && VAR_7->name_check == 's')
   return -VAR_0;
  if (VAR_9 < ' ' || VAR_9 == ':' || VAR_9 == '\\')
   return -VAR_0;
  if ((VAR_6 == VAR_8) && (VAR_9 == 0xE5))
   VAR_9 = 0x05;
  if (VAR_9 == '.')
   break;
  VAR_10 = (VAR_9 == ' ');
  *VAR_8 = (!VAR_7->nocase && VAR_9 >= 'a' && VAR_9 <= 'z') ? VAR_9 - 32 : VAR_9;
 }
 if (VAR_10)
  return -VAR_0;
 if (VAR_7->name_check == 's' && VAR_5 && VAR_9 != '.') {
  VAR_9 = *VAR_4++;
  VAR_5--;
  if (VAR_9 != '.')
   return -VAR_0;
 }
 while (VAR_9 != '.' && VAR_5--)
  VAR_9 = *VAR_4++;
 if (VAR_9 == '.') {
  while (VAR_8 - VAR_6 < 8)
   *VAR_8++ = ' ';
  while (VAR_5 > 0 && VAR_8 - VAR_6 < VAR_1) {
   VAR_9 = *VAR_4++;
   VAR_5--;
   if (VAR_7->name_check != 'r' && FUNC_0(VAR_2, VAR_9))
    return -VAR_0;
   if (VAR_7->name_check == 's' &&
       FUNC_0(VAR_3, VAR_9))
    return -VAR_0;
   if (VAR_9 < ' ' || VAR_9 == ':' || VAR_9 == '\\')
    return -VAR_0;
   if (VAR_9 == '.') {
    if (VAR_7->name_check == 's')
     return -VAR_0;
    break;
   }
   if (VAR_9 >= 'A' && VAR_9 <= 'Z' && VAR_7->name_check == 's')
    return -VAR_0;
   VAR_10 = VAR_9 == ' ';
   if (!VAR_7->nocase && VAR_9 >= 'a' && VAR_9 <= 'z')
    *VAR_8++ = VAR_9 - 32;
   else
    *VAR_8++ = VAR_9;
  }
  if (VAR_10)
   return -VAR_0;
  if (VAR_7->name_check == 's' && VAR_5)
   return -VAR_0;
 }
 while (VAR_8 - VAR_6 < VAR_1)
  *VAR_8++ = ' ';

 return 0;
}
