
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ reg; } ;
typedef TYPE_1__ sh_operand_info ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

int FUNC_0(int VAR_15,sh_operand_info *VAR_16)




{
   if((VAR_15 == VAR_2) && (VAR_16->type == VAR_3))
     return 1;
   if((VAR_15 == VAR_4) && (VAR_16->type == VAR_5))
     return 1;
   if((VAR_15 == VAR_6) && (VAR_16->type == VAR_7))
     return 1;
   if((VAR_15 == VAR_8) && (VAR_16->type == VAR_9))
     return 1;
   if((VAR_15 == VAR_10) && (VAR_16->type == VAR_11))
     return 1;
   if((VAR_15 == VAR_13) && (VAR_16->type == VAR_14))
     return 1;
   if((VAR_15 == VAR_1) && (VAR_16->type == VAR_0))
     return 1;
   if((VAR_15 == VAR_12) && (VAR_16->type == VAR_14) && (VAR_16->reg == 0))
     return 1;

   return 0;
}
