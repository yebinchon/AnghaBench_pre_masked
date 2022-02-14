
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ehca_shca {int ib_device; } ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static enum ib_mtu FUNC_1(struct ehca_shca *VAR_5, u32 VAR_6)
{
 switch (VAR_6) {
 case 0x1:
  return VAR_2;
 case 0x2:
  return VAR_4;
 case 0x3:
  return VAR_0;
 case 0x4:
  return VAR_1;
 case 0x5:
  return VAR_3;
 default:
  FUNC_0(&VAR_5->ib_device, "Unknown MTU size: %x.",
    VAR_6);
  return 0;
 }
}
