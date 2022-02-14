
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ PAB_active; } ;
typedef TYPE_1__ cpu_data_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 () ;
 unsigned int VAR_2 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_3)
{
 unsigned int VAR_4 = VAR_2;

 cpu_data_t * VAR_5 = FUNC_2();

 FUNC_0(VAR_5->PAB_active == VAR_0);
 VAR_5->PAB_active = VAR_1;






 VAR_2 = 0;
 FUNC_1(VAR_3);

 VAR_2 = VAR_4;

 VAR_5->PAB_active = VAR_0;
}
