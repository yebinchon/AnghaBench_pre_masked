
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ id; } ;
struct bcma_device {int bus; TYPE_1__ id; } ;
typedef enum bcma_clkmode { ____Placeholder_bcma_clkmode } bcma_clkmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bcma_device*,int ) ;
 int FUNC_3 (struct bcma_device*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

void FUNC_6(struct bcma_device *VAR_6,
        enum bcma_clkmode VAR_7)
{
 u16 VAR_8;

 FUNC_0(VAR_6->id.id != VAR_4 &&
  VAR_6->id.id != VAR_5 &&
  VAR_6->id.id != VAR_3);

 switch (VAR_7) {
 case 128:
  FUNC_3(VAR_6, VAR_0, VAR_1);
  FUNC_5(64, 300);
  for (VAR_8 = 0; VAR_8 < 1500; VAR_8++) {
   if (FUNC_2(VAR_6, VAR_0) &
       VAR_2) {
    VAR_8 = 0;
    break;
   }
   FUNC_4(10);
  }
  if (VAR_8)
   FUNC_1(VAR_6->bus, "HT force timeout\n");
  break;
 case 129:
  FUNC_3(VAR_6, VAR_0, ~VAR_1);
  break;
 }
}
