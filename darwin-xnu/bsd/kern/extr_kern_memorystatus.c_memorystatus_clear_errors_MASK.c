
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_memstat_state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (unsigned int*,int ) ;
 TYPE_1__* FUNC_3 (unsigned int*,TYPE_1__*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void)
{
 proc_t VAR_6;
 unsigned int VAR_7 = 0;

 FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_3, 0, 0, 0, 0, 0);

 FUNC_4();

 VAR_6 = FUNC_2(&VAR_7, VAR_5);
 while (VAR_6) {
  if (VAR_6->p_memstat_state & VAR_4) {
   VAR_6->p_memstat_state &= ~VAR_4;
  }
  VAR_6 = FUNC_3(&VAR_7, VAR_6, VAR_5);
 }

 FUNC_5();

 FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_2, 0, 0, 0, 0, 0);
}
