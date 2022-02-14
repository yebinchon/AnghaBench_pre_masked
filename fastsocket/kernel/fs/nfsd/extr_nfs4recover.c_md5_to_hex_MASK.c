
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(char *VAR_0, char *VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_2<16; VAR_2++) {
  unsigned char VAR_3 = VAR_1[VAR_2];

  *VAR_0++ = '0' + ((VAR_3&0xf0)>>4) + (VAR_3>=0xa0)*('a'-'9'-1);
  *VAR_0++ = '0' + (VAR_3&0x0f) + ((VAR_3&0x0f)>=0x0a)*('a'-'9'-1);
 }
 *VAR_0 = '\0';
}
