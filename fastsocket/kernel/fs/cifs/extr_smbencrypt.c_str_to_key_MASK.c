
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1)
{
 int VAR_2;

 VAR_1[0] = VAR_0[0] >> 1;
 VAR_1[1] = ((VAR_0[0] & 0x01) << 6) | (VAR_0[1] >> 2);
 VAR_1[2] = ((VAR_0[1] & 0x03) << 5) | (VAR_0[2] >> 3);
 VAR_1[3] = ((VAR_0[2] & 0x07) << 4) | (VAR_0[3] >> 4);
 VAR_1[4] = ((VAR_0[3] & 0x0F) << 3) | (VAR_0[4] >> 5);
 VAR_1[5] = ((VAR_0[4] & 0x1F) << 2) | (VAR_0[5] >> 6);
 VAR_1[6] = ((VAR_0[5] & 0x3F) << 1) | (VAR_0[6] >> 7);
 VAR_1[7] = VAR_0[6] & 0x7F;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  VAR_1[VAR_2] = (VAR_1[VAR_2] << 1);
}
