
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; scalar_t__ expires; int function; } ;
struct TYPE_4__ {int devicename; int * ioport; int lock; TYPE_2__ reset_timer; scalar_t__ EngineUp; int stat_timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ,int ,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,int) ;
 TYPE_1__** VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

int FUNC_9(int VAR_7)
{
 unsigned long VAR_8;

 if(!FUNC_0(VAR_7)) {
  FUNC_6("Invalid param: %d is not a valid card id\n", VAR_7);
  return -VAR_1;
 }

 FUNC_3(VAR_7, VAR_2, 0, ((void*)0));

 if(VAR_5[VAR_7]->EngineUp) {
  FUNC_2(&VAR_5[VAR_7]->stat_timer);
 }

 VAR_5[VAR_7]->EngineUp = 0;

 FUNC_7(&VAR_5[VAR_7]->lock, VAR_8);
 FUNC_4(&VAR_5[VAR_7]->reset_timer);
 VAR_5[VAR_7]->reset_timer.function = VAR_6;
 VAR_5[VAR_7]->reset_timer.data = VAR_7;
 VAR_5[VAR_7]->reset_timer.expires = VAR_4 + VAR_0;
 FUNC_1(&VAR_5[VAR_7]->reset_timer);
 FUNC_8(&VAR_5[VAR_7]->lock, VAR_8);

 FUNC_5(0x1,VAR_5[VAR_7]->ioport[VAR_3]);

 FUNC_6("%s: Adapter Reset\n", VAR_5[VAR_7]->devicename);
 return 0;
}
