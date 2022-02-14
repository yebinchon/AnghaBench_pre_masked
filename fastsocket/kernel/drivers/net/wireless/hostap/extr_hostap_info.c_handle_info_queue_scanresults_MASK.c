
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int host_roaming; scalar_t__ iw_mode; int preferred_ap; } ;
typedef TYPE_1__ local_info_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(local_info_t *VAR_1)
{
 if (VAR_1->host_roaming == 1 && VAR_1->iw_mode == VAR_0)
  FUNC_1(VAR_1);

 if (VAR_1->host_roaming == 2 && VAR_1->iw_mode == VAR_0 &&
     !FUNC_0(VAR_1->preferred_ap)) {







  FUNC_1(VAR_1);
 }
}
