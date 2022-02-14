
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct device {int dummy; } ;
struct sdio_func {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct device*,char*,struct sdio_func*,int) ;
 int FUNC_1 (int,struct device*,char*,struct sdio_func*) ;
 int FUNC_2 (int,struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static
int FUNC_11(struct sdio_func *VAR_5)
{
 u64 VAR_6;
 int VAR_7;
 struct device *VAR_8 = &VAR_5->dev;

 FUNC_1(3, VAR_8, "(func %p)\n", VAR_5);



 VAR_6 = FUNC_4() + VAR_4 * VAR_2;
 VAR_7 = -VAR_0;
 while (VAR_7 != 0 && FUNC_10(FUNC_4(), VAR_6)) {
  FUNC_6(VAR_5);
  VAR_7 = FUNC_8(VAR_5);
  if (0 == VAR_7) {
   FUNC_9(VAR_5);
   FUNC_2(2, VAR_8, "SDIO function enabled\n");
   goto function_enabled;
  }
  FUNC_2(2, VAR_8, "SDIO function failed to enable: %d\n", VAR_7);
  FUNC_7(VAR_5);
  FUNC_9(VAR_5);
  FUNC_5(VAR_3);
 }


 if (VAR_7 == -VAR_1) {
  FUNC_3(VAR_8, "Can't enable WiMAX function; "
   " has the function been enabled?\n");
  VAR_7 = -VAR_0;
 }
function_enabled:
 FUNC_0(3, VAR_8, "(func %p) = %d\n", VAR_5, VAR_7);
 return VAR_7;
}
