
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {int dummy; } ;
struct line6_dump_request {TYPE_1__* reqbufs; } ;
struct TYPE_2__ {int length; int buffer; } ;


 int FUNC_0 (struct line6_dump_request*) ;
 int FUNC_1 (struct line6_dump_request*) ;
 int FUNC_2 (struct usb_line6*,int ,int ) ;

int FUNC_3(struct line6_dump_request *VAR_0,
        struct usb_line6 *VAR_1, int VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_0);
 VAR_3 = FUNC_2(VAR_1, VAR_0->reqbufs[VAR_2].buffer,
        VAR_0->reqbufs[VAR_2].length);

 if (VAR_3 < 0)
  FUNC_0(VAR_0);

 return VAR_3;
}
