
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ autogain; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ __s32 ;


 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0, __s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 VAR_2->autogain = VAR_1;
 if (VAR_1 != 0)
  FUNC_0(VAR_0, 0xf48e);
 else
  FUNC_0(VAR_0, 0xb48e);
 return 0;
}
