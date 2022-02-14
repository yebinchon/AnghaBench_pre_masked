
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int avmcard ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(avmcard *VAR_0)
{
 int VAR_1, VAR_2;

 if ((VAR_1 = FUNC_2(VAR_0)) != 0)
  return VAR_1;

 for (VAR_2=0; VAR_2 < 5 ; VAR_2++) {
  if (FUNC_1(VAR_0, 0x80A00000, 0x21) != 0)
   return 6;
  if ((FUNC_0(VAR_0, 0x80A00000) & 0x01) != 0x01)
   return 7;
 }
 for (VAR_2=0; VAR_2 < 5 ; VAR_2++) {
  if (FUNC_1(VAR_0, 0x80A00000, 0x20) != 0)
   return 8;
  if ((FUNC_0(VAR_0, 0x80A00000) & 0x01) != 0x00)
   return 9;
 }

 return 0;
}
