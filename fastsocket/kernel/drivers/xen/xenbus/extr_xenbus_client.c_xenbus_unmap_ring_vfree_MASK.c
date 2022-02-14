
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dummy; } ;
struct vm_struct {void* addr; scalar_t__ phys_addr; struct vm_struct* next; } ;
struct gnttab_unmap_grant_ref {unsigned long host_addr; int status; scalar_t__ handle; } ;
typedef int int16_t ;
typedef scalar_t__ grant_handle_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct gnttab_unmap_grant_ref*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vm_struct* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct vm_struct*) ;
 int FUNC_5 (struct xenbus_device*,int,char*,void*,...) ;

int FUNC_6(struct xenbus_device *VAR_6, void *VAR_7)
{
 struct vm_struct *VAR_8;
 struct gnttab_unmap_grant_ref VAR_9 = {
  .host_addr = (unsigned long)VAR_7,
 };







 FUNC_2(&VAR_5);
 for (VAR_8 = VAR_4; VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {
  if (VAR_8->addr == VAR_7)
   break;
 }
 FUNC_3(&VAR_5);

 if (!VAR_8) {
  FUNC_5(VAR_6, -VAR_0,
     "can't find mapped virtual address %p", VAR_7);
  return VAR_1;
 }

 VAR_9.handle = (grant_handle_t)VAR_8->phys_addr;

 if (FUNC_1(VAR_3, &VAR_9, 1))
  FUNC_0();

 if (VAR_9.status == VAR_2)
  FUNC_4(VAR_8);
 else
  FUNC_5(VAR_6, VAR_9.status,
     "unmapping page at handle %d error %d",
     (int16_t)VAR_8->phys_addr, VAR_9.status);

 return VAR_9.status;
}
