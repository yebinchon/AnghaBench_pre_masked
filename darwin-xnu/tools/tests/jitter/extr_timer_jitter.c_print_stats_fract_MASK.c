
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;

void
FUNC_2(const char *VAR_0, double VAR_1, double VAR_2, double VAR_3, double VAR_4)
{
 FUNC_0("Max %s jitter: %.1lf%%\n", VAR_0, VAR_2 * 100);
 FUNC_0("Min %s jitter: %.1lf%%\n", VAR_0, VAR_3 * 100);
 FUNC_0("Avg %s jitter: %.1lf%%\n", VAR_0, VAR_1 * 100);
 FUNC_0("Stddev: %.1lf%%\n", VAR_4 * 100);
 FUNC_1('\n');
}
