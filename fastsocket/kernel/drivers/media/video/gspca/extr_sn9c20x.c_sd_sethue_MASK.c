
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int hue; } ;
struct gspca_dev {scalar_t__ streaming; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 VAR_2->hue = VAR_1;
 if (VAR_0->streaming)
  return FUNC_0(VAR_0);
 return 0;
}
