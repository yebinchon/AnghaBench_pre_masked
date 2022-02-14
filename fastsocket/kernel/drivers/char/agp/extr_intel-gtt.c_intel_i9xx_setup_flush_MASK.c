
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* name; scalar_t__ start; int flags; } ;
struct TYPE_6__ {TYPE_1__* pcidev; int i9xx_flush_page; TYPE_2__ ifp_resource; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(void)
{

 if (VAR_4.ifp_resource.start)
  return;

 if (VAR_0 == 6)
  return;


 VAR_4.ifp_resource.name = "Intel Flush Page";
 VAR_4.ifp_resource.flags = VAR_1;


 if (VAR_2 || VAR_0 >= 4) {
  FUNC_2();
 } else {
  FUNC_1();
 }

 if (VAR_4.ifp_resource.start)
  VAR_4.i9xx_flush_page = FUNC_3(VAR_4.ifp_resource.start, VAR_3);
 if (!VAR_4.i9xx_flush_page)
  FUNC_0(&VAR_4.pcidev->dev,
   "can't ioremap flush page - no chipset flushing\n");
}
