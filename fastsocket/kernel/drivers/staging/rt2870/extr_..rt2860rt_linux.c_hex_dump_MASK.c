
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(char *VAR_2, unsigned char *VAR_3, unsigned int VAR_4)
{
 unsigned char *VAR_5;
 int VAR_6;

 if (VAR_0 < VAR_1)
  return;

 VAR_5 = VAR_3;
 FUNC_0("%s: %p, len = %d\n",VAR_2, VAR_3, VAR_4);
 for (VAR_6=0; VAR_6<VAR_4; VAR_6++)
 {
  if (VAR_6 % 16 == 0)
   FUNC_0("0x%04x : ", VAR_6);
  FUNC_0("%02x ", ((unsigned char)VAR_5[VAR_6]));
  if (VAR_6%16 == 15) FUNC_0("\n");
 }
 FUNC_0("\n");
}
