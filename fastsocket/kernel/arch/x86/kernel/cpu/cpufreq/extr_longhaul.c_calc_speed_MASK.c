
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(int VAR_1)
{
 int VAR_2;
 VAR_2 = (VAR_1/10)*VAR_0;
 if (VAR_1%10)
  VAR_2 += VAR_0/2;
 VAR_2 *= 1000;
 return VAR_2;
}
