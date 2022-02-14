
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_flags; int lo_ctl_mutex; scalar_t__ lo_refcnt; } ;
struct gendisk {struct loop_device* private_data; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (struct loop_device*,int *) ;
 int FUNC_1 (struct loop_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct loop_device *VAR_3 = VAR_1->private_data;
 int VAR_4;

 FUNC_2(&VAR_3->lo_ctl_mutex);

 if (--VAR_3->lo_refcnt)
  goto out;

 if (VAR_3->lo_flags & VAR_0) {




  VAR_4 = FUNC_0(VAR_3, ((void*)0));
  if (!VAR_4)
   goto out_unlocked;
 } else {




  FUNC_1(VAR_3);
 }

out:
 FUNC_3(&VAR_3->lo_ctl_mutex);
out_unlocked:
 return 0;
}
