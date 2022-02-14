
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sd {int vstart; scalar_t__ hstart; } ;
struct gspca_dev {int ctrl_dis; } ;
struct TYPE_3__ {int val; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct gspca_dev*,int ,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_4)
{
 int VAR_5;
 struct sd *VAR_6 = (struct sd *) VAR_4;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  if (FUNC_2(VAR_4, VAR_3[VAR_5].reg,
    VAR_3[VAR_5].val) < 0) {
   FUNC_1("OV7670 sensor initialization failed");
   return -VAR_0;
  }
 }

 VAR_4->ctrl_dis = (1 << VAR_1) | (1 << VAR_2);
 VAR_6->hstart = 0;
 VAR_6->vstart = 1;
 return 0;
}
