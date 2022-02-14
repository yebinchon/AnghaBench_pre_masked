
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned char
FUNC_4(void)
{
 unsigned char VAR_0 = 0;
 int VAR_1;




 FUNC_1(0);

 for (VAR_1 = 8; VAR_1--;) {
  FUNC_0(0);
  FUNC_3(1);
  VAR_0 >>= 1;
  VAR_0 |= (FUNC_2() << 7);
  FUNC_0(1);
  FUNC_3(1);
 }

 return VAR_0;
}
