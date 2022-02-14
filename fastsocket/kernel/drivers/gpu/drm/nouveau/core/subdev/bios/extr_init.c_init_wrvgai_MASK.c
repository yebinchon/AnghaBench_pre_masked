
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nvbios_init {int crtc; int subdev; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvbios_init *VAR_1, u16 VAR_2, u8 VAR_3, u8 VAR_4)
{

 if (FUNC_1(VAR_1->subdev)->card_type < VAR_0) {
  if (VAR_2 == 0x03d4 && VAR_3 == 0x44)
   VAR_1->crtc = 0;
 }

 if (FUNC_0(VAR_1)) {
  int VAR_5 = VAR_1->crtc < 0 ? 0 : VAR_1->crtc;
  FUNC_2(VAR_1->subdev, VAR_5, VAR_2, VAR_3, VAR_4);
 }


 if (FUNC_1(VAR_1->subdev)->card_type < VAR_0) {
  if (VAR_2 == 0x03d4 && VAR_3 == 0x44 && VAR_4 == 3)
   VAR_1->crtc = 1;
 }
}
