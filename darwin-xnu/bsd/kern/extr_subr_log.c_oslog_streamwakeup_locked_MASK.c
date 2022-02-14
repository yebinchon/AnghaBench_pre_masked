
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int caddr_t ;
struct TYPE_2__ {int sc_state; int sc_selp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 FUNC_0(&VAR_2, VAR_0);
 if (!VAR_3) {
  return;
 }
 FUNC_1(&VAR_5.sc_selp);
 if (VAR_5.sc_state & VAR_1) {
  FUNC_2((caddr_t)VAR_4);
  VAR_5.sc_state &= ~VAR_1;
 }
}
