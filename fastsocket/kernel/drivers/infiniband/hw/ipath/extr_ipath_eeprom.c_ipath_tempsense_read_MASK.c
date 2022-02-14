
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_devdata {int ipath_eep_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipath_devdata*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ipath_devdata *VAR_2, u8 VAR_3)
{
 int VAR_4;

 if (VAR_3 > 7)
  return -VAR_0;


 if (!((1 << VAR_3) & VAR_1))
  return 0;

 VAR_4 = FUNC_1(&VAR_2->ipath_eep_lock);
 if (!VAR_4) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  FUNC_2(&VAR_2->ipath_eep_lock);
 }







 return VAR_4;
}
