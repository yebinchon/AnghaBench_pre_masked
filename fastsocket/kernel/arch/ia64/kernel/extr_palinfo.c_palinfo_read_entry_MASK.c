
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ req_cpu; size_t func_id; } ;
typedef TYPE_1__ pal_func_cpu_u_t ;
typedef int off_t ;
struct TYPE_5__ {int (* proc_read ) (char*) ;} ;


 scalar_t__ FUNC_0 () ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_1, char **VAR_2, off_t VAR_3, int VAR_4, int *VAR_5, void *VAR_6)
{
 int VAR_7=0;
 pal_func_cpu_u_t *VAR_8 = (pal_func_cpu_u_t *)&VAR_6;





 if (VAR_8->req_cpu == FUNC_0())
  VAR_7 = (*VAR_0[VAR_8->func_id].proc_read)(VAR_1);
 else
  VAR_7 = FUNC_1(VAR_8, VAR_1);

 FUNC_2();

 if (VAR_7 <= VAR_3+VAR_4) *VAR_5 = 1;

 *VAR_2 = VAR_1 + VAR_3;
 VAR_7 -= VAR_3;

 if (VAR_7>VAR_4) VAR_7 = VAR_4;
 if (VAR_7<0) VAR_7 = 0;

 return VAR_7;
}
