
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0 * (VAR_1 >> 3);

 if (VAR_2 > 2048)
  VAR_2 = 4096;
 else if (VAR_2 > 1024)
  VAR_2 = 2048;
 else
  VAR_2 = 1024;
 return VAR_2;
}
