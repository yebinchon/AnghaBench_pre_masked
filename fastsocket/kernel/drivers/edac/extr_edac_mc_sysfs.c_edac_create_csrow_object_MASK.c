
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct mem_ctl_info {struct kobject edac_mci_kobj; } ;
struct csrow_info {int nr_channels; struct kobject kobj; struct mem_ctl_info* mci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kobject*,int) ;
 struct kobject* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct kobject*,int *,struct kobject*,char*,int) ;
 int FUNC_3 (struct kobject*) ;
 int FUNC_4 (struct kobject*,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct kobject*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct mem_ctl_info *VAR_3,
     struct csrow_info *VAR_4, int VAR_5)
{
 struct kobject *VAR_6 = &VAR_3->edac_mci_kobj;
 struct kobject *VAR_7;
 int VAR_8;
 int VAR_9;


 FUNC_5(&VAR_4->kobj, 0, sizeof(VAR_4->kobj));
 VAR_4->mci = VAR_3;


 VAR_7 = FUNC_1(&VAR_3->edac_mci_kobj);
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  goto err_out;
 }


 VAR_9 = FUNC_2(&VAR_4->kobj, &VAR_2, VAR_6,
       "csrow%d", VAR_5);
 if (VAR_9)
  goto err_release_top_kobj;
 for (VAR_8 = 0; VAR_8 < VAR_4->nr_channels; VAR_8++) {
  VAR_9 = FUNC_0(&VAR_4->kobj, VAR_8);
  if (VAR_9) {

   FUNC_3(&VAR_4->kobj);
   goto err_out;
  }
 }
 FUNC_4(&VAR_4->kobj, VAR_1);
 return 0;


err_release_top_kobj:
 FUNC_3(&VAR_3->edac_mci_kobj);

err_out:
 return VAR_9;
}
