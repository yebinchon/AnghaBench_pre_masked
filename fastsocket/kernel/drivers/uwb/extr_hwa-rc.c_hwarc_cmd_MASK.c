
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uwb_rccb {int dummy; } ;
struct uwb_rc {struct hwarc* priv; } ;
struct hwarc {TYPE_3__* usb_iface; int usb_dev; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,void*,size_t,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static
int FUNC_2(struct uwb_rc *VAR_4, const struct uwb_rccb *VAR_5, size_t VAR_6)
{
 struct hwarc *VAR_7 = VAR_4->priv;
 return FUNC_0(
  VAR_7->usb_dev, FUNC_1(VAR_7->usb_dev, 0),
  VAR_3, VAR_0 | VAR_2 | VAR_1,
  0, VAR_7->usb_iface->cur_altsetting->desc.bInterfaceNumber,
  (void *) VAR_5, VAR_6, 100 );
}
