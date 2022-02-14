
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int id; } ;
struct serio {TYPE_1__* port_data; int close; int open; int write; TYPE_3__ id; int phys; int name; } ;
struct TYPE_9__ {int icount; int seidx; int list; int * tasklet; scalar_t__* serio_oidx; scalar_t__* serio_opacket; TYPE_1__* serio_map; struct serio** serio; int csem; scalar_t__ opercnt; scalar_t__ imatch; int isem; int osem; int lock; scalar_t__ ostarted; scalar_t__ istarted; } ;
typedef TYPE_2__ hil_mlc ;
struct TYPE_8__ {int didx; int di_revmap; TYPE_2__* mlc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct serio* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct serio*) ;
 int FUNC_10 (int ,int,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

int FUNC_14(hil_mlc *VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;

 FUNC_0(VAR_10 == ((void*)0));

 VAR_10->istarted = 0;
 VAR_10->ostarted = 0;

 FUNC_8(&VAR_10->lock);
 FUNC_4(&VAR_10->osem);

 FUNC_4(&VAR_10->isem);
 VAR_10->icount = -1;
 VAR_10->imatch = 0;

 VAR_10->opercnt = 0;

 FUNC_5(&(VAR_10->csem));

 FUNC_2(VAR_10);
 FUNC_1(VAR_10, 0);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  struct serio *VAR_13;
  FUNC_3(VAR_10, VAR_11);
  VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_0);
  VAR_10->serio[VAR_11] = VAR_13;
  FUNC_10(VAR_13->name, sizeof(VAR_13->name)-1, "HIL_SERIO%d", VAR_11);
  FUNC_10(VAR_13->phys, sizeof(VAR_13->phys)-1, "HIL%d", VAR_11);
  VAR_13->id = VAR_4;
  VAR_13->id.id = VAR_11;
  VAR_13->write = VAR_6;
  VAR_13->open = VAR_5;
  VAR_13->close = VAR_3;
  VAR_13->port_data = &(VAR_10->serio_map[VAR_11]);
  VAR_10->serio_map[VAR_11].mlc = VAR_10;
  VAR_10->serio_map[VAR_11].didx = VAR_11;
  VAR_10->serio_map[VAR_11].di_revmap = -1;
  VAR_10->serio_opacket[VAR_11] = 0;
  VAR_10->serio_oidx[VAR_11] = 0;
  FUNC_9(VAR_13);
 }

 VAR_10->tasklet = &VAR_9;

 FUNC_12(&VAR_8, VAR_12);
 FUNC_7(&VAR_10->list, &VAR_7);
 VAR_10->seidx = VAR_1;
 FUNC_13(&VAR_8, VAR_12);

 FUNC_11(&VAR_9);
 return 0;
}
