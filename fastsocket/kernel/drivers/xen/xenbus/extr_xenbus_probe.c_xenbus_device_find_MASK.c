
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dummy; } ;
struct xb_find_info {char const* nodename; struct xenbus_device* dev; } ;
struct bus_type {int dummy; } ;


 int FUNC_0 (struct bus_type*,int *,struct xb_find_info*,int ) ;
 int VAR_0 ;

struct xenbus_device *FUNC_1(const char *VAR_1,
      struct bus_type *VAR_2)
{
 struct xb_find_info VAR_3 = { .dev = ((void*)0), .nodename = VAR_1 };

 FUNC_0(VAR_2, ((void*)0), &VAR_3, VAR_0);
 return VAR_3.dev;
}
