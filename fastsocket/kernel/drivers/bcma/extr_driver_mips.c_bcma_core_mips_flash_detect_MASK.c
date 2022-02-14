
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bcma_pflash {int present; int buswidth; scalar_t__ window_size; scalar_t__ window; } ;
struct bcma_drv_mips {TYPE_1__* core; } ;
struct bcma_drv_cc {int capabilities; TYPE_4__* core; struct bcma_pflash pflash; } ;
struct TYPE_9__ {scalar_t__ id; } ;
struct bcma_bus {TYPE_3__ chipinfo; struct bcma_drv_cc drv_cc; } ;
struct TYPE_12__ {int width; } ;
struct TYPE_11__ {scalar_t__ end; scalar_t__ start; } ;
struct TYPE_8__ {int rev; } ;
struct TYPE_10__ {TYPE_2__ id; } ;
struct TYPE_7__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct bcma_bus*,char*) ;
 int FUNC_1 (struct bcma_bus*,char*) ;
 int FUNC_2 (struct bcma_drv_cc*) ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (struct bcma_drv_cc*) ;

__attribute__((used)) static void FUNC_5(struct bcma_drv_mips *VAR_9)
{
 struct bcma_bus *VAR_10 = VAR_9->core->bus;
 struct bcma_drv_cc *VAR_11 = &VAR_10->drv_cc;
 struct bcma_pflash *VAR_12 = &VAR_11->pflash;

 switch (VAR_11->capabilities & VAR_0) {
 case 128:
 case 130:
  FUNC_0(VAR_10, "Found serial flash\n");
  FUNC_4(VAR_11);
  break;
 case 129:
  FUNC_0(VAR_10, "Found parallel flash\n");
  VAR_12->present = 1;
  VAR_12->window = VAR_5;
  VAR_12->window_size = VAR_6;

  if ((FUNC_3(VAR_11->core, VAR_2) &
       VAR_3) == 0)
   VAR_12->buswidth = 1;
  else
   VAR_12->buswidth = 2;

  VAR_7.width = VAR_12->buswidth;
  VAR_8.start = VAR_12->window;
  VAR_8.end = VAR_12->window + VAR_12->window_size;

  break;
 default:
  FUNC_1(VAR_10, "Flash type not supported\n");
 }

 if (VAR_11->core->id.rev == 38 ||
     VAR_10->chipinfo.id == VAR_4) {
  if (VAR_11->capabilities & VAR_1) {
   FUNC_0(VAR_10, "Found NAND flash\n");
   FUNC_2(VAR_11);
  }
 }
}
