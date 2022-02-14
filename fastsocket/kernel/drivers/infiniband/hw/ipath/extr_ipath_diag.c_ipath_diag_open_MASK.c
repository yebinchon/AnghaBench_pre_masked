
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {int ipath_flags; TYPE_1__* pcidev; int ipath_kregbase; } ;
struct inode {int dummy; } ;
struct file {struct ipath_devdata* private_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct inode*) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 struct ipath_devdata* FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_7, struct file *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_7) - VAR_2;
 struct ipath_devdata *VAR_10;
 int VAR_11;

 FUNC_3(&VAR_6);

 if (VAR_5) {
  VAR_11 = -VAR_0;
  goto bail;
 }

 VAR_10 = FUNC_2(VAR_9);

 if (VAR_10 == ((void*)0) || !(VAR_10->ipath_flags & VAR_3) ||
     !VAR_10->ipath_kregbase) {
  VAR_11 = -VAR_1;
  goto bail;
 }

 VAR_8->private_data = VAR_10;
 VAR_5 = -2;
 VAR_4 = 0;
 VAR_11 = 0;



 FUNC_1(&VAR_10->pcidev->dev);

bail:
 FUNC_4(&VAR_6);

 return VAR_11;
}
