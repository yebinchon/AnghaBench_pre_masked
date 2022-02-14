
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int istat; } ;
struct TYPE_5__ {unsigned long istat; } ;
struct TYPE_6__ {TYPE_1__ ctrl; } ;
struct TYPE_7__ {TYPE_2__ perif; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned long) ;
 TYPE_4__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 TYPE_3__* VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{
 uint64_t VAR_9;
 int VAR_10 = 0;






 FUNC_0(VAR_1 - VAR_4 != 31);
 FUNC_0(VAR_3 - VAR_2 != 31);

 VAR_9 = VAR_5->istat & VAR_6;


 if (FUNC_4(VAR_9 == 0))
  return;

 VAR_10 = VAR_4 + FUNC_1(VAR_9);

 if (VAR_9 & VAR_0) {
  unsigned long VAR_11 = VAR_7->perif.ctrl.istat;
  VAR_10 = FUNC_1(VAR_11 & VAR_8) + VAR_2;
 }

 FUNC_3("*irq %u*\n", VAR_10);
 FUNC_2(VAR_10);
}
