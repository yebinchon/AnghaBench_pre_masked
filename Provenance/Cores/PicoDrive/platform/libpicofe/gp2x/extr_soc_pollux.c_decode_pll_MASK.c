
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned int VAR_0)
{
 long long VAR_1;
 int VAR_2, VAR_3, VAR_4;

 VAR_2 = (VAR_0 >> 18) & 0x3f;
 VAR_3 = (VAR_0 >> 8) & 0x3ff;
 VAR_4 = VAR_0 & 0xff;

 if (VAR_2 == 0)
  VAR_2 = 1;

 VAR_1 = 27000000;
 VAR_1 = VAR_1 * VAR_3 / (VAR_2 << VAR_4);
 return VAR_1;
}
