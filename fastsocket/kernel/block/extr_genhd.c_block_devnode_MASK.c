
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {char* (* devnode ) (struct gendisk*,int *) ;} ;
struct device {int dummy; } ;
typedef int mode_t ;


 struct gendisk* FUNC_0 (struct device*) ;
 char* FUNC_1 (struct gendisk*,int *) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_0, mode_t *VAR_1)
{
 struct gendisk *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->devnode)
  return VAR_2->devnode(VAR_2, VAR_1);
 return ((void*)0);
}
