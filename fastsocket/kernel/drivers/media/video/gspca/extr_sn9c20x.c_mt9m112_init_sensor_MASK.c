
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
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct gspca_dev*,int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
  if (FUNC_2(VAR_5, VAR_4[VAR_7].reg,
    VAR_4[VAR_7].val) < 0) {
   FUNC_1("MT9M112 sensor initialization failed");
   return -VAR_1;
  }
 }
 VAR_5->ctrl_dis = (1 << VAR_2) | (1 << VAR_0)
    | (1 << VAR_3);
 VAR_6->hstart = 0;
 VAR_6->vstart = 2;
 return 0;
}
