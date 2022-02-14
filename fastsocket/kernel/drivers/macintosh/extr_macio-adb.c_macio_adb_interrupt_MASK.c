
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct adb_request {int nbytes; int* data; int sent; int reply_len; int* reply; void (* done ) (struct adb_request*) ;int complete; struct adb_request* next; scalar_t__ reply_expected; } ;
typedef int irqreturn_t ;
struct TYPE_11__ {int r; } ;
struct TYPE_10__ {int r; } ;
struct TYPE_9__ {int r; } ;
struct TYPE_7__ {int r; } ;
struct TYPE_12__ {TYPE_5__ intr; TYPE_4__ error; TYPE_3__ dcount; TYPE_2__* data; TYPE_1__ ctrl; } ;
struct TYPE_8__ {int r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* VAR_7 ;
 int FUNC_1 (unsigned char*,int,int) ;
 struct adb_request* VAR_8 ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void FUNC_7 (struct adb_request*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_10, void *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 struct adb_request *VAR_15 = ((void*)0);
 unsigned char VAR_16[16];
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;

 FUNC_5(&VAR_9);
 if (FUNC_2(&VAR_7->intr.r) & VAR_5) {
  VAR_20 = 1;
  if ((VAR_15 = VAR_8) != 0) {

   for (VAR_12 = 0; VAR_12 < VAR_15->nbytes; ++VAR_12)
    FUNC_4(&VAR_7->data[VAR_12].r, VAR_15->data[VAR_12]);
   FUNC_4(&VAR_7->dcount.r, VAR_15->nbytes & VAR_4);
   VAR_15->sent = 1;
   if (VAR_15->reply_expected) {
    FUNC_4(&VAR_7->ctrl.r, VAR_3 + VAR_1);
   } else {
    FUNC_4(&VAR_7->ctrl.r, VAR_3);
    VAR_8 = VAR_15->next;
    VAR_18 = 1;
    if (VAR_8)
     FUNC_4(&VAR_7->ctrl.r, FUNC_2(&VAR_7->ctrl.r) | VAR_6);
   }
  }
  FUNC_4(&VAR_7->intr.r, 0);
 }

 if (FUNC_2(&VAR_7->intr.r) & VAR_2) {
  VAR_20 = 1;
  VAR_14 = FUNC_2(&VAR_7->error.r);
  if (VAR_8 && VAR_8->sent) {

   VAR_15 = VAR_8;
   if (VAR_14 == 0) {
    VAR_15->reply_len = FUNC_2(&VAR_7->dcount.r) & VAR_4;
    for (VAR_12 = 0; VAR_12 < VAR_15->reply_len; ++VAR_12)
     VAR_15->reply[VAR_12] = FUNC_2(&VAR_7->data[VAR_12].r);
   }
   VAR_8 = VAR_15->next;
   VAR_18 = 1;
   if (VAR_8)
    FUNC_4(&VAR_7->ctrl.r, FUNC_2(&VAR_7->ctrl.r) | VAR_6);
  } else if (VAR_14 == 0) {

   VAR_13 = FUNC_2(&VAR_7->dcount.r) & VAR_4;
   for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12)
    VAR_16[VAR_12] = FUNC_2(&VAR_7->data[VAR_12].r);
   VAR_17 = VAR_13;
   VAR_19 = (FUNC_2(&VAR_7->dcount.r) & VAR_0) != 0;
  }
  FUNC_4(&VAR_7->error.r, 0);
  FUNC_4(&VAR_7->intr.r, 0);
 }
 FUNC_6(&VAR_9);
 if (VAR_18 && VAR_15) {
     void (*VAR_21)(struct adb_request *) = VAR_15->done;
     FUNC_3();
     VAR_15->complete = 1;



     if (VAR_21)
  (*VAR_21)(VAR_15);
 }
 if (VAR_17)
  FUNC_1(VAR_16, VAR_17, VAR_19);

 return FUNC_0(VAR_20);
}
