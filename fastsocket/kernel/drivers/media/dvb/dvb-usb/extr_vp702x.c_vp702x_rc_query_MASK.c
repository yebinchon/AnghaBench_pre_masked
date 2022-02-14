
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dvb_usb_device {int dummy; } ;
struct TYPE_4__ {int event; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (struct dvb_usb_device*,int ,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_4, u32 *VAR_5, int *VAR_6)
{
 u8 VAR_7[10];
 int VAR_8;


 return 0;

 FUNC_3(VAR_4,VAR_0,0,0,VAR_7,10);

 FUNC_1("remote query key: %x %d\n",VAR_7[1],VAR_7[1]);

 if (VAR_7[1] == 0x44) {
  *VAR_6 = VAR_2;
  return 0;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++)
  if (FUNC_2(&VAR_3[VAR_8]) == VAR_7[1]) {
   *VAR_6 = VAR_1;
   *VAR_5 = VAR_3[VAR_8].event;
   break;
  }
 return 0;
}
