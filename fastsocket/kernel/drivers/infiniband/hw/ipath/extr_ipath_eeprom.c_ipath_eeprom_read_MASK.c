
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_devdata {int ipath_eep_lock; } ;


 int FUNC_0 (struct ipath_devdata*,int ,void*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ipath_devdata *VAR_0, u8 VAR_1,
   void *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_0->ipath_eep_lock);
 if (!VAR_4) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_2(&VAR_0->ipath_eep_lock);
 }

 return VAR_4;
}
