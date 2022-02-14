
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tcp_seq ;
struct tcpcb {int rcv_numsacks; void* rcv_nxt; int t_flags; scalar_t__ acc_iaj; struct sackblk* sackblks; } ;
struct sackblk {void* start; void* end; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,void*) ;
 scalar_t__ FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 (void*,void*) ;
 scalar_t__ FUNC_3 (void*,void*) ;
 int VAR_1 ;
 int FUNC_4 (struct sackblk*,struct sackblk*,int) ;
 int FUNC_5 (struct tcpcb*) ;
 int FUNC_6 (struct tcpcb*) ;

void
FUNC_7(struct tcpcb *VAR_2, tcp_seq VAR_3, tcp_seq VAR_4)
{






 struct sackblk VAR_5, VAR_6[VAR_0];
 int VAR_7, VAR_8, VAR_9;


 VAR_5.start = VAR_3;
 VAR_5.end = VAR_4;






 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_2->rcv_numsacks; VAR_9++) {
  tcp_seq VAR_10 = VAR_2->sackblks[VAR_9].start;
  tcp_seq VAR_11 = VAR_2->sackblks[VAR_9].end;
  if (FUNC_0(VAR_10, VAR_11) || FUNC_2(VAR_10, VAR_2->rcv_nxt)) {



  } else if (FUNC_2(VAR_5.start, VAR_11) &&
      FUNC_0(VAR_5.end, VAR_10)) {




   if (FUNC_1(VAR_5.start, VAR_10))
    VAR_5.start = VAR_10;
   if (FUNC_3(VAR_5.end, VAR_11))
    VAR_5.end = VAR_11;
  } else {



   VAR_6[VAR_8].start = VAR_10;
   VAR_6[VAR_8].end = VAR_11;
   VAR_8++;
  }
 }




 VAR_7 = 0;
 if (FUNC_1(VAR_5.start, VAR_2->rcv_nxt)) {




  VAR_2->sackblks[0] = VAR_5;
  VAR_7 = 1;




  if (VAR_8 >= VAR_0)
   VAR_8--;
 }
 if (VAR_8 > 0) {



  FUNC_4(VAR_6, &VAR_2->sackblks[VAR_7],
        sizeof(struct sackblk) * VAR_8);
 }


 VAR_2->rcv_numsacks = VAR_7 + VAR_8;





 if ((VAR_2->t_flags & VAR_1) != 0 && VAR_2->rcv_numsacks > 0)
  FUNC_6(VAR_2);





}
