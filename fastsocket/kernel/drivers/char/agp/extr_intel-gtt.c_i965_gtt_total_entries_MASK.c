
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* pcidev; scalar_t__ registers; int bridge_dev; } ;
struct TYPE_3__ {int dev; } ;




 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_5(void)
{
 int VAR_6;
 u32 VAR_7;
 u16 VAR_8;

 FUNC_3(VAR_5.bridge_dev,
        VAR_2, &VAR_8);

 if (VAR_4 == 5) {
  switch (VAR_8 & VAR_0) {
  case 138:
  case 136:
   FUNC_2(132);
   break;
  case 135:
   FUNC_2(131);
   break;
  case 137:
  case 134:
   FUNC_2(129);
   break;
  }
 }

 VAR_7 = FUNC_4(VAR_5.registers+VAR_1);

 switch (VAR_7 & VAR_3) {
 case 133:
  VAR_6 = FUNC_0(128);
  break;
 case 130:
  VAR_6 = FUNC_0(256);
  break;
 case 128:
  VAR_6 = FUNC_0(512);
  break;

 case 132:
  VAR_6 = FUNC_0(1024);
  break;
 case 129:
  VAR_6 = FUNC_0(2048);
  break;
 case 131:
  VAR_6 = FUNC_0(1024 + 512);
  break;
 default:
  FUNC_1(&VAR_5.pcidev->dev,
    "unknown page table size, assuming 512KB\n");
  VAR_6 = FUNC_0(512);
 }

 return VAR_6/4;
}
