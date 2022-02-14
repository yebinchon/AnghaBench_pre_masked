
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int kdebug_slowcheck; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(int VAR_4, int VAR_5, boolean_t VAR_6)
{
 int VAR_7 = FUNC_2(VAR_0);
 FUNC_0(VAR_3);

 if (VAR_6) {
  VAR_1.kdebug_slowcheck |= VAR_4;
  VAR_2 |= VAR_5;
 } else {
  VAR_1.kdebug_slowcheck &= ~VAR_4;
  VAR_2 &= ~VAR_5;
 }

 FUNC_1(VAR_3);
 FUNC_2(VAR_7);
}
