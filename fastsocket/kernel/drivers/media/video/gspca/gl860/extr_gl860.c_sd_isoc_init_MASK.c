
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int (* dev_configure_alt ) (struct gspca_dev*) ;} ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 return VAR_1->dev_configure_alt(VAR_0);
}
