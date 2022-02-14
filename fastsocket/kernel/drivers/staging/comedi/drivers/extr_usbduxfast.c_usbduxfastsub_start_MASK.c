
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxfastsub_s {int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int,unsigned char*,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usbduxfastsub_s *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6[16];


 VAR_6[0] = 0;
 VAR_5 = FUNC_1(VAR_4->usbdev, FUNC_2(VAR_4->usbdev, 0), VAR_2,
         VAR_3,
         VAR_1,
         0x0000,
         VAR_6,
         1,
         VAR_0);
 if (VAR_5 < 0) {
  FUNC_0("comedi_: usbduxfast_: control msg failed (start)\n");
  return VAR_5;
 }

 return 0;
}
