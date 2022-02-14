
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inbuf_t {int dummy; } ;
struct gigaset_driver {int dummy; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct cardstate {int channels; int onechannel; int ignoreframes; int running; int gotfwver; int cidmode; TYPE_2__ timer; int lock; scalar_t__ cs_init; TYPE_1__* ops; scalar_t__ cmdbytes; scalar_t__ curlen; int cmdlock; int * lastcmdbuf; int cmdbuf; scalar_t__ isdn_up; scalar_t__ connected; void* inbuf; int * bcs; scalar_t__ cbytes; scalar_t__ dle; int at_state; int mstate; int mode; scalar_t__ waiting; int waitqueue; int tabcid; int tabnocid; int * tty_dev; int * tty; int * dev; scalar_t__ open_count; scalar_t__ cur_at_seq; scalar_t__ commands_pending; int event_tasklet; scalar_t__ ev_head; scalar_t__ ev_tail; int ev_lock; int temp_at_states; } ;
struct bc_state {int dummy; } ;
struct TYPE_5__ {int (* initcshw ) (struct cardstate*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 struct cardstate* FUNC_2 (struct gigaset_driver*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,int *,struct cardstate*,int ) ;
 int FUNC_5 (struct cardstate*) ;
 int VAR_7 ;
 int FUNC_6 (struct cardstate*) ;
 int FUNC_7 (void*,int *,struct cardstate*,int ) ;
 int FUNC_8 (struct cardstate*) ;
 int FUNC_9 (int *,struct cardstate*,int) ;
 int FUNC_10 (struct cardstate*,char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_10 ;
 void* FUNC_13 (int,int ) ;
 int FUNC_14 (struct cardstate*,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (TYPE_2__*,int ,unsigned long) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (struct cardstate*) ;
 int FUNC_22 (int *,int *,unsigned long) ;
 int VAR_11 ;

struct cardstate *FUNC_23(struct gigaset_driver *VAR_12, int VAR_13,
     int VAR_14, int VAR_15,
     int VAR_16, const char *VAR_17)
{
 struct cardstate *VAR_18 = ((void*)0);
 unsigned long VAR_19;
 int VAR_20;

 FUNC_3(VAR_0, "allocating cs");
 if (!(VAR_18 = FUNC_2(VAR_12))) {
  FUNC_16("maximum number of devices exceeded\n");
  return ((void*)0);
 }

 FUNC_3(VAR_0, "allocating bcs[0..%d]", VAR_13 - 1);
 VAR_18->bcs = FUNC_13(VAR_13 * sizeof(struct bc_state), VAR_1);
 if (!VAR_18->bcs) {
  FUNC_16("out of memory\n");
  goto error;
 }
 FUNC_3(VAR_0, "allocating inbuf");
 VAR_18->inbuf = FUNC_13(sizeof(struct inbuf_t), VAR_1);
 if (!VAR_18->inbuf) {
  FUNC_16("out of memory\n");
  goto error;
 }

 VAR_18->cs_init = 0;
 VAR_18->channels = VAR_13;
 VAR_18->onechannel = VAR_14;
 VAR_18->ignoreframes = VAR_15;
 FUNC_0(&VAR_18->temp_at_states);
 VAR_18->running = 0;
 FUNC_11(&VAR_18->timer);
 FUNC_18(&VAR_18->ev_lock);
 VAR_18->ev_tail = 0;
 VAR_18->ev_head = 0;

 FUNC_22(&VAR_18->event_tasklet, &VAR_7,
       (unsigned long) VAR_18);
 VAR_18->commands_pending = 0;
 VAR_18->cur_at_seq = 0;
 VAR_18->gotfwver = -1;
 VAR_18->open_count = 0;
 VAR_18->dev = ((void*)0);
 VAR_18->tty = ((void*)0);
 VAR_18->tty_dev = ((void*)0);
 VAR_18->cidmode = VAR_16 != 0;
 VAR_18->tabnocid = VAR_9;
 VAR_18->tabcid = VAR_8;

 FUNC_12(&VAR_18->waitqueue);
 VAR_18->waiting = 0;

 VAR_18->mode = VAR_5;
 VAR_18->mstate = VAR_4;

 for (VAR_20 = 0; VAR_20 < VAR_13; ++VAR_20) {
  FUNC_3(VAR_0, "setting up bcs[%d].read", VAR_20);
  if (!FUNC_9(VAR_18->bcs + VAR_20, VAR_18, VAR_20)) {
   FUNC_16("could not allocate channel %d data\n", VAR_20);
   goto error;
  }
 }

 ++VAR_18->cs_init;

 FUNC_3(VAR_0, "setting up at_state");
 FUNC_18(&VAR_18->lock);
 FUNC_4(&VAR_18->at_state, ((void*)0), VAR_18, 0);
 VAR_18->dle = 0;
 VAR_18->cbytes = 0;

 FUNC_3(VAR_0, "setting up inbuf");
 if (VAR_14) {
  FUNC_7(VAR_18->inbuf, VAR_18->bcs, VAR_18, VAR_3);
 } else
  FUNC_7(VAR_18->inbuf, ((void*)0), VAR_18, VAR_3);

 VAR_18->connected = 0;
 VAR_18->isdn_up = 0;

 FUNC_3(VAR_0, "setting up cmdbuf");
 VAR_18->cmdbuf = *(VAR_18->lastcmdbuf = ((void*)0));
 FUNC_18(&VAR_18->cmdlock);
 VAR_18->curlen = 0;
 VAR_18->cmdbytes = 0;

 FUNC_3(VAR_0, "setting up iif");
 if (!FUNC_10(VAR_18, VAR_17)) {
  FUNC_16("error registering ISDN device\n");
  goto error;
 }

 FUNC_14(VAR_18, VAR_6);
 ++VAR_18->cs_init;
 FUNC_3(VAR_0, "setting up hw");
 if (!VAR_18->ops->initcshw(VAR_18))
  goto error;

 ++VAR_18->cs_init;


 FUNC_6(VAR_18);


 FUNC_8(VAR_18);

 FUNC_19(&VAR_18->lock, VAR_19);
 VAR_18->running = 1;
 FUNC_20(&VAR_18->lock, VAR_19);
 FUNC_17(&VAR_18->timer, VAR_11, (unsigned long) VAR_18);
 VAR_18->timer.expires = VAR_10 + FUNC_15(VAR_2);


 FUNC_1(&VAR_18->timer);

 FUNC_3(VAR_0, "cs initialized");
 return VAR_18;

error:
 FUNC_3(VAR_0, "failed");
 FUNC_5(VAR_18);
 return ((void*)0);
}
