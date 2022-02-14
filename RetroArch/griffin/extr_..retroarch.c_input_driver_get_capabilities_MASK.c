
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int (* get_capabilities ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

uint64_t FUNC_1(void)
{
   if (!VAR_0 || !VAR_0->get_capabilities)
      return 0;
   return VAR_0->get_capabilities(VAR_1);
}
