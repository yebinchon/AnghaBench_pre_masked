
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int color; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 FUNC_0(VAR_0, 0xc3, 0x0000, 0x00c3, VAR_1->color);
}
