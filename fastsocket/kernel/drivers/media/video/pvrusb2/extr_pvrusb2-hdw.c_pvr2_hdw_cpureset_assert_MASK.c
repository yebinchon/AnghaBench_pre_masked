
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pvr2_hdw*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,unsigned int,int,int,int,int ,char*,int,int ) ;
 unsigned int FUNC_5 (int ,int ) ;

void FUNC_6(struct pvr2_hdw *VAR_4,int VAR_5)
{
 char *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if (!VAR_4->usb_dev) return;

 VAR_6 = FUNC_1(16, VAR_0);

 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_2,
      "Unable to allocate memory to control CPU reset");
  return;
 }

 FUNC_3(VAR_3,"cpureset_assert(%d)",VAR_5);

 VAR_6[0] = VAR_5 ? 0x01 : 0x00;



 VAR_7 = FUNC_5(VAR_4->usb_dev, 0);
 VAR_8 = FUNC_4(VAR_4->usb_dev,VAR_7,0xa0,0x40,0xe600,0,VAR_6,1,VAR_1);
 if (VAR_8 < 0) {
  FUNC_3(VAR_2,
      "cpureset_assert(%d) error=%d",VAR_5,VAR_8);
  FUNC_2(VAR_4);
 }

 FUNC_0(VAR_6);
}
