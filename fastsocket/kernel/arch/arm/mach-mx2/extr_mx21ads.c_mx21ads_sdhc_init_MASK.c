
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,char*,void*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, irq_handler_t VAR_2,
 void *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(FUNC_0(25), VAR_2,
  VAR_0, "mmc-detect", VAR_3);
 if (VAR_4)
  goto out;
 return 0;
out:
 return VAR_4;
}
