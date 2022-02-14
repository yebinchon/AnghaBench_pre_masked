
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_bus_info {int width; int func; void* speed; int type; } ;
struct e1000_hw {struct e1000_bus_info bus; } ;
typedef scalar_t__ s32 ;
typedef enum e1000_bus_width { ____Placeholder_e1000_bus_width } e1000_bus_width ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 int FUNC_1 (int ) ;

s32 FUNC_2(struct e1000_hw *VAR_12)
{
 struct e1000_bus_info *VAR_13 = &VAR_12->bus;
 s32 VAR_14;
 u32 VAR_15;
 u16 VAR_16;

 VAR_13->type = VAR_10;

 VAR_14 = FUNC_0(VAR_12,
     VAR_3,
     &VAR_16);
 if (VAR_14) {
  VAR_13->width = VAR_11;
  VAR_13->speed = VAR_9;
 } else {
  switch (VAR_16 & VAR_4) {
  case 129:
   VAR_13->speed = VAR_7;
   break;
  case 128:
   VAR_13->speed = VAR_8;
   break;
  default:
   VAR_13->speed = VAR_9;
   break;
  }

  VAR_13->width = (enum e1000_bus_width)((VAR_16 &
           VAR_5) >>
           VAR_6);
 }

 VAR_15 = FUNC_1(VAR_0);
 VAR_13->func = (VAR_15 & VAR_1) >> VAR_2;

 return 0;
}
