
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(const unsigned char *VAR_0, unsigned char *VAR_1,
     int VAR_2)
{
 for (; VAR_2 > 0; VAR_2 -= 6) {
  VAR_1[2] = VAR_0[0] | (VAR_0[1] << 4);
  VAR_1[1] = VAR_0[2] | (VAR_0[3] << 4);
  VAR_1[0] = VAR_0[4] | (VAR_0[5] << 4);
  VAR_0 += 6;
  VAR_1 += 3;
 }
}
