
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int commands_outstanding; scalar_t__ vaddr; } ;
typedef TYPE_1__ ctlr_info_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(ctlr_info_t *VAR_2)
{
 unsigned long VAR_3
  = FUNC_1(VAR_2->vaddr + VAR_1);
 if(VAR_3 != VAR_0)
 {
  VAR_2->commands_outstanding--;



 }






 return ( VAR_3);

}
