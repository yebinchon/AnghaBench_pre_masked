
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; int width; void* speed; } ;
struct ixgb_hw {TYPE_1__ bus; } ;


 int FUNC_0 (struct ixgb_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_1(struct ixgb_hw *VAR_14)
{
 u32 VAR_15;

 VAR_15 = FUNC_0(VAR_14, VAR_4);

 VAR_14->bus.type = (VAR_15 & VAR_1) ?
  VAR_11 : VAR_10;

 if (VAR_14->bus.type == VAR_10) {
  VAR_14->bus.speed = (VAR_15 & VAR_3) ?
   VAR_8 : VAR_7;
 } else {
  switch (VAR_15 & VAR_2) {
  case 128:
   VAR_14->bus.speed = VAR_8;
   break;
  case 130:
   VAR_14->bus.speed = VAR_5;
   break;
  case 129:
   VAR_14->bus.speed = VAR_6;
   break;
  default:
   VAR_14->bus.speed = VAR_9;
   break;
  }
 }

 VAR_14->bus.width = (VAR_15 & VAR_0) ?
  VAR_13 : VAR_12;

 return;
}
