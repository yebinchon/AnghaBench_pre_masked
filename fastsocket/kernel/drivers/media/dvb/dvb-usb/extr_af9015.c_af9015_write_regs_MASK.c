
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct req_t {int * member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,struct req_t*) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_2, u16 VAR_3, u8 *VAR_4,
 u8 VAR_5)
{
 struct req_t VAR_6 = {&VAR_1, VAR_0, VAR_3, 0, 0, VAR_5,
  *VAR_4};
 return FUNC_0(VAR_2, &VAR_6);
}
