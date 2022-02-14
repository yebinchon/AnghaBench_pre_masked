
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int WPR; int ALRMASSR; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int ) ;

void FUNC_4(uint32_t VAR_1, uint32_t VAR_2, uint8_t VAR_3)
{
  uint32_t VAR_4 = 0;


  FUNC_3(FUNC_0(VAR_1));
  FUNC_3(FUNC_2(VAR_2));
  FUNC_3(FUNC_1(VAR_3));


  VAR_0->WPR = 0xCA;
  VAR_0->WPR = 0x53;


  VAR_4 = (uint32_t) (((uint32_t)(VAR_2)) | ((uint32_t)(VAR_3) << 24));


  VAR_0->ALRMASSR = VAR_4;


  VAR_0->WPR = 0xFF;

}
