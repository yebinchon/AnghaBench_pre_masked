
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vaddr; } ;
typedef TYPE_1__ ctlr_info_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(ctlr_info_t *VAR_3)
{
 unsigned long VAR_4 =
  FUNC_0(VAR_3->vaddr + VAR_2);

 if( VAR_4 & VAR_1)
  return VAR_0;
 return 0 ;
}
