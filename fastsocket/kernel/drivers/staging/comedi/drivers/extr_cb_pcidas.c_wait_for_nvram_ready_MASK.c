
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_2)
{
 static const int VAR_3 = 1000;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if ((FUNC_0(VAR_2 +
    VAR_0) & VAR_1)
      == 0)
   return 0;
  FUNC_1(1);
 }
 return -1;
}
