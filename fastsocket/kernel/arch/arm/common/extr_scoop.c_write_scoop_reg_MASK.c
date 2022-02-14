
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scoop_dev {scalar_t__ base; } ;
struct device {int dummy; } ;


 struct scoop_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned short,scalar_t__) ;

void FUNC_2(struct device *VAR_0, unsigned short VAR_1, unsigned short VAR_2)
{
 struct scoop_dev *VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_2, VAR_3->base + VAR_1);
}
