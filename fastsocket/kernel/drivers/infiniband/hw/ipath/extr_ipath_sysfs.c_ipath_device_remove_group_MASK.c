
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_flags; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct device *VAR_7, struct ipath_devdata *VAR_8)
{
 FUNC_1(&VAR_7->kobj, &VAR_5);

 if (VAR_8->ipath_flags & VAR_0) {
  FUNC_1(&VAR_7->kobj, &VAR_6);
  FUNC_0(VAR_7, &VAR_2);
  FUNC_0(VAR_7, &VAR_3);
 }

 FUNC_1(&VAR_7->kobj, &VAR_1);

 FUNC_0(VAR_7, &VAR_4);
}
