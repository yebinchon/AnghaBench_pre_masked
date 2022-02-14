
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int magic_val ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned short*,int) ;

__attribute__((used)) static int FUNC_1(void)
{
 unsigned short VAR_1 = 0;

 if (VAR_0 < 0)
  return -1;
 if (FUNC_0(VAR_0, &VAR_1, sizeof(VAR_1)) != sizeof(VAR_1))
  return -1;
 switch (VAR_1) {
 default:
 case 1: return 100;
 case 2: return 66;
 case 3: return 40;
 case 4: return 0;
 }
}
