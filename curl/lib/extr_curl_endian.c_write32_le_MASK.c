
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(const int VAR_0, unsigned char *VAR_1)
{
  VAR_1[0] = (char)(VAR_0 & 0x000000FF);
  VAR_1[1] = (char)((VAR_0 & 0x0000FF00) >> 8);
  VAR_1[2] = (char)((VAR_0 & 0x00FF0000) >> 16);
  VAR_1[3] = (char)((VAR_0 & 0xFF000000) >> 24);
}
