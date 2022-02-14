
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpages {scalar_t__ context_u; int context_ptr; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dpages *VAR_1)
{
 VAR_1->context_ptr += VAR_0 - VAR_1->context_u;
 VAR_1->context_u = 0;
}
