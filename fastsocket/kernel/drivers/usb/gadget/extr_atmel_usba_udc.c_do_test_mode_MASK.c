
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int test_packet_buffer ;
struct usba_udc {int test_mode; TYPE_1__* pdev; } ;
struct usba_ep {int fifo; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (struct usba_udc*) ;
 int FUNC_5 (struct usba_udc*,struct usba_ep*) ;
 struct usba_ep* VAR_19 ;
 int FUNC_6 (struct usba_ep*,int ) ;
 int FUNC_7 (struct usba_ep*,int ,int) ;
 int FUNC_8 (struct usba_udc*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct usba_udc *VAR_20)
{
 static const char VAR_21[] = {

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,

  0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE,

  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,

  0x7F, 0xBF, 0xDF, 0xEF, 0xF7, 0xFB, 0xFD,

  0xFC, 0x7E, 0xBF, 0xDF, 0xEF, 0xF7, 0xFB, 0xFD, 0x7E
 };
 struct usba_ep *VAR_22;
 struct device *VAR_23 = &VAR_20->pdev->dev;
 int VAR_24;

 VAR_24 = VAR_20->test_mode;


 FUNC_4(VAR_20);

 switch (VAR_24) {
 case 0x0100:

  FUNC_8(VAR_20, VAR_8, VAR_15);
  FUNC_2(VAR_23, "Entering Test_J mode...\n");
  break;
 case 0x0200:

  FUNC_8(VAR_20, VAR_8, VAR_16);
  FUNC_2(VAR_23, "Entering Test_K mode...\n");
  break;
 case 0x0300:




  VAR_22 = &VAR_19[0];
  FUNC_8(VAR_20, VAR_8,
    FUNC_0(VAR_7, VAR_14));
  FUNC_7(VAR_22, VAR_1,
    FUNC_0(VAR_4, VAR_12)
    | VAR_9
    | FUNC_0(VAR_5, VAR_13)
    | FUNC_0(VAR_0, 1));
  if (!(FUNC_6(VAR_22, VAR_1) & VAR_11)) {
   FUNC_5(VAR_20, VAR_22);
   FUNC_1(VAR_23, "Test_SE0_NAK: ep0 not mapped\n");
  } else {
   FUNC_7(VAR_22, VAR_2, VAR_10);
   FUNC_2(VAR_23, "Entering Test_SE0_NAK mode...\n");
  }
  break;
 case 0x0400:

  VAR_22 = &VAR_19[0];
  FUNC_7(VAR_22, VAR_1,
    FUNC_0(VAR_4, VAR_12)
    | VAR_9
    | FUNC_0(VAR_5, VAR_13)
    | FUNC_0(VAR_0, 1));
  if (!(FUNC_6(VAR_22, VAR_1) & VAR_11)) {
   FUNC_5(VAR_20, VAR_22);
   FUNC_1(VAR_23, "Test_Packet: ep0 not mapped\n");
  } else {
   FUNC_7(VAR_22, VAR_2, VAR_10);
   FUNC_8(VAR_20, VAR_8, VAR_17);
   FUNC_3(VAR_22->fifo, VAR_21,
     sizeof(VAR_21));
   FUNC_7(VAR_22, VAR_6, VAR_18);
   FUNC_2(VAR_23, "Entering Test_Packet mode...\n");
  }
  break;
 default:
  FUNC_1(VAR_23, "Invalid test mode: 0x%04x\n", VAR_24);
  return -VAR_3;
 }

 return 0;
}
