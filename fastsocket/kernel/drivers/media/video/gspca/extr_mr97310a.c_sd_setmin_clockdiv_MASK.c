
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int min_clockdiv; } ;
struct gspca_dev {scalar_t__ streaming; } ;
typedef int __s32 ;


 int FUNC_0 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0, __s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 VAR_2->min_clockdiv = VAR_1;
 if (VAR_0->streaming)
  FUNC_0(VAR_0);
 return 0;
}
