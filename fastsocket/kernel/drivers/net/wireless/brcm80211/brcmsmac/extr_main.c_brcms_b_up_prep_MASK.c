
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcms_hardware {int sih; TYPE_2__* d11core; int unit; } ;
struct TYPE_5__ {TYPE_1__* bus; } ;
struct TYPE_4__ {int * drv_pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*,int) ;
 int FUNC_4 (struct brcms_hardware*,int ) ;
 int FUNC_5 (struct brcms_hardware*,int ) ;
 scalar_t__ FUNC_6 (struct brcms_hardware*) ;
 int FUNC_7 (struct brcms_hardware*,int ) ;
 int FUNC_8 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct brcms_hardware *VAR_5)
{
 FUNC_8(VAR_5->d11core, "wl%d\n", VAR_5->unit);





 FUNC_7(VAR_5, VAR_4);
 FUNC_0(VAR_5->sih);
 FUNC_4(VAR_5, VAR_0);





 FUNC_3(&VAR_5->d11core->bus->drv_pci[0], VAR_5->d11core,
         1);






 if (FUNC_6(VAR_5)) {

  FUNC_1(VAR_5->sih);
  FUNC_7(VAR_5, VAR_3);
  return -VAR_2;
 }

 FUNC_2(VAR_5->sih);


 FUNC_5(VAR_5, VAR_1);

 return 0;
}
