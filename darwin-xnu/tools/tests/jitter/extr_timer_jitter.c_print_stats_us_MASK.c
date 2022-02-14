
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ denom; scalar_t__ numer; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;

void
FUNC_2(const char *VAR_1, double VAR_2, double VAR_3, double VAR_4, double VAR_5)
{
 FUNC_0("Max %s: %.1lfus\n", VAR_1, VAR_3 / 1000.0 * (((double)VAR_0.numer) / ((double)VAR_0.denom)));
 FUNC_0("Min %s: %.1lfus\n", VAR_1, VAR_4 / 1000.0 * (((double)VAR_0.numer) / ((double)VAR_0.denom)));
 FUNC_0("Avg magnitude of %s: %.1lfus\n", VAR_1, VAR_2 / 1000.0 * (((double)VAR_0.numer) / ((double)VAR_0.denom)));
 FUNC_0("Stddev: %.1lfus\n", VAR_5 / 1000.0 * (((double)VAR_0.numer) / ((double)VAR_0.denom)));
 FUNC_1('\n');
}
