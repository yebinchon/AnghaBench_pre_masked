
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {scalar_t__ do_ctrl; } ;
struct TYPE_2__ {int bulk_nurbs; } ;
struct gspca_dev {int * urb; TYPE_1__ cam; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;

 if (!VAR_2->do_ctrl || VAR_1->cam.bulk_nurbs != 0)
  return;
 VAR_2->do_ctrl = 0;

 FUNC_2(VAR_1);

 VAR_1->cam.bulk_nurbs = 1;
 VAR_3 = FUNC_3(VAR_1->urb[0], VAR_0);
 if (VAR_3 < 0)
  FUNC_0("sd_dq_callback() err %d", VAR_3);


 FUNC_1(100);
}
