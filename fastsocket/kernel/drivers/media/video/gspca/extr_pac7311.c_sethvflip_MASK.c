
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ vflip; scalar_t__ hflip; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 __u8 VAR_2;

 FUNC_0(VAR_0, 0xff, 0x04);
 VAR_2 = (VAR_1->hflip ? 0x04 : 0x00) | (VAR_1->vflip ? 0x08 : 0x00);
 FUNC_0(VAR_0, 0x21, VAR_2);


 FUNC_0(VAR_0, 0x11, 0x01);
}
