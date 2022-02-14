
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int red_balance; } ;
struct gspca_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 FUNC_0(VAR_1->dev, VAR_0, 0x13, VAR_2->red_balance);
}
