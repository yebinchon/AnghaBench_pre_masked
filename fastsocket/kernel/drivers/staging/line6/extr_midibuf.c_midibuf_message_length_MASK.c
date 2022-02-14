
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned char VAR_0)
{
 if (VAR_0 < 0x80)
  return -1;
 else if (VAR_0 < 0xf0) {
  static const int VAR_1[] = { 3, 3, 3, 3, 2, 2, 3 };
  return VAR_1[(VAR_0 >> 4) - 8];
 } else {





  static const int VAR_2[] = { -1, 2, -1, 2, -1, -1, 1, 1, 1, 1,
            1, 1, 1, -1, 1, 1 };
  return VAR_2[VAR_0 & 0x0f];
 }
}
