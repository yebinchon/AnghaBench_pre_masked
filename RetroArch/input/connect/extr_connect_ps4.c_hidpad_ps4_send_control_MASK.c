
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct hidpad_ps4_data {int slot; int connection; TYPE_1__* driver; } ;
typedef int report_buffer ;
struct TYPE_2__ {int (* send_control ) (int ,int*,int) ;} ;


 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static void FUNC_1(struct hidpad_ps4_data* VAR_0)
{

   static uint8_t VAR_1[79] = {
      0x52, 0x11, 0xB0, 0x00, 0x0F
   };
   VAR_0->driver->send_control(VAR_0->connection,
         VAR_1, sizeof(VAR_1));
}
