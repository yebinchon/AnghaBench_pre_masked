
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int red_balance; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;



__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_0, __s32 *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 *VAR_1 = VAR_2->red_balance;
 return 0;
}
