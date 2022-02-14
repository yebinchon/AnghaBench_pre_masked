
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_devdata {int ipath_eep_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipath_devdata*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ipath_devdata *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;

 if (VAR_3 > 15 || !((1 << VAR_3) & VAR_1))
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_2->ipath_eep_lock);
 if (!VAR_5) {
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  FUNC_2(&VAR_2->ipath_eep_lock);
 }







 return VAR_5;
}
