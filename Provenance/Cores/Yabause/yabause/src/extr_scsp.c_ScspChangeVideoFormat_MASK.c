
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* ChangeVideoFormat ) (int) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;

int
FUNC_2 (int VAR_5)
{
  VAR_4 = 44100 / (VAR_5 ? 50 : 60);
  VAR_1 = VAR_5 ? 313 : 263;
  VAR_3 = VAR_4 * VAR_2;

  if (FUNC_0 () < 0)
    return -1;

  VAR_0->ChangeVideoFormat (VAR_5 ? 50 : 60);

  return 0;
}
