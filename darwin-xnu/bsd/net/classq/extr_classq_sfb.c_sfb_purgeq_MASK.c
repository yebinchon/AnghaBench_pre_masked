
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sfb {TYPE_1__* sfb_ifp; } ;
typedef int pktsched_pkt_t ;
typedef int class_queue_t ;
struct TYPE_2__ {int if_snd; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (struct sfb*,int *,scalar_t__,int ,int *) ;

void
FUNC_4(struct sfb *VAR_1, class_queue_t *VAR_2, u_int32_t VAR_3, u_int32_t *VAR_4,
    u_int32_t *VAR_5)
{
 u_int32_t VAR_6 = 0, VAR_7 = 0;
 pktsched_pkt_t VAR_8;

 FUNC_0(&VAR_1->sfb_ifp->if_snd);
 while (FUNC_3(VAR_1, VAR_2, VAR_3, VAR_0, &VAR_8) != ((void*)0)) {
  VAR_6++;
  VAR_7 += FUNC_2(&VAR_8);
  FUNC_1(&VAR_8);
 }

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_6;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7;
}
