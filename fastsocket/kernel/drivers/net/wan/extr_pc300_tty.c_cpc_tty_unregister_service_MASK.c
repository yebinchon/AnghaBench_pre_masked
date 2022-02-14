
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_10__ {int name; int state; scalar_t__ tty_minor; int * tty; TYPE_4__* pc300dev; } ;
typedef TYPE_3__ st_cpc_tty_area ;
struct TYPE_11__ {TYPE_2__* chan; TYPE_1__* dev; scalar_t__ cpc_tty; } ;
typedef TYPE_4__ pc300dev_t ;
struct TYPE_12__ {int refcount; } ;
struct TYPE_9__ {int card; } ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_3 (TYPE_5__*) ;

void FUNC_4(pc300dev_t *VAR_4)
{
 st_cpc_tty_area *VAR_5;
 ulong VAR_6;
 int VAR_7;

 if ((VAR_5= (st_cpc_tty_area *) VAR_4->cpc_tty) == ((void*)0)) {
  FUNC_0("%s: interface is not TTY\n", VAR_4->dev->name);
  return;
 }
 FUNC_0("%s: cpc_tty_unregister_service", VAR_5->name);

 if (VAR_5->pc300dev != VAR_4) {
  FUNC_0("%s: invalid tty ptr=%s\n",
  VAR_4->dev->name, VAR_5->name);
  return;
 }

 if (--VAR_1 == 0) {
  if (VAR_3.refcount) {
   FUNC_0("%s: unregister is not possible, refcount=%d",
       VAR_5->name, VAR_3.refcount);
   VAR_1++;
   VAR_2 = 1;
   return;
  } else {
   FUNC_0("%s: unregister the tty driver\n", VAR_5->name);
   if ((VAR_7=FUNC_3(&VAR_3))) {
    FUNC_0("%s: ERROR ->unregister the tty driver error=%d\n",
        VAR_5->name,VAR_7);
   }
  }
 }
 FUNC_1(VAR_4->chan->card,VAR_6);
 VAR_5->tty = ((void*)0);
 FUNC_2(VAR_4->chan->card, VAR_6);
 VAR_5->tty_minor = 0;
 VAR_5->state = VAR_0;
}
