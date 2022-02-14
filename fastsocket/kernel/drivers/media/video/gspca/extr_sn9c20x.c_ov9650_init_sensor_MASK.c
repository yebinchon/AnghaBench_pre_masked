
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sd {int hstart; int vstart; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_3__ {int val; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct gspca_dev*,int,int*) ;
 scalar_t__ FUNC_3 (struct gspca_dev*,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 struct sd *VAR_6 = (struct sd *) VAR_3;

 if (FUNC_2(VAR_3, 0x1c, &VAR_5) < 0)
  return -VAR_0;

 if (VAR_5 != 0x7fa2) {
  FUNC_1("sensor id for ov9650 doesn't match (0x%04x)", VAR_5);
  return -VAR_1;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (FUNC_3(VAR_3, VAR_2[VAR_4].reg,
    VAR_2[VAR_4].val) < 0) {
   FUNC_1("OV9650 sensor initialization failed");
   return -VAR_1;
  }
 }
 VAR_6->hstart = 1;
 VAR_6->vstart = 7;
 return 0;
}
