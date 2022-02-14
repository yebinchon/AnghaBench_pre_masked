
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct hidpad_ps3_data {int slot; int* motors; int connection; TYPE_1__* driver; } ;
typedef int report_buffer ;
struct TYPE_2__ {int (* send_control ) (int ,int*,int) ;int (* set_report ) (int ,int ,int ,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,int ,int ,int*,int) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static void FUNC_3(struct hidpad_ps3_data* VAR_2)
{

   static uint8_t VAR_3[] = {
      0x52, 0x01,
      0x00, 0xFF, 0x00, 0xFF, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00,
      0xff, 0x27, 0x10, 0x00, 0x32,
      0xff, 0x27, 0x10, 0x00, 0x32,
      0xff, 0x27, 0x10, 0x00, 0x32,
      0xff, 0x27, 0x10, 0x00, 0x32,
      0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
   };


   VAR_3[11] = 1 << ((VAR_2->slot % 4) + 1);

   VAR_3[4] = VAR_2->motors[1] >> 8;
   VAR_3[6] = VAR_2->motors[0] >> 8;
   VAR_2->driver->send_control(VAR_2->connection, VAR_3, sizeof(VAR_3));

}
