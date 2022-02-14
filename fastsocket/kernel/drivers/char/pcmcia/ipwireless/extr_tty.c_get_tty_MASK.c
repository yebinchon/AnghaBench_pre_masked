
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_tty {int dummy; } ;
struct TYPE_2__ {int minor_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 struct ipw_tty** VAR_5 ;

__attribute__((used)) static struct ipw_tty *FUNC_0(int VAR_6)
{
 if (VAR_6 < VAR_3->minor_start
   || VAR_6 >= VAR_3->minor_start +
   VAR_0)
  return ((void*)0);
 else {
  int VAR_7 = VAR_6 - VAR_3->minor_start;






  if (!VAR_4 &&
    VAR_7 >=
     VAR_1 * VAR_2)
   return ((void*)0);

  return VAR_5[VAR_7];
 }
}
