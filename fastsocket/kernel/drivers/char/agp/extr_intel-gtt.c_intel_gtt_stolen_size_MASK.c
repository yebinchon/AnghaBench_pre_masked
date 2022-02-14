
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* bridge_dev; scalar_t__ registers; } ;
struct TYPE_3__ {scalar_t__ device; int dev; } ;




 int VAR_0 ;

 int VAR_1 ;



 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int const) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,char*,...) ;
 TYPE_2__ VAR_7 ;
 int FUNC_5 (TYPE_1__*,int ,int*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_7(void)
{
 u16 VAR_8;
 u8 VAR_9;
 int VAR_10 = 0;
 static const int VAR_11[4] = { 0, 16, 32, 64 };
 unsigned int VAR_12 = 0;

 if (VAR_4 == 1)
  return 0;

 FUNC_5(VAR_7.bridge_dev,
        VAR_0, &VAR_8);

 if (VAR_7.bridge_dev->device == VAR_5 ||
     VAR_7.bridge_dev->device == VAR_6) {
  switch (VAR_8 & VAR_1) {
  case 140:
   VAR_12 = FUNC_2(512);
   break;
  case 141:
   VAR_12 = FUNC_3(1);
   break;
  case 139:
   VAR_12 = FUNC_3(8);
   break;
  case 142:
   VAR_9 = FUNC_6(VAR_7.registers+VAR_2);
   VAR_12 = (FUNC_1(VAR_9) + 1) *
     FUNC_3(VAR_11[FUNC_0(VAR_9)]);
   VAR_10 = 1;
   break;
  default:
   VAR_12 = 0;
   break;
  }
 } else {
  switch (VAR_8 & VAR_3) {
  case 137:
   VAR_12 = FUNC_3(1);
   break;
  case 135:
   VAR_12 = FUNC_3(4);
   break;
  case 134:
   VAR_12 = FUNC_3(8);
   break;
  case 138:
   VAR_12 = FUNC_3(16);
   break;
  case 136:
   VAR_12 = FUNC_3(32);
   break;
  case 133:
   VAR_12 = FUNC_3(48);
   break;
  case 132:
   VAR_12 = FUNC_3(64);
   break;
  case 144:
   VAR_12 = FUNC_3(128);
   break;
  case 143:
   VAR_12 = FUNC_3(256);
   break;
  case 128:
   VAR_12 = FUNC_3(96);
   break;
  case 131:
   VAR_12 = FUNC_3(160);
   break;
  case 130:
   VAR_12 = FUNC_3(224);
   break;
  case 129:
   VAR_12 = FUNC_3(352);
   break;
  default:
   VAR_12 = 0;
   break;
  }
 }

 if (VAR_12 > 0) {
  FUNC_4(&VAR_7.bridge_dev->dev, "detected %dK %s memory\n",
         VAR_12 / FUNC_2(1), VAR_10 ? "local" : "stolen");
 } else {
  FUNC_4(&VAR_7.bridge_dev->dev,
         "no pre-allocated video memory detected\n");
  VAR_12 = 0;
 }

 return VAR_12;
}
