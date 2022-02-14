
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int gain; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_4;

 FUNC_0(VAR_4, VAR_0, VAR_5->gain);
 FUNC_0(VAR_4, VAR_1, VAR_5->gain);
 FUNC_0(VAR_4, VAR_2, VAR_5->gain);
 FUNC_0(VAR_4, VAR_3, VAR_5->gain);
}
