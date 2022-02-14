
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
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(struct device *VAR_6, struct ipath_devdata *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_2(&VAR_6->kobj, &VAR_1);
 if (VAR_8)
  goto bail;

 VAR_8 = FUNC_2(&VAR_6->kobj, &VAR_4);
 if (VAR_8)
  goto bail_attrs;

 if (VAR_7->ipath_flags & VAR_0) {
  VAR_8 = FUNC_0(VAR_6, &VAR_2);
  if (VAR_8)
   goto bail_counter;
  VAR_8 = FUNC_0(VAR_6, &VAR_3);
  if (VAR_8)
   goto bail_idle;

  VAR_8 = FUNC_2(&VAR_6->kobj, &VAR_5);
  if (VAR_8)
   goto bail_max;
 }

 return 0;

bail_max:
 FUNC_1(VAR_6, &VAR_3);
bail_idle:
 FUNC_1(VAR_6, &VAR_2);
bail_counter:
 FUNC_3(&VAR_6->kobj, &VAR_4);
bail_attrs:
 FUNC_3(&VAR_6->kobj, &VAR_1);
bail:
 return VAR_8;
}
