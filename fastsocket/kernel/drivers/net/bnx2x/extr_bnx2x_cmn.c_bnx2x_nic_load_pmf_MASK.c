
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int pmf; } ;
struct bnx2x {TYPE_1__ port; } ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_4, u32 VAR_5)
{
 if ((VAR_5 == VAR_0) ||
     (VAR_5 == VAR_1) ||
     (VAR_5 == VAR_2)) {
  VAR_4->port.pmf = 1;




  FUNC_1();
 } else {
  VAR_4->port.pmf = 0;
 }

 FUNC_0(VAR_3, "pmf %d\n", VAR_4->port.pmf);
}
