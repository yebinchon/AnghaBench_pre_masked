
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int otherend_id; } ;
struct vm_struct {unsigned long phys_addr; void* addr; } ;
struct gnttab_map_grant_ref {int ref; unsigned long host_addr; scalar_t__ status; scalar_t__ handle; int dom; int flags; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct gnttab_map_grant_ref*,int) ;
 int VAR_4 ;
 struct vm_struct* FUNC_2 (int ) ;
 int FUNC_3 (struct vm_struct*) ;
 int FUNC_4 (struct xenbus_device*,scalar_t__,char*,int,int ) ;

int FUNC_5(struct xenbus_device *VAR_5, int VAR_6, void **VAR_7)
{
 struct gnttab_map_grant_ref VAR_8 = {
  .flags = VAR_1,
  .ref = VAR_6,
  .dom = VAR_5->otherend_id,
 };
 struct vm_struct *VAR_9;

 *VAR_7 = ((void*)0);

 VAR_9 = FUNC_2(VAR_4);
 if (!VAR_9)
  return -VAR_0;

 VAR_8.host_addr = (unsigned long)VAR_9->addr;

 if (FUNC_1(VAR_3, &VAR_8, 1))
  FUNC_0();

 if (VAR_8.status != VAR_2) {
  FUNC_3(VAR_9);
  FUNC_4(VAR_5, VAR_8.status,
     "mapping in shared page %d from domain %d",
     VAR_6, VAR_5->otherend_id);
  return VAR_8.status;
 }


 VAR_9->phys_addr = (unsigned long)VAR_8.handle;

 *VAR_7 = VAR_9->addr;
 return 0;
}
