
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = 0;
 unsigned int VAR_3 = FUNC_0(VAR_0);

 if (VAR_3)
  VAR_2 = (VAR_1 + 1) % (1 << VAR_3);

 return VAR_2;
}
