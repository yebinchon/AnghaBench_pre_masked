
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_sdma_vl15_timer; int ipath_sdma_vl15_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ipath_devdata *VAR_2)
{

 if (FUNC_0(&VAR_2->ipath_sdma_vl15_count) != 0) {
  unsigned long VAR_3 = (VAR_0 + 19) / 20;
  FUNC_2(&VAR_2->ipath_sdma_vl15_timer, VAR_1 + VAR_3);
 } else {
  FUNC_1(&VAR_2->ipath_sdma_vl15_timer);
 }
}
