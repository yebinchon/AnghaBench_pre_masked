
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_queue {TYPE_1__* sg; int bounce_buf; int bounce_sg_len; int bounce_sg; int req; } ;
struct TYPE_2__ {int length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

void FUNC_4(struct mmc_queue *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1->bounce_buf)
  return;

 if (FUNC_2(VAR_1->req) != VAR_0)
  return;

 FUNC_1(VAR_2);
 FUNC_3(VAR_1->bounce_sg, VAR_1->bounce_sg_len,
  VAR_1->bounce_buf, VAR_1->sg[0].length);
 FUNC_0(VAR_2);
}
