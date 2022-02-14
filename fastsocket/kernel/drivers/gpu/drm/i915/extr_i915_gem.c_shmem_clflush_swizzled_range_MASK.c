
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(char *VAR_0, unsigned long VAR_1,
        bool VAR_2)
{
 if (FUNC_3(VAR_2)) {
  unsigned long VAR_3 = (unsigned long) VAR_0;
  unsigned long VAR_4 = (unsigned long) VAR_0 + VAR_1;





  VAR_3 = FUNC_1(VAR_3, 128);
  VAR_4 = FUNC_2(VAR_4, 128);

  FUNC_0((void *)VAR_3, VAR_4 - VAR_3);
 } else {
  FUNC_0(VAR_0, VAR_1);
 }

}
