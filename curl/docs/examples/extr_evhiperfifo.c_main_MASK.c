
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* data; } ;
struct TYPE_9__ {TYPE_2__* data; } ;
struct TYPE_10__ {int multi; int loop; TYPE_1__ fifo_event; TYPE_7__ timer_event; } ;
typedef TYPE_2__ GlobalInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_7__*,int ,int,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;

int FUNC_8(int VAR_7, char **VAR_8)
{
  GlobalInfo VAR_9;
  (void)VAR_7;
  (void)VAR_8;

  FUNC_7(&VAR_9, 0, sizeof(GlobalInfo));
  VAR_9.loop = FUNC_3(0);

  FUNC_6(&VAR_9);
  VAR_9.multi = FUNC_1();

  FUNC_5(&VAR_9.timer_event, VAR_6, 0., 0.);
  VAR_9.timer_event.data = &VAR_9;
  VAR_9.fifo_event.data = &VAR_9;
  FUNC_2(VAR_9.multi, VAR_1, VAR_5);
  FUNC_2(VAR_9.multi, VAR_0, &VAR_9);
  FUNC_2(VAR_9.multi, VAR_3, VAR_4);
  FUNC_2(VAR_9.multi, VAR_2, &VAR_9);




  FUNC_4(VAR_9.loop, 0);
  FUNC_0(VAR_9.multi);
  return 0;
}
