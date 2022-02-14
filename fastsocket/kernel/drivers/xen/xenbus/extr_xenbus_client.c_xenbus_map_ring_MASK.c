
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int otherend_id; } ;
struct gnttab_map_grant_ref {unsigned long host_addr; int ref; scalar_t__ status; int handle; int dom; int flags; } ;
typedef int grant_handle_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,struct gnttab_map_grant_ref*,int) ;
 int FUNC_2 (struct xenbus_device*,scalar_t__,char*,int,int ) ;

int FUNC_3(struct xenbus_device *VAR_3, int VAR_4,
      grant_handle_t *VAR_5, void *VAR_6)
{
 struct gnttab_map_grant_ref VAR_7 = {
  .host_addr = (unsigned long)VAR_6,
  .flags = VAR_0,
  .ref = VAR_4,
  .dom = VAR_3->otherend_id,
 };

 if (FUNC_1(VAR_2, &VAR_7, 1))
  FUNC_0();

 if (VAR_7.status != VAR_1) {
  FUNC_2(VAR_3, VAR_7.status,
     "mapping in shared page %d from domain %d",
     VAR_4, VAR_3->otherend_id);
 } else
  *VAR_5 = VAR_7.handle;

 return VAR_7.status;
}
