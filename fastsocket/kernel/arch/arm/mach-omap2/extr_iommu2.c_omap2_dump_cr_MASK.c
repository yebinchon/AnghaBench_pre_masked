
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu {int dummy; } ;
struct cr_regs {int cam; int ram; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct iommu *VAR_0, struct cr_regs *VAR_1, char *VAR_2)
{
 char *VAR_3 = VAR_2;


 VAR_3 += FUNC_0(VAR_3, "%08x %08x\n", VAR_1->cam, VAR_1->ram);

 return VAR_3 - VAR_2;
}
