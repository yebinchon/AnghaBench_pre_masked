
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int (* resume ) (struct mtd_info*) ;} ;
struct device {int dummy; } ;


 struct mtd_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct mtd_info *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 && VAR_1->resume)
  VAR_1->resume(VAR_1);
 return 0;
}
