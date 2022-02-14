
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef void* tcp_seq ;
struct tcpopt {int to_nsacks; scalar_t__ to_sacks; } ;
struct tcphdr {void* th_ack; } ;
struct TYPE_2__ {int sack_bytes_rexmit; } ;
struct tcpcb {TYPE_1__ sackhint; int snd_holes; void* snd_fack; void* snd_una; } ;
struct sackhole {void* start; void* rxmit; int rxmit_start; void* end; } ;
struct sackblk {void* start; void* end; } ;
typedef int sack ;


 scalar_t__ FUNC_0 (void*,void*) ;
 scalar_t__ FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 (void*,void*) ;
 scalar_t__ FUNC_3 (void*,void*) ;
 void* FUNC_4 (void*,void*) ;
 void* FUNC_5 (void*,void*) ;
 scalar_t__ FUNC_6 (int *) ;
 struct sackhole* FUNC_7 (int *,int ) ;
 struct sackhole* FUNC_8 (struct sackhole*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (struct tcpcb*,struct sackblk*,void*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (scalar_t__,struct sackblk*,int) ;
 void* FUNC_12 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (struct tcpcb*,struct sackhole*,void*,void*) ;
 struct sackhole* FUNC_14 (struct tcpcb*,void*,void*,struct sackhole*) ;
 int FUNC_15 (struct tcpcb*,struct sackhole*) ;

void
FUNC_16(struct tcpcb *VAR_4, struct tcpopt *VAR_5, struct tcphdr *VAR_6,
 u_int32_t *VAR_7)
{
 struct sackhole *VAR_8, *VAR_9;
 struct sackblk VAR_10, VAR_11[VAR_1 + 1], *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 tcp_seq VAR_16 = 0, VAR_17 = VAR_6->th_ack;

 VAR_15 = 0;




 if (FUNC_3(VAR_4->snd_una, VAR_17) && !FUNC_6(&VAR_4->snd_holes)) {
  VAR_11[VAR_15].start = VAR_4->snd_una;
  VAR_11[VAR_15++].end = VAR_17;
 }




 for (VAR_13 = 0; VAR_13 < VAR_5->to_nsacks; VAR_13++) {
  FUNC_11((VAR_5->to_sacks + VAR_13 * VAR_0),
      &VAR_10, sizeof(VAR_10));
  VAR_10.start = FUNC_12(VAR_10.start);
  VAR_10.end = FUNC_12(VAR_10.end);
  if (FUNC_9(VAR_4, &VAR_10, VAR_17))
   VAR_11[VAR_15++] = VAR_10;
 }





 if (VAR_15 == 0)
  return;

 FUNC_10(VAR_15 <= (VAR_1 + 1));





 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
  for (VAR_14 = VAR_13 + 1; VAR_14 < VAR_15; VAR_14++) {
   if (FUNC_1(VAR_11[VAR_13].end, VAR_11[VAR_14].end)) {
    VAR_10 = VAR_11[VAR_13];
    VAR_11[VAR_13] = VAR_11[VAR_14];
    VAR_11[VAR_14] = VAR_10;
   }
  }
 }
 if (FUNC_6(&VAR_4->snd_holes)) {






  VAR_4->snd_fack = FUNC_4(VAR_4->snd_una, VAR_17);
  *VAR_7 += (VAR_4->snd_fack - VAR_4->snd_una);
 }

 VAR_16 = VAR_4->snd_fack;
 VAR_12 = &VAR_11[VAR_15 - 1];
 if (FUNC_3(VAR_4->snd_fack, VAR_12->start)) {







  VAR_9 = FUNC_14(VAR_4, VAR_4->snd_fack,VAR_12->start,((void*)0));
  if (VAR_9 != ((void*)0)) {
   VAR_4->snd_fack = VAR_12->end;
   *VAR_7 += (VAR_12->end - VAR_12->start);


   VAR_12--;
  } else {
   while (VAR_12 >= VAR_11 &&
          FUNC_3(VAR_4->snd_fack, VAR_12->start))
    VAR_12--;
   if (VAR_12 >= VAR_11 &&
       FUNC_3(VAR_4->snd_fack, VAR_12->end)) {
    *VAR_7 += (VAR_12->end - VAR_4->snd_fack);
    VAR_4->snd_fack = VAR_12->end;
   }
  }
 } else if (FUNC_3(VAR_4->snd_fack, VAR_12->end)) {

  *VAR_7 += (VAR_12->end - VAR_4->snd_fack);
  VAR_4->snd_fack = VAR_12->end;
 }

 VAR_8 = FUNC_7(&VAR_4->snd_holes, VAR_2);




 while (VAR_12 >= VAR_11 && VAR_8 != ((void*)0)) {
  if (FUNC_0(VAR_12->start, VAR_8->end)) {




   VAR_12--;
   continue;
  }
  if (FUNC_2(VAR_12->end, VAR_8->start)) {




   VAR_8 = FUNC_8(VAR_8, VAR_2, VAR_3);
   continue;
  }
  VAR_4->sackhint.sack_bytes_rexmit -= (VAR_8->rxmit - VAR_8->start);
  if (FUNC_2(VAR_12->start, VAR_8->start)) {

   if (FUNC_0(VAR_12->end, VAR_8->end)) {

    *VAR_7 += (VAR_8->end - VAR_8->start);

    FUNC_13(VAR_4, VAR_8,
        VAR_8->end, VAR_16);
    VAR_9 = VAR_8;
    VAR_8 = FUNC_8(VAR_8, VAR_2, VAR_3);
    FUNC_15(VAR_4, VAR_9);




    continue;
   } else {

    *VAR_7 += (VAR_12->end - VAR_8->start);
    FUNC_13(VAR_4, VAR_8,
        VAR_12->end, VAR_16);
    VAR_8->start = VAR_12->end;
    VAR_8->rxmit = FUNC_4(VAR_8->rxmit, VAR_8->start);
   }
  } else {

   if (FUNC_0(VAR_12->end, VAR_8->end)) {

    *VAR_7 += (VAR_8->end - VAR_12->start);
    FUNC_13(VAR_4, VAR_8,
        VAR_8->end, VAR_16);
    VAR_8->end = VAR_12->start;
    VAR_8->rxmit = FUNC_5(VAR_8->rxmit, VAR_8->end);
   } else {




    *VAR_7 += (VAR_12->end - VAR_12->start);
    FUNC_13(VAR_4, VAR_8,
        VAR_12->end, VAR_16);
    VAR_9 = FUNC_14(VAR_4, VAR_12->end,
        VAR_8->end, VAR_8);
    if (VAR_9 != ((void*)0)) {
     if (FUNC_1(VAR_8->rxmit, VAR_9->rxmit)) {
      VAR_9->rxmit = VAR_8->rxmit;
      VAR_4->sackhint.sack_bytes_rexmit
       += (VAR_9->rxmit
           - VAR_9->start);
     }
     VAR_8->end = VAR_12->start;
     VAR_8->rxmit = FUNC_5(VAR_8->rxmit,
            VAR_8->end);






     VAR_9->rxmit_start = VAR_8->rxmit_start;
    }
   }
  }
  VAR_4->sackhint.sack_bytes_rexmit += (VAR_8->rxmit - VAR_8->start);





  if (FUNC_2(VAR_12->start, VAR_8->start))
   VAR_8 = FUNC_8(VAR_8, VAR_2, VAR_3);
  else
   VAR_12--;
 }
}
