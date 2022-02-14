
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct gspca_dev*,int ) ;
 int FUNC_3 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 if (VAR_3->sensor == VAR_1)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_2);
 FUNC_3(VAR_2, VAR_0, 0x08);
 FUNC_2(VAR_2, 0);
 return 0;
}
