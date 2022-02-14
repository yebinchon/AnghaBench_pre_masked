
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* entryPoint ) (int ) ;int argv; } ;
typedef TYPE_1__ pspThreadData ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

int FUNC_3 (unsigned int VAR_0, void *VAR_1)
{
  int VAR_2;
  pspThreadData *VAR_3;

  VAR_3 = FUNC_0(FUNC_1());

  VAR_2 = (*(VAR_3->entryPoint))(VAR_3->argv);

  return VAR_2;
}
