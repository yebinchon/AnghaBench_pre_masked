
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sd {int hstart; int vstart; } ;
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
 int VAR_6;
 struct sd *VAR_7 = (struct sd *) VAR_5;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  if (FUNC_2(VAR_5, VAR_4[VAR_6].reg,
    VAR_4[VAR_6].val) < 0) {
   FUNC_1("SOI968 sensor initialization failed");
   return -VAR_0;
  }
 }

 VAR_5->ctrl_dis = (1 << VAR_2) | (1 << VAR_3)
    | (1 << VAR_1);
 VAR_7->hstart = 60;
 VAR_7->vstart = 11;
 return 0;
}
