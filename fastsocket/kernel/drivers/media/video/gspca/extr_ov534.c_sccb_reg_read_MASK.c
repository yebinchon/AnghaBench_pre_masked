
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;
 int FUNC_3 (struct gspca_dev*) ;

__attribute__((used)) static u8 FUNC_4(struct gspca_dev *VAR_5, u16 VAR_6)
{
 FUNC_2(VAR_5, VAR_4, VAR_6);
 FUNC_2(VAR_5, VAR_2, VAR_1);
 if (!FUNC_3(VAR_5))
  FUNC_0("sccb_reg_read failed 1");

 FUNC_2(VAR_5, VAR_2, VAR_0);
 if (!FUNC_3(VAR_5))
  FUNC_0("sccb_reg_read failed 2");

 return FUNC_1(VAR_5, VAR_3);
}
