
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_sdma_vl15_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ipath_devdata*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ipath_devdata*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct ipath_devdata *VAR_1 = (struct ipath_devdata *)VAR_0;

 if (FUNC_0(&VAR_1->ipath_sdma_vl15_count) != 0) {
  FUNC_2("vl15 watchdog timeout - clearing\n");
  FUNC_1(VAR_1, 1);
  FUNC_3(VAR_1);
 } else {
  FUNC_2("vl15 watchdog timeout - "
     "condition already cleared\n");
 }
}
