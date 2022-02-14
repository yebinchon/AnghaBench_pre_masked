
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ expires; } ;
struct TYPE_4__ {scalar_t__ motor; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3)
{
 long VAR_4;





 VAR_4 = VAR_3 & 0x80000000;
 VAR_3&=3;
 if (VAR_4 && !FUNC_3(VAR_3)) {

  VAR_1[VAR_3].expires = VAR_0 + 1;
  FUNC_0(VAR_1 + VAR_3);
  return;
 }
 VAR_2[VAR_3].motor = 0;
 FUNC_2(VAR_3);
 FUNC_4 (1);
 FUNC_1(VAR_3);
}
