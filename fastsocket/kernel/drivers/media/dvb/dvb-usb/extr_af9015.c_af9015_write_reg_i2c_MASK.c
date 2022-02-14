
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct req_t {scalar_t__ member_1; int member_3; int member_4; int member_5; scalar_t__* member_6; int addr_len; int member_2; int member_0; } ;
struct dvb_usb_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ demod_address; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,struct req_t*) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_2, u8 VAR_3, u16 VAR_4,
 u8 VAR_5)
{
 struct req_t VAR_6 = {VAR_0, VAR_3, VAR_4, 1, 1, 1, &VAR_5};

 if (VAR_3 == VAR_1[0].demod_address ||
     VAR_3 == VAR_1[1].demod_address)
  VAR_6.addr_len = 3;

 return FUNC_0(VAR_2, &VAR_6);
}
