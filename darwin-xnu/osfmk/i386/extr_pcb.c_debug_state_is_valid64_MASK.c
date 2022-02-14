
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dr7; scalar_t__ dr0; scalar_t__ dr1; scalar_t__ dr2; scalar_t__ dr3; } ;
typedef TYPE_1__ x86_debug_state64_t ;
typedef int uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

boolean_t
FUNC_1(x86_debug_state64_t *VAR_3)
{
 if (!FUNC_0((uint32_t *)&VAR_3->dr7))
  return VAR_0;





 if (VAR_3->dr7 & 0x1)
  if (VAR_3->dr0 >= VAR_2)
   return VAR_0;

 if (VAR_3->dr7 & (0x1<<2))
  if (VAR_3->dr1 >= VAR_2)
   return VAR_0;

 if (VAR_3->dr7 & (0x1<<4))
  if (VAR_3->dr2 >= VAR_2)
   return VAR_0;

 if (VAR_3->dr7 & (0x1<<6))
  if (VAR_3->dr3 >= VAR_2)
   return VAR_0;


 VAR_3->dr7 &= 0xffffffffULL;

 return VAR_1;
}
