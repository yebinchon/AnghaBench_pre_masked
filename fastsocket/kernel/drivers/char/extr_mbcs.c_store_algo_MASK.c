
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbcs_soft {int algo_done; int algo_queue; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cx_dev {struct mbcs_soft* soft; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mbcs_soft*) ;
 int FUNC_2 (char const*,int *,int ) ;
 struct cx_dev* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 struct cx_dev *VAR_6 = FUNC_3(VAR_1);
 struct mbcs_soft *VAR_7 = VAR_6->soft;

 if (VAR_4 <= 0)
  return 0;

 VAR_5 = FUNC_2(VAR_3, ((void*)0), 0);

 if (VAR_5 == 1) {
  FUNC_1(VAR_7);
  if (FUNC_4(VAR_7->algo_queue,
     FUNC_0(&VAR_7->algo_done)))
   return -VAR_0;
 }

 return VAR_4;
}
