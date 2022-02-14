
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct mtd_chip_driver {int module; struct mtd_info* (* probe ) (struct map_info*) ;} ;
struct map_info {int dummy; } ;


 struct mtd_chip_driver* FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 struct mtd_info* FUNC_3 (struct map_info*) ;

struct mtd_info *FUNC_4(const char *VAR_0, struct map_info *VAR_1)
{
 struct mtd_chip_driver *VAR_2;
 struct mtd_info *VAR_3;

 VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2 && !FUNC_2("%s", VAR_0))
  VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return ((void*)0);

 VAR_3 = VAR_2->probe(VAR_1);






 FUNC_1(VAR_2->module);

 if (VAR_3)
  return VAR_3;

 return ((void*)0);
}
