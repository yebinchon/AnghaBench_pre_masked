
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void
FUNC_3(unsigned long VAR_0)
{
 unsigned VAR_1;
 VAR_1 = FUNC_1(0x500) & 15;
 if (VAR_1) {





  if (VAR_1 & 8) FUNC_0(16+3);
  if (VAR_1 & 4) FUNC_0(16+2);
  if (VAR_1 & 2) FUNC_0(16+1);
  if (VAR_1 & 1) FUNC_0(16+0);
 } else {
  FUNC_2 (VAR_0);
 }
}
