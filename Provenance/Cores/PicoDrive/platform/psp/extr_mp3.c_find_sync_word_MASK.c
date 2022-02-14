
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned char *VAR_0, int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1-1; VAR_2++)
 {
  if ( VAR_0[VAR_2+0] != 0xff) continue;
  if ((VAR_0[VAR_2+1] & 0xfe) == 0xfa) return VAR_2;
  VAR_2++;
 }
 return -1;
}
