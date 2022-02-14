
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_driver {int read_otherend_details; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xenbus_driver*) ;
 int VAR_1 ;
 int FUNC_1 (struct xenbus_driver*,int *,struct module*,char const*) ;

int FUNC_2(struct xenbus_driver *VAR_2,
          struct module *VAR_3, const char *VAR_4)
{
 int VAR_5;

 VAR_2->read_otherend_details = VAR_0;

 VAR_5 = FUNC_1(VAR_2, &VAR_1,
         VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;


 FUNC_0(VAR_2);

 return 0;
}
