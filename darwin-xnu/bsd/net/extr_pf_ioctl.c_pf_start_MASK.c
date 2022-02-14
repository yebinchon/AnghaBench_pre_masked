
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int running; int stateid; int since; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 FUNC_1(VAR_3, VAR_0);

 FUNC_2(VAR_2 == 0);

 VAR_2 = 1;
 VAR_5.running = 1;
 VAR_5.since = FUNC_3();
 if (VAR_5.stateid == 0) {
  VAR_5.stateid = FUNC_4();
  VAR_5.stateid = VAR_5.stateid << 32;
 }
 FUNC_5(VAR_4);
 FUNC_0(VAR_1, ("pf: started\n"));
}
