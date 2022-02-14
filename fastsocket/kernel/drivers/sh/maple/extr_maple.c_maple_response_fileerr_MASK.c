
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device {int unit; int port; int dev; int (* fileerr_handler ) (struct maple_device*,void*) ;} ;


 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (struct maple_device*,void*) ;

__attribute__((used)) static void FUNC_2(struct maple_device *VAR_0, void *VAR_1)
{
 if (VAR_0->fileerr_handler) {
  VAR_0->fileerr_handler(VAR_0, VAR_1);
  return;
 } else
  FUNC_0(&VAR_0->dev, "device at (%d, %d) reports"
   "file error 0x%X\n", VAR_0->port, VAR_0->unit,
   ((int *)VAR_1)[1]);
}
