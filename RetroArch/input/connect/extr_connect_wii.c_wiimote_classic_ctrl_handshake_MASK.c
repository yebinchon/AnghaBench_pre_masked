
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int type; } ;
struct connect_wii_wiimote_t {TYPE_1__ exp; } ;
struct connect_wii_classic_ctrl_t {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct connect_wii_classic_ctrl_t*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct connect_wii_wiimote_t* VAR_1,
      struct connect_wii_classic_ctrl_t* VAR_2, uint8_t* VAR_3, uint16_t VAR_4)
{
   FUNC_0(VAR_2, 0, sizeof(*VAR_2));
   VAR_1->exp.type = VAR_0;
   return 1;
}
