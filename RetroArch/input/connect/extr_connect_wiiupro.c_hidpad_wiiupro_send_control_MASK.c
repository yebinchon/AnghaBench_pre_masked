
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct hidpad_wiiupro_data {int connection; TYPE_1__* driver; } ;
typedef int report_buffer ;
struct TYPE_2__ {int (* send_control ) (int ,int*,int) ;} ;


 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static void FUNC_1(struct hidpad_wiiupro_data* VAR_0)
{

   static uint8_t VAR_1[4] = { 0xA2, 0x12, 0x00, 0x34 };
   VAR_0->driver->send_control(VAR_0->connection,
         VAR_1, sizeof(VAR_1));
}
