
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint8_t ;
typedef int WK_word ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,void*,int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,void const*) ;
 int FUNC_3 (int ) ;
 int* VAR_1 ;

void FUNC_4(const void *VAR_2, int VAR_3)
{
 void *VAR_4 = VAR_1 + 4096;

 for (; VAR_3 > 0; VAR_2 = (const uint8_t *)VAR_2 + VAR_0, VAR_3 -= VAR_0) {
  if (!FUNC_3((vm_offset_t)VAR_2))
   continue;


  int VAR_5 = FUNC_0((const WK_word *)VAR_2, (WK_word *)(void *)VAR_1,
          VAR_4, 4095);

  if (VAR_5 == -1)
   return;

  FUNC_2("%p: ", VAR_2);


  static char VAR_6[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
   "abcdefghijklmnopqrstuvwxyz0123456789+/";


  switch (VAR_5 % 3) {
  case 1:
   VAR_1[VAR_5++] = 0;
  case 2:
   VAR_1[VAR_5++] = 0;
  }

  uint8_t *VAR_7 = VAR_1;
  while (VAR_5) {
   uint8_t VAR_8;

   VAR_8 = VAR_7[0] >> 2;
   FUNC_1(VAR_6[VAR_8]);

   VAR_8 = (VAR_7[0] << 4 | VAR_7[1] >> 4) & 0x3f;
   FUNC_1(VAR_6[VAR_8]);

   VAR_8 = (VAR_7[1] << 2 | VAR_7[2] >> 6) & 0x3f;
   FUNC_1(VAR_6[VAR_8]);

   VAR_8 = VAR_7[2] & 0x3f;
   FUNC_1(VAR_6[VAR_8]);

   VAR_7 += 3;
   VAR_5 -= 3;
  }

  FUNC_1('\n');
 }
}
