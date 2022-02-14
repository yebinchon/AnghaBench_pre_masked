
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pal; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {scalar_t__ CPUclock; int filter; int gamma; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
 static int VAR_2 = -1;
 static int VAR_3 = -1;

 if (VAR_1.CPUclock != FUNC_1())
  FUNC_2(VAR_1.CPUclock);

 if (VAR_0.m.pal != VAR_2) {
  FUNC_5(VAR_0.m.pal);
  VAR_2 = VAR_0.m.pal;
 }

 if (VAR_1.filter != VAR_3) {
  FUNC_4(VAR_1.filter);
  VAR_3 = VAR_1.filter;
 }

 FUNC_3(VAR_1.gamma, 0);

 FUNC_0();
}
