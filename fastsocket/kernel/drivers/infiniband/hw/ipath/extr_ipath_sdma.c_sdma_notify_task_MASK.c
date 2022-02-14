
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_sdma_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipath_devdata*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct ipath_devdata *VAR_2 = (struct ipath_devdata *)VAR_1;

 if (!FUNC_1(VAR_0, &VAR_2->ipath_sdma_status))
  FUNC_0(VAR_2);
}
