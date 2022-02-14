
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {unsigned int state; int size8; int gendisk; scalar_t__ config_valid; } ;
 int FUNC_0 (struct rsxx_cardinfo*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct rsxx_cardinfo*,int*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct rsxx_cardinfo *VAR_0,
         unsigned int VAR_1)
{
 int VAR_2;

 FUNC_3(FUNC_0(VAR_0),
  "card state change detected.(%s -> %s)\n",
  FUNC_4(VAR_0->state),
  FUNC_4(VAR_1));

 VAR_0->state = VAR_1;


 if (!VAR_0->config_valid)
  return;

 switch (VAR_1) {
 case 132:
  FUNC_1(FUNC_0(VAR_0),
   "Hardware has entered read-only mode!\n");




 case 133:
  VAR_2 = FUNC_5(VAR_0, &VAR_0->size8);
  if (VAR_2)
   FUNC_2(FUNC_0(VAR_0),
    "Failed attaching DMA devices\n");

  if (VAR_0->config_valid)
   FUNC_6(VAR_0->gendisk, VAR_0->size8 >> 9);
  break;

 case 135:
  FUNC_1(FUNC_0(VAR_0),
   "Hardware Fault reported!\n");



 case 131:
 case 129:
 case 134:
 case 128:
 case 130:




 case 136:
  FUNC_6(VAR_0->gendisk, 0);
  break;
 }
}
