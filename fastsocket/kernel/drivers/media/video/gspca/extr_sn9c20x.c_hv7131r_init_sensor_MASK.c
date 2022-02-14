
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sd {int vstart; scalar_t__ hstart; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_3__ {int val; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (struct gspca_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_2)
{
 int VAR_3;
 struct sd *VAR_4 = (struct sd *) VAR_2;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (FUNC_2(VAR_2, VAR_1[VAR_3].reg,
    VAR_1[VAR_3].val) < 0) {
   FUNC_1("HV7131R Sensor initialization failed");
   return -VAR_0;
  }
 }
 VAR_4->hstart = 0;
 VAR_4->vstart = 1;
 return 0;
}
