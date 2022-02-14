
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int po_bios_call ;
struct TYPE_2__ {scalar_t__ realmode_power_off; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned char VAR_3[] = {
  0xb8, 0x00, 0x10,
  0x8e, 0xd0,
  0xbc, 0x00, 0xf0,
  0xb8, 0x07, 0x53,
  0xbb, 0x01, 0x00,
  0xb9, 0x03, 0x00,
  0xcd, 0x15
 };


 if (VAR_1.realmode_power_off) {
  FUNC_2(VAR_2, FUNC_0(0));
  FUNC_1(VAR_3, sizeof(VAR_3));
 } else {
  (void)FUNC_3(VAR_0);
 }
}
