
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
 VAR_0 = ((VAR_0 & 0xaa) >> 1) | ((VAR_0 & 0x55) << 1);
 VAR_0 = ((VAR_0 & 0xcc) >> 2) | ((VAR_0 & 0x33) << 2);
 VAR_0 = ((VAR_0 & 0xf0) >> 4) | ((VAR_0 & 0x0f) << 4);
 return VAR_0;
}
