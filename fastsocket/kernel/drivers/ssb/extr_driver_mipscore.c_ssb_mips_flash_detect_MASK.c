
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_mipscore {int flash_buswidth; int flash_window; int flash_window_size; TYPE_1__* dev; } ;
struct TYPE_4__ {scalar_t__ dev; } ;
struct ssb_bus {TYPE_2__ chipco; } ;
struct TYPE_3__ {struct ssb_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct ssb_mipscore *VAR_2)
{
 struct ssb_bus *VAR_3 = VAR_2->dev->bus;

 VAR_2->flash_buswidth = 2;
 if (VAR_3->chipco.dev) {
  VAR_2->flash_window = 0x1c000000;
  VAR_2->flash_window_size = 0x02000000;
  if ((FUNC_0(VAR_3->chipco.dev, VAR_1)
                 & VAR_0) == 0)
   VAR_2->flash_buswidth = 1;
 } else {
  VAR_2->flash_window = 0x1fc00000;
  VAR_2->flash_window_size = 0x00400000;
 }
}
