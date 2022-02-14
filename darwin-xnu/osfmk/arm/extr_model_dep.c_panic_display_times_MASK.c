
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ clock_usec_t ;
typedef scalar_t__ clock_sec_t ;
struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6()
{
 if (FUNC_2()) {
  FUNC_3("Warning: clock is locked.  Can't get time\n");
  return;
 }

 if ((VAR_3) && (FUNC_4(&VAR_0))) {
  clock_sec_t VAR_4, VAR_5;
  clock_usec_t VAR_6, VAR_7;

  FUNC_5(&VAR_0);

  FUNC_1(&VAR_4, &VAR_6);
  FUNC_0(&VAR_5, &VAR_7);

  FUNC_3("Epoch Time:        sec       usec\n");
  FUNC_3("  Boot    : 0x%08x 0x%08x\n", (unsigned int)VAR_5, (unsigned int)VAR_7);
  FUNC_3("  Sleep   : 0x%08x 0x%08x\n", (unsigned int)VAR_1.tv_sec, (unsigned int)VAR_1.tv_usec);
  FUNC_3("  Wake    : 0x%08x 0x%08x\n", (unsigned int)VAR_2.tv_sec, (unsigned int)VAR_2.tv_usec);
  FUNC_3("  Calendar: 0x%08x 0x%08x\n\n", (unsigned int)VAR_4, (unsigned int)VAR_6);
 }
}
