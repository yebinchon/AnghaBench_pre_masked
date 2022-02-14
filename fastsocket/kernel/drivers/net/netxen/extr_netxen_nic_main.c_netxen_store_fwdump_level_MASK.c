
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long md_capture_mask; } ;
struct netxen_adapter {TYPE_2__ mdump; TYPE_1__* pdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (unsigned long*) ;
 size_t VAR_0 ;
 unsigned long* VAR_1 ;
 struct netxen_adapter* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (char const*,int *,int) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 unsigned long int VAR_7;
 struct netxen_adapter *VAR_8 = FUNC_1(VAR_2);

 VAR_7 = FUNC_5(VAR_4, ((void*)0), 16);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (VAR_7 == VAR_1[VAR_6]) {
   FUNC_3();
   VAR_8->mdump.md_capture_mask = VAR_7;
   FUNC_4();
   FUNC_2(&VAR_8->pdev->dev,
    "Driver mask changed to: 0x%x\n",
    VAR_8->mdump.md_capture_mask);
   return VAR_5;
  }
 }
 FUNC_2(VAR_2, "Invalid Dump Level: 0x%lx\n",
  (unsigned long int) VAR_7);
 return -VAR_0;
}
