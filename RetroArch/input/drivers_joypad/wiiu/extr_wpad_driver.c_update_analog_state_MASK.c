
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_5__ {int y; int x; } ;
struct TYPE_6__ {int y; int x; } ;
struct TYPE_7__ {TYPE_1__ rightStick; TYPE_2__ leftStick; } ;
typedef TYPE_3__ VPADStatus ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(int16_t VAR_4[3][2], VPADStatus *VAR_5)
{
   VAR_4[VAR_2] [VAR_0] = FUNC_0(VAR_5->leftStick.x);
   VAR_4[VAR_2] [VAR_1] = FUNC_0(VAR_5->leftStick.y);
   VAR_4[VAR_3][VAR_0] = FUNC_0(VAR_5->rightStick.x);
   VAR_4[VAR_3][VAR_1] = FUNC_0(VAR_5->rightStick.y);
}
