
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int (* button ) (void*,unsigned int,int ) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*,unsigned int,int ) ;

__attribute__((used)) static bool FUNC_2(unsigned VAR_1, uint16_t VAR_2)
{
   if (VAR_0 && VAR_0->button)
      return VAR_0->button((void*)FUNC_0(), VAR_1, VAR_2);
   return 0;
}
