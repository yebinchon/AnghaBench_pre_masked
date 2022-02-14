
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int ) ;

__attribute__((used)) static u8 FUNC_2(struct gspca_dev *VAR_1,
  u16 VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_0, "reg r [%04x] -> %02x", VAR_2, VAR_3);
 return VAR_3;
}
