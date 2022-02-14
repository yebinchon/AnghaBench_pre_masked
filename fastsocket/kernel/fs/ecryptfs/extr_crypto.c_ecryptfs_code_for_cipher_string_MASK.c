
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecryptfs_cipher_code_str_map_elem {char* cipher_str; int cipher_code; } ;


 int FUNC_0 (struct ecryptfs_cipher_code_str_map_elem*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ecryptfs_cipher_code_str_map_elem* VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*) ;

u8 FUNC_2(char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 u8 VAR_7 = 0;
 struct ecryptfs_cipher_code_str_map_elem *VAR_8 =
  VAR_3;

 if (FUNC_1(VAR_4, "aes") == 0) {
  switch (VAR_5) {
  case 16:
   VAR_7 = VAR_0;
   break;
  case 24:
   VAR_7 = VAR_1;
   break;
  case 32:
   VAR_7 = VAR_2;
  }
 } else {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++)
   if (FUNC_1(VAR_4, VAR_8[VAR_6].cipher_str) == 0) {
    VAR_7 = VAR_8[VAR_6].cipher_code;
    break;
   }
 }
 return VAR_7;
}
