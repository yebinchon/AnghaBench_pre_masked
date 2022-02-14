
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_driver {struct ssb_device_id* id_table; } ;
struct ssb_device_id {scalar_t__ revision; scalar_t__ coreid; scalar_t__ vendor; } ;
struct ssb_device {int id; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct ssb_device* FUNC_0 (struct device*) ;
 struct ssb_driver* FUNC_1 (struct device_driver*) ;
 scalar_t__ FUNC_2 (struct ssb_device_id const*,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct ssb_device *VAR_2 = FUNC_0(VAR_0);
 struct ssb_driver *VAR_3 = FUNC_1(VAR_1);
 const struct ssb_device_id *VAR_4;

 for (VAR_4 = VAR_3->id_table;
      VAR_4->vendor || VAR_4->coreid || VAR_4->revision;
      VAR_4++) {
  if (FUNC_2(VAR_4, &VAR_2->id))
   return 1;
 }

 return 0;
}
