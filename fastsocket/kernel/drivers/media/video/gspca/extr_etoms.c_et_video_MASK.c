
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_2,
      int VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2, VAR_1,
    VAR_3 ? 0x10
       : 0);
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 != 0)
  FUNC_1(VAR_0, "timeout video on/off");
 return VAR_4;
}
