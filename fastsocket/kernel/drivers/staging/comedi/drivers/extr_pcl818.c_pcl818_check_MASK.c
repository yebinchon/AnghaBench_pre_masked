
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_2)
{
 FUNC_1(0x00, VAR_2 + VAR_1);
 FUNC_2(1);
 if (FUNC_0(VAR_2 + VAR_1) != 0x00)
  return 1;
 FUNC_1(0x55, VAR_2 + VAR_1);
 FUNC_2(1);
 if (FUNC_0(VAR_2 + VAR_1) != 0x55)
  return 1;
 FUNC_1(0x00, VAR_2 + VAR_1);
 FUNC_2(1);
 FUNC_1(0x18, VAR_2 + VAR_0);
 FUNC_2(1);
 if (FUNC_0(VAR_2 + VAR_0) != 0x18)
  return 1;
 return 0;
}
