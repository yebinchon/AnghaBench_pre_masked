
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1();
 VAR_2 = (int)VAR_0 - (int)VAR_1;
 if (VAR_2 >= 512 && VAR_2 < 100*1024)
  FUNC_0(VAR_2);
}
