
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvbios_init {int subdev; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static u32
FUNC_4(struct nvbios_init *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 VAR_1 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(VAR_0)) {
  u32 VAR_4 = FUNC_2(VAR_0->subdev, VAR_1);
  FUNC_3(VAR_0->subdev, VAR_1, (VAR_4 & ~VAR_2) | VAR_3);
  return VAR_4;
 }
 return 0x00000000;
}
