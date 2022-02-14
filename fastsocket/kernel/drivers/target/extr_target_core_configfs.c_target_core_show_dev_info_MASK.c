
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_subsystem_api {int (* show_configfs_dev_params ) (struct se_device*,char*) ;} ;
struct se_device {struct se_subsystem_api* transport; } ;
typedef int ssize_t ;


 int FUNC_0 (struct se_device*,char*) ;
 int FUNC_1 (struct se_device*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_2(void *VAR_0, char *VAR_1)
{
 struct se_device *VAR_2 = VAR_0;
 struct se_subsystem_api *VAR_3 = VAR_2->transport;
 int VAR_4 = 0;
 ssize_t VAR_5 = 0;

 FUNC_1(VAR_2, VAR_1, &VAR_4);
 VAR_5 += VAR_4;
 VAR_5 += VAR_3->show_configfs_dev_params(VAR_2, VAR_1+VAR_5);
 return VAR_5;
}
