
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vaddr; } ;
typedef TYPE_1__ ctlr_info_t ;


 scalar_t__ VAR_0 ;
 long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(ctlr_info_t *VAR_1)
{
 long VAR_2
  = FUNC_0(VAR_1->vaddr + VAR_0);


 if( VAR_2 == 0xffffffff)
  return 0;



 FUNC_1(0, VAR_1->vaddr + VAR_0);

 return ((unsigned long) VAR_2);
}
