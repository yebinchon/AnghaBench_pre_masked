
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath_bh {int retry_list; struct mddev* mddev; } ;
struct mpconf {int device_lock; int retry_list; } ;
struct mddev {int thread; struct mpconf* private; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4 (struct multipath_bh *VAR_0)
{
 unsigned long VAR_1;
 struct mddev *VAR_2 = VAR_0->mddev;
 struct mpconf *VAR_3 = VAR_2->private;

 FUNC_2(&VAR_3->device_lock, VAR_1);
 FUNC_0(&VAR_0->retry_list, &VAR_3->retry_list);
 FUNC_3(&VAR_3->device_lock, VAR_1);
 FUNC_1(VAR_2->thread);
}
