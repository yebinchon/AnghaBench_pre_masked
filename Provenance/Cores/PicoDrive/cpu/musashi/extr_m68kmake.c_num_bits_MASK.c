
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0)
{
    VAR_0 = ((VAR_0 & 0xaaaa) >> 1) + (VAR_0 & 0x5555);
    VAR_0 = ((VAR_0 & 0xcccc) >> 2) + (VAR_0 & 0x3333);
    VAR_0 = ((VAR_0 & 0xf0f0) >> 4) + (VAR_0 & 0x0f0f);
    VAR_0 = ((VAR_0 & 0xff00) >> 8) + (VAR_0 & 0x00ff);
 return VAR_0;
}
