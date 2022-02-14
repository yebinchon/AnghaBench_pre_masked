
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* suspend ) (TYPE_1__*) ;} ;
struct nomadik_nand_host {TYPE_1__ mtd; } ;
struct device {int dummy; } ;


 struct nomadik_nand_host* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct nomadik_nand_host *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;
 if (VAR_1)
  VAR_2 = VAR_1->mtd.suspend(&VAR_1->mtd);
 return VAR_2;
}
