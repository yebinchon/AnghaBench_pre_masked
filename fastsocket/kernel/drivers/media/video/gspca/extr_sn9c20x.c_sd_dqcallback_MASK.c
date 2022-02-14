
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; int avg_lum; int auto_exposure; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;

 if (!VAR_2->auto_exposure)
  return;

 VAR_3 = FUNC_0(&VAR_2->avg_lum);
 if (VAR_2->sensor == VAR_0)
  FUNC_2(VAR_1, VAR_3);
 else
  FUNC_1(VAR_1, VAR_3);
}
