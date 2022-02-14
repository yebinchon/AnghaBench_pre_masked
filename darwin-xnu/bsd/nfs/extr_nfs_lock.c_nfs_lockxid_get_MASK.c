
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct TYPE_4__ {int lm_xid; } ;
struct TYPE_5__ {TYPE_1__ lmr_msg; } ;
typedef TYPE_2__ LOCKD_MSG_REQUEST ;


 TYPE_2__* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct timeval*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;

uint64_t
FUNC_3(void)
{
 LOCKD_MSG_REQUEST *VAR_3;


 if (!VAR_1) {






  struct timeval VAR_4;
  FUNC_1(&VAR_4);
  VAR_1 = (uint64_t)VAR_4.tv_sec << 12;
 }


 do {

  if (++VAR_1 == 0)
   VAR_1++;
  if (!(VAR_3 = FUNC_0(&VAR_2, VAR_0)) ||
       (VAR_3->lmr_msg.lm_xid < VAR_1)) {

   break;
  }

 } while (FUNC_2(VAR_1));

 return VAR_1;
}
