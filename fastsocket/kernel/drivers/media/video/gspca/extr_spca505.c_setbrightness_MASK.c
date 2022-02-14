
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int brightness; } ;
struct gspca_dev {int dev; } ;


 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2 = VAR_1->brightness;

 FUNC_0(VAR_0->dev, 0x05, 0x00, (255 - VAR_2) >> 6);
 FUNC_0(VAR_0->dev, 0x05, 0x01, (255 - VAR_2) << 2);
}
