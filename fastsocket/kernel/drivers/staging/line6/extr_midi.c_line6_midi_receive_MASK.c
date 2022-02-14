
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {TYPE_1__* line6midi; } ;
struct TYPE_2__ {scalar_t__ substream_receive; } ;


 int FUNC_0 (scalar_t__,unsigned char*,int) ;

void FUNC_1(struct usb_line6 *VAR_0, unsigned char *VAR_1,
   int VAR_2)
{
 if (VAR_0->line6midi->substream_receive)
  FUNC_0(VAR_0->line6midi->substream_receive,
        VAR_1, VAR_2);
}
