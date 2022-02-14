
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_driver {int driver; int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;

void FUNC_3(struct hv_driver *VAR_0)
{
 FUNC_1("unregistering driver %s\n", VAR_0->name);

 if (!FUNC_2())
  FUNC_0(&VAR_0->driver);
}
