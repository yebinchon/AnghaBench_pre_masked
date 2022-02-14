
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ mirror; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2[8] =
  {0x62, 0x07, 0x63, 0x03, 0x64, 0x00, 0x60, 0x09};

 if (VAR_1->mirror)
  VAR_2[3] = 0x01;

 FUNC_0(VAR_0, VAR_2, sizeof VAR_2);
}
