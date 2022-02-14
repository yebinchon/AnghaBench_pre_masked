
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int ,int ,int ,int,unsigned char,int ,void*,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_4, unsigned char VAR_5,
     unsigned char VAR_6, void *VAR_7, int VAR_8)
{
 return FUNC_1(FUNC_0(VAR_4),
          FUNC_2(FUNC_0(VAR_4), 0),
          VAR_2,
          VAR_3 | VAR_1,
          (VAR_5 << 8) + VAR_6,
          VAR_4->cur_altsetting->desc.bInterfaceNumber, VAR_7,
          VAR_8, VAR_0);
}
