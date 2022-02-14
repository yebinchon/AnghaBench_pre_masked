
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_2__ {int flags; int charge; int max_charge; int amperage; int voltage; int time_remaining; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_1(char *VAR_1, char **VAR_2, off_t VAR_3,
  int VAR_4, int *VAR_5, void *VAR_6)
{
 long VAR_7 = (long)VAR_6;
 char *VAR_8 = VAR_1;

 VAR_8 += FUNC_0(VAR_8, "\n");
 VAR_8 += FUNC_0(VAR_8, "flags      : %08x\n",
  VAR_0[VAR_7].flags);
 VAR_8 += FUNC_0(VAR_8, "charge     : %d\n",
  VAR_0[VAR_7].charge);
 VAR_8 += FUNC_0(VAR_8, "max_charge : %d\n",
  VAR_0[VAR_7].max_charge);
 VAR_8 += FUNC_0(VAR_8, "current    : %d\n",
  VAR_0[VAR_7].amperage);
 VAR_8 += FUNC_0(VAR_8, "voltage    : %d\n",
  VAR_0[VAR_7].voltage);
 VAR_8 += FUNC_0(VAR_8, "time rem.  : %d\n",
  VAR_0[VAR_7].time_remaining);

 return VAR_8 - VAR_1;
}
