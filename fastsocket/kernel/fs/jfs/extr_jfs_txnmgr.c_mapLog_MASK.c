
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
struct tlock {int type; int flag; int lock; } ;
struct tblock {int dummy; } ;
struct pxd_lock {int index; int flag; int pxd; } ;
struct TYPE_5__ {int pxd; void* nxd; void* type; } ;
struct TYPE_4__ {int pxd; } ;
struct TYPE_6__ {TYPE_2__ updatemap; TYPE_1__ redopage; } ;
struct lrd {void* backchain; TYPE_3__ log; void* type; } ;
struct jfs_log {int dummy; } ;
typedef int pxd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct jfs_log*,struct tblock*,struct lrd*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct jfs_log * VAR_7, struct tblock * VAR_8, struct lrd * VAR_9,
     struct tlock * VAR_10)
{
 struct pxd_lock *VAR_11;
 int VAR_12, VAR_13;
 pxd_t *VAR_14;
 if (VAR_10->type & VAR_5) {



  VAR_9->type = FUNC_1(VAR_2);
  VAR_11 = (struct pxd_lock *) & VAR_10->lock;
  VAR_14 = &VAR_9->log.redopage.pxd;
  *VAR_14 = VAR_11->pxd;
  VAR_9->backchain = FUNC_2(FUNC_5(VAR_7, VAR_8, VAR_9, ((void*)0)));
  VAR_9->type = FUNC_1(VAR_3);
  VAR_9->log.updatemap.type = FUNC_1(VAR_1);
  VAR_9->log.updatemap.nxd = FUNC_1(1);
  VAR_9->log.updatemap.pxd = VAR_11->pxd;
  VAR_9->backchain = FUNC_2(FUNC_5(VAR_7, VAR_8, VAR_9, ((void*)0)));




  VAR_10->flag |= VAR_6;
  return;
 }





 else {





  VAR_9->type = FUNC_1(VAR_3);
  VAR_11 = (struct pxd_lock *) & VAR_10->lock;
  VAR_13 = VAR_11->index;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++, VAR_11++) {
   if (VAR_11->flag & VAR_4)
    VAR_9->log.updatemap.type =
        FUNC_1(VAR_0);
   else
    VAR_9->log.updatemap.type =
        FUNC_1(VAR_1);
   VAR_9->log.updatemap.nxd = FUNC_1(1);
   VAR_9->log.updatemap.pxd = VAR_11->pxd;
   VAR_9->backchain =
       FUNC_2(FUNC_5(VAR_7, VAR_8, VAR_9, ((void*)0)));
   FUNC_3("mapLog: xaddr:0x%lx xlen:0x%x",
     (ulong) FUNC_0(&VAR_11->pxd),
     FUNC_4(&VAR_11->pxd));
  }


  VAR_10->flag |= VAR_6;
 }
}
