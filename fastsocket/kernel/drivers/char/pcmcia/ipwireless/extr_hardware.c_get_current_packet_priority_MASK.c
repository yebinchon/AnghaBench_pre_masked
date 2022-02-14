
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_hardware {scalar_t__ initializing; scalar_t__ to_setup; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ipw_hardware *VAR_2)
{






 return (VAR_2->to_setup || VAR_2->initializing
   ? VAR_1 + 1 : VAR_0);
}
