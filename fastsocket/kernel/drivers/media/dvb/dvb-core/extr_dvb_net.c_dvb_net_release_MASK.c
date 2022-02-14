
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_net {int exit; int * state; TYPE_1__* dvbdev; } ;
struct TYPE_2__ {int users; int wait_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_net*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;

void FUNC_3 (struct dvb_net *VAR_1)
{
 int VAR_2;

 VAR_1->exit = 1;
 if (VAR_1->dvbdev->users < 1)
  FUNC_2(VAR_1->dvbdev->wait_queue,
    VAR_1->dvbdev->users==1);

 FUNC_1(VAR_1->dvbdev);

 for (VAR_2=0; VAR_2<VAR_0; VAR_2++) {
  if (!VAR_1->state[VAR_2])
   continue;
  FUNC_0(VAR_1, VAR_2);
 }
}
