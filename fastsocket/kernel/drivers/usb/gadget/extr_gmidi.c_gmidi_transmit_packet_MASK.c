
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct usb_request {unsigned int length; scalar_t__ buf; } ;



__attribute__((used)) static void FUNC_0(struct usb_request *VAR_0, uint8_t VAR_1,
     uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{
 unsigned VAR_5 = VAR_0->length;
 u8 *VAR_6 = (u8 *)VAR_0->buf + VAR_5;

 VAR_6[0] = VAR_1;
 VAR_6[1] = VAR_2;
 VAR_6[2] = VAR_3;
 VAR_6[3] = VAR_4;
 VAR_0->length = VAR_5 + 4;
}
