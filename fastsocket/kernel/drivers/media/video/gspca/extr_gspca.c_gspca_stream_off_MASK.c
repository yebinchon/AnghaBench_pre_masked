
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gspca_dev {TYPE_1__* sd_desc; scalar_t__ present; scalar_t__ streaming; } ;
struct TYPE_2__ {int (* stop0 ) (struct gspca_dev*) ;int (* stopN ) (struct gspca_dev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_7(struct gspca_dev *VAR_1)
{
 VAR_1->streaming = 0;
 if (VAR_1->present) {
  if (VAR_1->sd_desc->stopN)
   VAR_1->sd_desc->stopN(VAR_1);
  FUNC_1(VAR_1);
  FUNC_3(VAR_1);
  FUNC_4(VAR_1);
  FUNC_2(VAR_1);
 }


 if (VAR_1->sd_desc->stop0)
  VAR_1->sd_desc->stop0(VAR_1);
 FUNC_0(VAR_0, "stream off OK");
}
