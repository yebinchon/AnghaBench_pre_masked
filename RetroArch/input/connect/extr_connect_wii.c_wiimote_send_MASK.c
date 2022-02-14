
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct connect_wii_wiimote_t {int unid; int connection; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* send_control ) (int ,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct connect_wii_wiimote_t* VAR_2,
      uint8_t VAR_3, uint8_t* VAR_4, int VAR_5)
{
   uint8_t VAR_6[32] = {0};

   VAR_6[0] = VAR_1 | VAR_0;
   VAR_6[1] = VAR_3;

   FUNC_0(VAR_6+2, VAR_4, VAR_5);
   VAR_2->driver->send_control(VAR_2->connection, VAR_6, VAR_5 + 2);
   return 1;
}
