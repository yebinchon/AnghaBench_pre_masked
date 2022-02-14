
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_1;

 if (VAR_0 < 32768)
  VAR_1 = FUNC_0();
 else
  VAR_1 = (FUNC_0() << 15) | FUNC_0();
 VAR_1 %= VAR_0;
 return VAR_1;
}
