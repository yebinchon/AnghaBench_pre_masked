
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ stop_on_control_change; int hue; } ;
struct gspca_dev {scalar_t__ streaming; } ;
typedef int __s32 ;


 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0, __s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 VAR_2->hue = VAR_1;
 if (VAR_0->streaming) {
  if (VAR_2->stop_on_control_change)
   FUNC_2(VAR_0);
  FUNC_1(VAR_0);
  if (VAR_2->stop_on_control_change)
   FUNC_0(VAR_0);
 }
 return 0;
}
