
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct hpsb_protocol_driver {struct device_driver driver; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct device_driver*,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_3(struct hpsb_protocol_driver *VAR_1)
{
 struct device_driver *VAR_2 = &VAR_1->driver;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (FUNC_2(VAR_2, VAR_0[VAR_3]))
   goto fail;
 return;
fail:
 FUNC_1("Failed to add sysfs attribute");
}
