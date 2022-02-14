
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_se401 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ,unsigned short,unsigned char*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static unsigned short FUNC_2(struct usb_se401 *VAR_4,
     unsigned short VAR_5)
{



 unsigned char VAR_6[2];
 FUNC_0(
  VAR_4->dev,
  FUNC_1(VAR_4->dev, 0),
  VAR_0,
  VAR_1 | VAR_3 | VAR_2,
  0,
  VAR_5,
  VAR_6,
  2,
  1000
 );
 return VAR_6[0]+VAR_6[1]*256;
}
