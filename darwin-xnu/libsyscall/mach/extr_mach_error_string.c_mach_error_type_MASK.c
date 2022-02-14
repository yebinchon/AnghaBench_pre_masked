
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct error_system {int max_sub; TYPE_1__* subsystem; int map_count; scalar_t__ map_table; } ;
typedef int mach_error_t ;
struct TYPE_2__ {scalar_t__ subsys_name; } ;


 struct error_system* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int,scalar_t__,int ) ;

char *
FUNC_4(mach_error_t VAR_2)
{
 const struct error_system *VAR_3;
 int VAR_4, VAR_5;

 FUNC_0( &VAR_2 );

 VAR_5 = FUNC_2(VAR_2);
 VAR_3 = &VAR_0[VAR_5];
 VAR_4 = FUNC_1(VAR_2);

 if (VAR_5 <= VAR_1 && VAR_3->map_table)
  VAR_4 = FUNC_3(VAR_4, VAR_3->map_table, VAR_3->map_count);

 if (VAR_5 > VAR_1 || VAR_4 >= VAR_3->max_sub)
     return((char *)"(?/?)");
 return (char *) (VAR_3->subsystem[VAR_4].subsys_name);
}
