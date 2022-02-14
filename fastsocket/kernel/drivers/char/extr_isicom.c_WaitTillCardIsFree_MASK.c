
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(unsigned long VAR_0)
{
 unsigned int VAR_1 = 0;
 unsigned int VAR_2 = FUNC_0();

 while (!(FUNC_1(VAR_0 + 0xe) & 0x1) && VAR_1++ < 100)
  if (VAR_2)
   FUNC_2(1);
  else
   FUNC_3(1);

 return !(FUNC_1(VAR_0 + 0xe) & 0x1);
}
