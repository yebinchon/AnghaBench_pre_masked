
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int magic1; int magic2; char flags; char value3; char buffer1; char buffer2; char value6; char value7; char value8; } ;
struct asus_oled_packet {TYPE_1__ header; } ;
struct asus_oled_header {int dummy; } ;


 int FUNC_0 (struct asus_oled_packet*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct asus_oled_packet *VAR_0, char VAR_1,
    char VAR_2, char VAR_3, char VAR_4, char VAR_5,
    char VAR_6, char VAR_7)
{
 FUNC_0(VAR_0, 0, sizeof(struct asus_oled_header));
 VAR_0->header.magic1 = 0x55;
 VAR_0->header.magic2 = 0xaa;
 VAR_0->header.flags = VAR_1;
 VAR_0->header.value3 = VAR_2;
 VAR_0->header.buffer1 = VAR_3;
 VAR_0->header.buffer2 = VAR_4;
 VAR_0->header.value6 = VAR_5;
 VAR_0->header.value7 = VAR_6;
 VAR_0->header.value8 = VAR_7;
}
