
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ selfipis; scalar_t__ timerints; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int,int *,int ,int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_2(void)
{
 int VAR_5;

 for (VAR_5=0; VAR_5<VAR_0; VAR_5++) {
  VAR_2[VAR_5].timerints = 0;
  VAR_2[VAR_5].selfipis = 0;
 }

 FUNC_0(&VAR_3, 0);

 VAR_4 = FUNC_1("smtc", 0444, ((void*)0),
                                     VAR_1, ((void*)0));
}
