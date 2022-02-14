
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wait_queue_t ;
struct net_device {struct airo_info* ml_priv; } ;
struct TYPE_5__ {scalar_t__ event; } ;
struct airo_info {int sem; scalar_t__ jobs; scalar_t__ flags; TYPE_1__ power; int thr_wait; scalar_t__ scan_timeout; scalar_t__ expires; } ;
struct TYPE_6__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct airo_info*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct airo_info*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct airo_info*) ;
 TYPE_2__* VAR_13 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 scalar_t__ VAR_14 ;
 int FUNC_11 () ;
 unsigned long FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (struct airo_info*) ;
 unsigned long FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 () ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ,scalar_t__*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (int ,scalar_t__*) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 () ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(void *VAR_15) {
 struct net_device *VAR_16 = VAR_15;
 struct airo_info *VAR_17 = VAR_16->ml_priv;
 int VAR_18;

 FUNC_20();
 while(1) {

  FUNC_24();

  if (FUNC_21(VAR_2, &VAR_17->jobs))
   break;

  if (VAR_17->jobs) {
   VAR_18 = FUNC_8(&VAR_17->sem);
  } else {
   wait_queue_t VAR_19;

   FUNC_10(&VAR_19, VAR_13);
   FUNC_0(&VAR_17->thr_wait, &VAR_19);
   for (;;) {
    FUNC_19(VAR_11);
    if (VAR_17->jobs)
     break;
    if (VAR_17->expires || VAR_17->scan_timeout) {
     if (VAR_17->scan_timeout &&
       FUNC_22(VAR_14,VAR_17->scan_timeout)){
      FUNC_18(VAR_6, &VAR_17->jobs);
      break;
     } else if (VAR_17->expires &&
       FUNC_22(VAR_14,VAR_17->expires)){
      FUNC_18(VAR_1, &VAR_17->jobs);
      break;
     }
     if (!FUNC_11() &&
         !FUNC_9(VAR_13)) {
      unsigned long VAR_20;
      if (!VAR_17->expires || !VAR_17->scan_timeout) {
       VAR_20 = FUNC_12(VAR_17->expires,
        VAR_17->scan_timeout);
      } else {
       VAR_20 = FUNC_14(VAR_17->expires,
        VAR_17->scan_timeout);
      }
      FUNC_17(VAR_20 - VAR_14);
      continue;
     }
    } else if (!FUNC_11() &&
        !FUNC_9(VAR_13)) {
     FUNC_16();
     continue;
    }
    break;
   }
   VAR_13->state = VAR_12;
   FUNC_15(&VAR_17->thr_wait, &VAR_19);
   VAR_18 = 1;
  }

  if (VAR_18)
   continue;

  if (FUNC_21(VAR_2, &VAR_17->jobs)) {
   FUNC_25(&VAR_17->sem);
   break;
  }

  if (VAR_17->power.event || FUNC_21(VAR_0, &VAR_17->flags)) {
   FUNC_25(&VAR_17->sem);
   continue;
  }

  if (FUNC_21(VAR_9, &VAR_17->jobs))
   FUNC_1(VAR_16);
  else if (FUNC_21(VAR_10, &VAR_17->jobs))
   FUNC_2(VAR_16);
  else if (FUNC_21(VAR_7, &VAR_17->jobs))
   FUNC_4(VAR_16);
  else if (FUNC_21(VAR_8, &VAR_17->jobs))
   FUNC_5(VAR_17);
  else if (FUNC_21(VAR_5, &VAR_17->jobs))
   FUNC_7(VAR_17);
  else if (FUNC_21(VAR_4, &VAR_17->jobs))
   FUNC_13(VAR_17);
  else if (FUNC_21(VAR_3, &VAR_17->jobs))
   FUNC_6(VAR_16);
  else if (FUNC_21(VAR_1, &VAR_17->jobs))
   FUNC_23(VAR_16);
  else if (FUNC_21(VAR_6, &VAR_17->jobs))
   FUNC_3(VAR_17);
  else
   FUNC_25(&VAR_17->sem);
 }

 return 0;
}
