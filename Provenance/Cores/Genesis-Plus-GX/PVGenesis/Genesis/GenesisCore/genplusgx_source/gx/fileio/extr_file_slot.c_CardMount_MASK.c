
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{
  int VAR_3 = 0;



  *(unsigned long *) (0xCC006800) |= 1 << 13;

  while (VAR_3 < 10)
  {
    FUNC_2 ();
    if (FUNC_0(VAR_2, VAR_1, ((void*)0)) == VAR_0)
      return 1;
    else
      FUNC_1 ();
    VAR_3++;
  }
  return 0;
}
