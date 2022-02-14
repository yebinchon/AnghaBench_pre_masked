
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ehca_shca {int ib_device; } ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static u8 FUNC_1(struct ehca_shca *VAR_0, u32 VAR_1)
{
 switch (VAR_1) {
 case 0x1:
  return 1;
 case 0x2:
  return 2;
 case 0x3:
  return 4;
 case 0x4:
  return 8;
 case 0x5:
  return 15;
 default:
  FUNC_0(&VAR_0->ib_device, "invalid Vl Capability: %x.",
    VAR_1);
  return 0;
 }
}
