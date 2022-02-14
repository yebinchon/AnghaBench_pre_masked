
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct aoedev* private_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aoedev {int flags; scalar_t__ nopen; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gendisk* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
      struct device_attribute *VAR_4, char *VAR_5)
{
 struct gendisk *VAR_6 = FUNC_0(VAR_3);
 struct aoedev *VAR_7 = VAR_6->private_data;

 return FUNC_1(VAR_5, VAR_2,
   "%s%s\n",
   (VAR_7->flags & VAR_1) ? "up" : "down",
   (VAR_7->flags & VAR_0) ? ",kickme" :
   (VAR_7->nopen && !(VAR_7->flags & VAR_1)) ? ",closewait" : "");

}
