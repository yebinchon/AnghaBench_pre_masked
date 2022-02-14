
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char,unsigned char) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_0)
{
 unsigned char VAR_1, VAR_2;
 unsigned char VAR_3 = 0, VAR_4 = 0;
 int VAR_5 = 0;


 while (((VAR_3 == 0) || (VAR_4 == 0)) && (VAR_5 <= 3)) {
  for (VAR_2 = 2; VAR_2 <= 0x80; VAR_2++)
   for (VAR_1 = 1; VAR_1 <= 0xfe; VAR_1++)
    if (FUNC_1(FUNC_0(VAR_1, VAR_2)) ==
        VAR_0 + VAR_5) {
     VAR_3 = VAR_1;
     VAR_4 = VAR_2;
    }
  VAR_5++;
 }

 if ((VAR_3 == 0) || (VAR_4 == 0))
  return -1;

 return FUNC_0(VAR_3, VAR_4);
}
