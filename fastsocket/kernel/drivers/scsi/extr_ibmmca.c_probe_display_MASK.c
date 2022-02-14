
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(int VAR_3)
{
 static int VAR_4 = 0;
 const char VAR_5[] = "|/-\\";

 if (!(VAR_2 & VAR_0))
  return 0;
 if (!VAR_3) {
  FUNC_1(0x20202020, VAR_1);
  FUNC_1(0x20202020, VAR_1 + 4);
 } else {
  FUNC_0('S', VAR_1 + 7);
  FUNC_0('C', VAR_1 + 6);
  FUNC_0('S', VAR_1 + 5);
  FUNC_0('I', VAR_1 + 4);
  FUNC_0('i', VAR_1 + 3);
  FUNC_0('n', VAR_1 + 2);
  FUNC_0('i', VAR_1 + 1);
  FUNC_0((char) (VAR_5[VAR_4]), VAR_1);
  VAR_4++;
  if (VAR_4 > 3)
   VAR_4 = 0;
 }
 return 0;
}
