
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sensor; } ;
struct gspca_dev {int present; } ;


 int FUNC_0 (struct gspca_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 if (!VAR_0->present)
  return;
 FUNC_0(VAR_0, VAR_1->sensor);
}
