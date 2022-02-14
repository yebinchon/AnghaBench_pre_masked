
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {char* p_name; int p_pid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ,char*,char*,int ,char*,char*,int const,char*) ;

void
FUNC_2(const int VAR_1, boolean_t VAR_2, boolean_t VAR_3)
{
 proc_t VAR_4 = FUNC_0();







 FUNC_1(VAR_0, "EXC_RESOURCE -> %s[%d] exceeded mem limit: %s%s %d MB (%s)\n",
        (*VAR_4->p_name ? VAR_4->p_name : "unknown"), VAR_4->p_pid, (VAR_2 ? "Active" : "Inactive"),
        (VAR_3 ? "Hard" : "Soft"), VAR_1,
        (VAR_3 ? "fatal" : "non-fatal"));

 return;
}
