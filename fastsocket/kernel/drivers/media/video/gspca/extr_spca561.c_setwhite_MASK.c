
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int white; scalar_t__ chip_revision; int contrast; } ;
struct gspca_dev {int dev; } ;
typedef int __u8 ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 __u16 VAR_3;
 __u8 VAR_4, VAR_5;
 __u16 VAR_6;


 VAR_3 = VAR_2->white;
 VAR_5 = 0x20 + VAR_3 * 3 / 8;
 VAR_4 = 0x90 - VAR_3 * 5 / 8;
 if (VAR_2->chip_revision == VAR_0) {
  VAR_6 = 0x8614;
 } else {
  VAR_6 = 0x8651;
  VAR_5 += VAR_2->contrast - 0x20;
  VAR_4 += VAR_2->contrast - 0x20;
 }
 FUNC_0(VAR_1->dev, VAR_6, VAR_5);
 FUNC_0(VAR_1->dev, VAR_6 + 2, VAR_4);
}
