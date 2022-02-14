
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(uint8_t **VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 uint8_t *VAR_3 = *VAR_0;

 if (VAR_2 == 1) {
  *VAR_3++ = (uint8_t) VAR_1;
 } else {
  *VAR_3++ = (uint8_t) ((VAR_2-1) | 0x80);
  VAR_2 -= 1;
  while (VAR_2--)
   *VAR_3++ = (uint8_t) ((VAR_1 >> (VAR_2 * 8)) & 0xff);
 }

 *VAR_0 = VAR_3;
}
