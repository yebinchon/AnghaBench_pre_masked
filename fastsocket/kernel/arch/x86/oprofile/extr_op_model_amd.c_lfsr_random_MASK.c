
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(void)
{
 static unsigned int VAR_0 = 0xF00D;
 unsigned int VAR_1;


 VAR_1 = ((VAR_0 >> 0) ^
        (VAR_0 >> 2) ^
        (VAR_0 >> 3) ^
        (VAR_0 >> 5)) & 0x0001;


 VAR_0 = (VAR_0 >> 1) | (VAR_1 << 15);

 return VAR_0;
}
