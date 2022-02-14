
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxpacket; } ;
struct dummy_ep {TYPE_3__* desc; TYPE_1__ ep; } ;
struct TYPE_5__ {scalar_t__ speed; } ;
struct dummy {TYPE_2__ gadget; } ;
struct TYPE_6__ {int wMaxPacketSize; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1 (struct dummy *VAR_1, struct dummy_ep *VAR_2)
{
 int VAR_3 = VAR_2->ep.maxpacket;

 if (VAR_1->gadget.speed == VAR_0) {
  int VAR_4;


  VAR_4 = FUNC_0(VAR_2->desc->wMaxPacketSize);
  VAR_4 = (VAR_4 >> 11) & 0x03;
  VAR_4 *= 8 ;
  VAR_3 += VAR_3 * VAR_4;
 }
 return VAR_3;
}
