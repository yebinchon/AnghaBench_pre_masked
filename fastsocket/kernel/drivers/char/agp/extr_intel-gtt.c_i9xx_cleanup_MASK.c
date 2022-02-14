
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ start; } ;
struct TYPE_4__ {scalar_t__ resource_valid; TYPE_1__ ifp_resource; scalar_t__ i9xx_flush_page; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_0.i9xx_flush_page)
  FUNC_0(VAR_0.i9xx_flush_page);
 if (VAR_0.resource_valid)
  FUNC_1(&VAR_0.ifp_resource);
 VAR_0.ifp_resource.start = 0;
 VAR_0.resource_valid = 0;
}
