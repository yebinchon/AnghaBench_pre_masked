
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int state; int netdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 struct qlcnic_adapter* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;
 unsigned long FUNC_6 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_1(VAR_3);
 unsigned long VAR_8;
 int VAR_9;

 if (FUNC_5(VAR_5, 2, &VAR_8))
  return -VAR_0;

 if (VAR_8 == FUNC_6(VAR_2, &VAR_7->state))
  return VAR_6;

 FUNC_3();
 VAR_9 = FUNC_2(VAR_7->netdev, VAR_1);
 FUNC_4();

 FUNC_0(VAR_2, &VAR_7->state);

 if (!VAR_9)
  VAR_9 = VAR_6;

 return VAR_9;
}
