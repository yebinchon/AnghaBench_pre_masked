
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mkiss {int rcount; scalar_t__ buffsize; unsigned char* rbuff; int buflock; int flags; TYPE_2__* dev; } ;
struct TYPE_3__ {int rx_over_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct mkiss*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct mkiss *VAR_3, unsigned char VAR_4)
{
 switch (VAR_4) {
 case 131:

  if (FUNC_6(VAR_2, &VAR_3->flags))
   FUNC_1(VAR_2, &VAR_3->flags);

  if (!FUNC_5(VAR_0, &VAR_3->flags) && (VAR_3->rcount > 2))
   FUNC_0(VAR_3);

  FUNC_1(VAR_1, &VAR_3->flags);
  VAR_3->rcount = 0;
  return;

 case 130:
  FUNC_2(VAR_1, &VAR_3->flags);
  return;
 case 128:
  if (FUNC_5(VAR_1, &VAR_3->flags))
   VAR_4 = 130;
  break;
 case 129:
  if (FUNC_5(VAR_1, &VAR_3->flags))
   VAR_4 = 131;
  break;
 }

 FUNC_3(&VAR_3->buflock);
 if (!FUNC_6(VAR_0, &VAR_3->flags)) {
  if (VAR_3->rcount < VAR_3->buffsize) {
   VAR_3->rbuff[VAR_3->rcount++] = VAR_4;
   FUNC_4(&VAR_3->buflock);
   return;
  }

  VAR_3->dev->stats.rx_over_errors++;
  FUNC_2(VAR_0, &VAR_3->flags);
 }
 FUNC_4(&VAR_3->buflock);
}
