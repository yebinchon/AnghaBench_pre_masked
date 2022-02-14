
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int multi; int evbase; int timer_event; } ;
typedef TYPE_1__ GlobalInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

int FUNC_11(int VAR_7, char **VAR_8)
{
  GlobalInfo VAR_9;
  (void)VAR_7;
  (void)VAR_8;

  FUNC_10(&VAR_9, 0, sizeof(GlobalInfo));
  VAR_9.evbase = FUNC_6();
  FUNC_9(&VAR_9);
  VAR_9.multi = FUNC_2();
  FUNC_8(&VAR_9.timer_event, VAR_9.evbase, VAR_6, &VAR_9);


  FUNC_3(VAR_9.multi, VAR_1, VAR_5);
  FUNC_3(VAR_9.multi, VAR_0, &VAR_9);
  FUNC_3(VAR_9.multi, VAR_3, VAR_4);
  FUNC_3(VAR_9.multi, VAR_2, &VAR_9);




  FUNC_4(VAR_9.evbase);



  FUNC_0(&VAR_9);
  FUNC_7(&VAR_9.timer_event);
  FUNC_5(VAR_9.evbase);
  FUNC_1(VAR_9.multi);
  return 0;
}
