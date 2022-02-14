
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int btns; } ;
struct TYPE_5__ {TYPE_1__ classic; } ;
struct TYPE_6__ {TYPE_2__ cc; } ;
struct connect_wii_wiimote_t {int btns; TYPE_3__ exp; } ;
typedef int input_bits_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, input_bits_t *VAR_1)
{
 struct connect_wii_wiimote_t* VAR_2 = (struct connect_wii_wiimote_t*)VAR_0;
 if ( VAR_2 )
 {

  uint32_t VAR_3 = VAR_2->btns | (VAR_2->exp.cc.classic.btns << 16);
  FUNC_0(VAR_1, VAR_3);
 }
}
