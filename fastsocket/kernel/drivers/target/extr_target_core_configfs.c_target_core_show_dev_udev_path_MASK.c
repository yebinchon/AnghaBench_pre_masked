
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dev_flags; char* udev_path; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(void *VAR_2, char *VAR_3)
{
 struct se_device *VAR_4 = VAR_2;

 if (!(VAR_4->dev_flags & VAR_0))
  return 0;

 return FUNC_0(VAR_3, VAR_1, "%s\n", VAR_4->udev_path);
}
