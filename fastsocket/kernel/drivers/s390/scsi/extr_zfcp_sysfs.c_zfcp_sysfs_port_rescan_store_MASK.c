
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int scan_work; int work_queue; int status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct zfcp_adapter* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct zfcp_adapter *VAR_6 = FUNC_1(VAR_2);

 if (FUNC_0(&VAR_6->status) & VAR_1)
  return -VAR_0;


 FUNC_3(VAR_6->work_queue, &VAR_6->scan_work);
 FUNC_2(&VAR_6->scan_work);

 return (ssize_t) VAR_5;
}
