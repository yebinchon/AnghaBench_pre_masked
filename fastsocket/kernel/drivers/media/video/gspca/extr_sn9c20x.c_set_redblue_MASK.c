
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int blue; int red; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 FUNC_0(VAR_0, 0x118c, VAR_1->red);
 FUNC_0(VAR_0, 0x118f, VAR_1->blue);
 return 0;
}
