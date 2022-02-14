
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dummy; } ;
struct gnttab_unmap_grant_ref {unsigned long host_addr; scalar_t__ status; int handle; } ;
typedef int grant_handle_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct gnttab_unmap_grant_ref*,int) ;
 int FUNC_2 (struct xenbus_device*,scalar_t__,char*,int ,scalar_t__) ;

int FUNC_3(struct xenbus_device *VAR_2,
        grant_handle_t VAR_3, void *VAR_4)
{
 struct gnttab_unmap_grant_ref VAR_5 = {
  .host_addr = (unsigned long)VAR_4,
  .handle = VAR_3,
 };

 if (FUNC_1(VAR_1, &VAR_5, 1))
  FUNC_0();

 if (VAR_5.status != VAR_0)
  FUNC_2(VAR_2, VAR_5.status,
     "unmapping page at handle %d error %d",
     VAR_3, VAR_5.status);

 return VAR_5.status;
}
