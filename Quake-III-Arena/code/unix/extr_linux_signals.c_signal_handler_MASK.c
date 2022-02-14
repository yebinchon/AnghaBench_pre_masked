
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
  if (VAR_1)
  {
    FUNC_2("DOUBLE SIGNAL FAULT: Received signal %d, exiting...\n", VAR_2);
    FUNC_1(1);
  }

  VAR_1 = VAR_0;
  FUNC_2("Received signal %d, exiting...\n", VAR_2);

  FUNC_0();

  FUNC_1(0);
}
