
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_plcp_hdr6 {int* raw; } ;



__attribute__((used)) static int FUNC_0(struct b43_plcp_hdr6 *VAR_0)
{
 switch (VAR_0->raw[0]) {
 case 0x0A:
  return 0;
 case 0x14:
  return 1;
 case 0x37:
  return 2;
 case 0x6E:
  return 3;
 }
 return -1;
}
