
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sisusb_usb_data {int dummy; } ;
struct sisusb_packet {int header; int address; int data; } ;


 int FUNC_0 (struct sisusb_usb_data*,int,struct sisusb_packet*) ;

__attribute__((used)) static int
FUNC_1(struct sisusb_usb_data *VAR_0, int VAR_1, u32 VAR_2)
{
 struct sisusb_packet VAR_3;
 int VAR_4;

 VAR_3.header = 0x008f;
 VAR_3.address = VAR_1 | 0x10000;
 VAR_3.data = VAR_2;
 VAR_4 = FUNC_0(VAR_0, 10, &VAR_3);
 return VAR_4;
}
