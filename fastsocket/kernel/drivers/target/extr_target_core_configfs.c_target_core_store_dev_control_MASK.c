
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_subsystem_api {int (* set_configfs_dev_params ) (struct se_device*,char const*,size_t) ;} ;
struct se_device {struct se_subsystem_api* transport; } ;
typedef int ssize_t ;


 int FUNC_0 (struct se_device*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(
 void *VAR_0,
 const char *VAR_1,
 size_t VAR_2)
{
 struct se_device *VAR_3 = VAR_0;
 struct se_subsystem_api *VAR_4 = VAR_3->transport;

 return VAR_4->set_configfs_dev_params(VAR_3, VAR_1, VAR_2);
}
