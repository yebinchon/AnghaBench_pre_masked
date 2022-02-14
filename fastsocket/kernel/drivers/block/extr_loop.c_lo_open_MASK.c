
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop_device {int lo_ctl_mutex; int lo_refcnt; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct loop_device* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_0, fmode_t VAR_1)
{
 struct loop_device *VAR_2 = VAR_0->bd_disk->private_data;

 FUNC_0(&VAR_2->lo_ctl_mutex);
 VAR_2->lo_refcnt++;
 FUNC_1(&VAR_2->lo_ctl_mutex);

 return 0;
}
