
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int tbi ;
struct TYPE_2__ {int tcr_el1; } ;


 scalar_t__ FUNC_0 (char*,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(void)
{




 uint64_t VAR_6, VAR_7;
 int VAR_8 = 0;

 if (FUNC_0("tbi", &VAR_8, sizeof(VAR_8)))
  VAR_5 = ((VAR_8 & VAR_1) == VAR_1);
 VAR_6 = VAR_7 = FUNC_1();
 VAR_7 |= (VAR_5) ? VAR_2 : 0;
 VAR_7 |= (VAR_8 & VAR_0) ? VAR_3 : 0;

 if (VAR_6 != VAR_7) {
  FUNC_2(VAR_7);
  VAR_4.tcr_el1 = VAR_7;
 }

}
