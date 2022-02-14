
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvbios_init {int crtc; int subdev; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct nvbios_init *VAR_0, u16 VAR_1, u8 VAR_2)
{
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0->subdev, VAR_0->crtc, VAR_1, VAR_2);
}
