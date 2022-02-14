
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_3, unsigned long VAR_4,
        void *VAR_5)
{
 struct device *VAR_6 = VAR_5;

 if (VAR_4 == VAR_0)
  FUNC_0(VAR_6, VAR_2);

 return VAR_1;
}
