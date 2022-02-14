
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mbcs_soft {scalar_t__ debug_addr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cx_dev {struct mbcs_soft* soft; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,int) ;
 struct cx_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct cx_dev *VAR_3 = FUNC_2(VAR_0);
 struct mbcs_soft *VAR_4 = VAR_3->soft;
 uint64_t VAR_5;





 VAR_5 = *(uint64_t *) VAR_4->debug_addr;

 return FUNC_1(VAR_2, "0x%x 0x%x\n",
         FUNC_3(VAR_5), FUNC_0(VAR_5));
}
