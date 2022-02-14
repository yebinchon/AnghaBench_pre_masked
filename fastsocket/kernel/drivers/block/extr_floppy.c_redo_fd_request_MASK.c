
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct request {int errors; TYPE_1__* rq_disk; } ;
struct TYPE_12__ {int* autodetect; } ;
struct TYPE_11__ {size_t probed_format; } ;
struct TYPE_10__ {int queue_lock; } ;
struct TYPE_9__ {scalar_t__ flags; } ;
struct TYPE_8__ {scalar_t__ private_data; } ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_6 ;
 struct request* FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 struct request* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 TYPE_2__ VAR_10 ;
 int FUNC_4 (scalar_t__) ;
 int * VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (scalar_t__) ;
 TYPE_3__* VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int VAR_19 ;
 TYPE_2__* VAR_20 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (void (*) ()) ;
 scalar_t__ FUNC_16 (scalar_t__,int *) ;
 int FUNC_17 () ;
 int FUNC_18 () ;

__attribute__((used)) static void FUNC_19(void)
{

 int VAR_21;
 int VAR_22;

 VAR_18 = VAR_17;
 if (VAR_7 < VAR_4)
  FUNC_5(VAR_7);

 for (;;) {
  if (!VAR_8) {
   struct request *VAR_23;

   FUNC_13(VAR_14->queue_lock);
   VAR_23 = FUNC_2(VAR_14);
   FUNC_14(VAR_14->queue_lock);
   if (!VAR_23) {
    VAR_11 = ((void*)0);
    FUNC_18();
    return;
   }
   VAR_8 = VAR_23;
  }
  VAR_21 = (long)VAR_8->rq_disk->private_data;
  FUNC_11(VAR_21);
  FUNC_9(VAR_9, "redo fd request", 0);

  FUNC_12(VAR_21);
  VAR_20 = &VAR_10;
  VAR_20->flags = 0;
  if (FUNC_15(FUNC_19))
   return;
  FUNC_4(VAR_7);
  if (FUNC_16(VAR_7, &VAR_13) ||
      FUNC_1(VAR_2)) {
   FUNC_0("disk absent or changed during operation\n");
   {FUNC_8(0); continue; };
  }
  if (!VAR_6) {
   if (!VAR_19) {
    VAR_1->probed_format = 0;
    if (FUNC_7()) {
     FUNC_0("no autodetectable formats\n");
     VAR_6 = ((void*)0);
     {FUNC_8(0); continue; };
    }
   }
   VAR_19 = 1;
   VAR_6 =
       VAR_16 + VAR_0->autodetect[VAR_1->probed_format];
  } else
   VAR_19 = 0;
  VAR_12 = &(VAR_8->errors);
  VAR_22 = FUNC_6();
  if (VAR_22 < 2) {
   FUNC_8(VAR_22);
   continue;
  }

  if (FUNC_1(VAR_3))
   FUNC_17();
  FUNC_10(VAR_15);
  FUNC_3("queue fd request");
  return;
 }

}
