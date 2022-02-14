
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ d_type; scalar_t__ d_init; int d_slave; struct device* d_next; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct device* VAR_1 ;
 int FUNC_0 (int *,char*,...) ;

void
FUNC_1(FILE *VAR_2)
{
 struct device *VAR_3;
 int VAR_4;

 FUNC_0(VAR_2, "\n");
 for (VAR_3 = VAR_1; VAR_3 != 0; VAR_3 = VAR_3->d_next) {
  if (VAR_3->d_type != VAR_0 || VAR_3->d_init == 0)
   continue;
  FUNC_0(VAR_2, "extern int %s(int);\n", VAR_3->d_init);
 }
 FUNC_0(VAR_2, "\nstruct pseudo_init pseudo_inits[] = {\n");
 for (VAR_3 = VAR_1; VAR_3 != 0; VAR_3 = VAR_3->d_next) {
  if (VAR_3->d_type != VAR_0 || VAR_3->d_init == 0)
   continue;
  VAR_4 = VAR_3->d_slave;
  if (VAR_4 <= 0)
   VAR_4 = 1;
  FUNC_0(VAR_2, "\t{%d,\t%s},\n", VAR_4, VAR_3->d_init);
 }
 FUNC_0(VAR_2, "\t{0,\t0},\n};\n");
}
