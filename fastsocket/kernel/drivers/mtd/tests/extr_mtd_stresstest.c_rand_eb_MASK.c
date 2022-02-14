
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_2;

again:
 if (VAR_1 < 32768)
  VAR_2 = FUNC_0();
 else
  VAR_2 = (FUNC_0() << 15) | FUNC_0();

 VAR_2 %= (VAR_1 - 1);
 if (VAR_0[VAR_2])
  goto again;
 return VAR_2;
}
