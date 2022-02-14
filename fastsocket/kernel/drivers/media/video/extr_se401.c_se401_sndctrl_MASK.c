
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_se401 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,unsigned short,int,unsigned short,int ,unsigned char*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_4, struct usb_se401 *VAR_5, unsigned short VAR_6,
    unsigned short VAR_7, unsigned char *VAR_8, int VAR_9)
{
 return FUNC_0(
  VAR_5->dev,
  VAR_4 ? FUNC_2(VAR_5->dev, 0) : FUNC_1(VAR_5->dev, 0),
  VAR_6,
  (VAR_4 ? VAR_1 : VAR_0) | VAR_3 | VAR_2,
  VAR_7,
  0,
  VAR_8,
  VAR_9,
  1000
 );
}
