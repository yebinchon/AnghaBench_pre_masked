
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* query_pad ) (void*,unsigned int) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(unsigned VAR_1)
{
   if (VAR_0 && VAR_0->query_pad)
      return VAR_0->query_pad((void*)FUNC_0(), VAR_1);
   return 0;
}
