
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (int ,int ,int ,char*,void*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, irq_handler_t VAR_3, void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(FUNC_0(29), VAR_3, VAR_1,
    "imx-mmc-detect", VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_0 + 28, "imx-mmc-ro");
 if (VAR_5) {
  FUNC_1(FUNC_0(29), VAR_4);
  return VAR_5;
 }

 FUNC_2(VAR_0 + 28);

 return 0;
}
