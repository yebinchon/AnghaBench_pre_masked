
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {size_t exposure; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int const) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2;
 static const u8 VAR_3[4] = {0x00, 0x25, 0x38, 0x5e};

 FUNC_1(VAR_0, 0x10,
   VAR_3[VAR_1->exposure]);

 VAR_2 = FUNC_0(VAR_0, 0x13);
 FUNC_1(VAR_0, 0xff, 0x00);
 FUNC_1(VAR_0, 0x13, VAR_2);

 VAR_2 = FUNC_0(VAR_0, 0xa1);
 FUNC_1(VAR_0, 0xff, 0x00);
 FUNC_1(VAR_0, 0xa1, VAR_2 & 0xe0);
}
