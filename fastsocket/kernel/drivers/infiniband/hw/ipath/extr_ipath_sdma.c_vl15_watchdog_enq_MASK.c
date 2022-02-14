
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct ipath_devdata {TYPE_1__ ipath_sdma_vl15_timer; int ipath_sdma_vl15_count; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct ipath_devdata *VAR_2)
{

 if (FUNC_1(&VAR_2->ipath_sdma_vl15_count) == 1) {
  unsigned long VAR_3 = (VAR_0 + 19) / 20;
  VAR_2->ipath_sdma_vl15_timer.expires = VAR_1 + VAR_3;
  FUNC_0(&VAR_2->ipath_sdma_vl15_timer);
 }
}
