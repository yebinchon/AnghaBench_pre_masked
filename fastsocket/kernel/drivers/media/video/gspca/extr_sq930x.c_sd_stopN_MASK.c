
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sd*,int ,int ) ;
 int FUNC_1 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 if (VAR_3->sensor == VAR_0)
  FUNC_0(VAR_3, 0, VAR_1);
 FUNC_1(VAR_2);
}
