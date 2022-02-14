
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sring; } ;
struct blkfront_info {scalar_t__ ring_ref; scalar_t__ irq; scalar_t__ evtchn; TYPE_1__ ring; int callback; scalar_t__ rq; int connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,struct blkfront_info*) ;

__attribute__((used)) static void FUNC_7(struct blkfront_info *VAR_4, int VAR_5)
{

 FUNC_4(&VAR_3);
 VAR_4->connected = VAR_5 ?
  VAR_1 : VAR_0;

 if (VAR_4->rq)
  FUNC_0(VAR_4->rq);

 FUNC_2(&VAR_4->callback);
 FUNC_5(&VAR_3);


 FUNC_1();


 if (VAR_4->ring_ref != VAR_2) {
  FUNC_3(VAR_4->ring_ref, 0,
       (unsigned long)VAR_4->ring.sring);
  VAR_4->ring_ref = VAR_2;
  VAR_4->ring.sring = ((void*)0);
 }
 if (VAR_4->irq)
  FUNC_6(VAR_4->irq, VAR_4);
 VAR_4->evtchn = VAR_4->irq = 0;

}
