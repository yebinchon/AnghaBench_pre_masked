
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int gtt_size; } ;
struct radeon_device {int dev; TYPE_1__ mc; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_3)
{

 if (!FUNC_1(VAR_2)) {
  FUNC_0(VAR_3->dev, "vram limit (%d) must be a power of 2\n",
    VAR_2);
  VAR_2 = 0;
 }


 if (VAR_1 < 32) {
  FUNC_0(VAR_3->dev, "gart size (%d) too small forcing to 512M\n",
    VAR_1);
  VAR_1 = 512;

 } else if (!FUNC_1(VAR_1)) {
  FUNC_0(VAR_3->dev, "gart size (%d) must be a power of 2\n",
    VAR_1);
  VAR_1 = 512;
 }
 VAR_3->mc.gtt_size = (uint64_t)VAR_1 << 20;


 switch (VAR_0) {
 case -1:
 case 0:
 case 1:
 case 2:
 case 4:
 case 8:
  break;
 default:
  FUNC_0(VAR_3->dev, "invalid AGP mode %d (valid mode: "
    "-1, 0, 1, 2, 4, 8)\n", VAR_0);
  VAR_0 = 0;
  break;
 }
}
