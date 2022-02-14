
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct tcpopt {scalar_t__ to_tsecr; } ;
struct tcpcb {int t_flagsext; scalar_t__ rfbuf_ts; int rfbuf_cnt; int t_maxseg; TYPE_1__* t_bwmeas; int t_segq; } ;
struct socket {int so_flags1; } ;
struct sockbuf {int sb_flags; int sb_hiwat; struct socket* sb_so; } ;
typedef int int32_t ;
struct TYPE_2__ {int bw_rcvbw_max; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct tcpcb*) ;
 int FUNC_4 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct sockbuf*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct tcpcb*,struct sockbuf*,int,int,int) ;

__attribute__((used)) static void
FUNC_7(struct tcpcb *VAR_10, struct sockbuf *VAR_11,
 struct tcpopt *VAR_12, u_int32_t VAR_13, u_int32_t VAR_14)
{
 struct socket *VAR_15 = VAR_11->sb_so;
 if (VAR_8 == 0 ||
  (VAR_11->sb_flags & VAR_0) == 0 ||
  FUNC_5(VAR_11) == 0 ||
  VAR_11->sb_hiwat >= VAR_14 ||
  (VAR_10->t_flagsext & VAR_5) ||
  (VAR_15->so_flags1 & VAR_1) ||
  !FUNC_0(&VAR_10->t_segq)) {

  goto out;
 }

 if (FUNC_2(VAR_9,
  VAR_10->rfbuf_ts + VAR_2)) {



  goto out;
 }

 if (!FUNC_3(VAR_10)) {






  if (FUNC_1(VAR_9,
   VAR_10->rfbuf_ts + VAR_3)) {
   if (VAR_10->rfbuf_cnt >= VAR_4) {
    FUNC_6(VAR_10, VAR_11,
        VAR_7, 0,
        VAR_7);
   }
   goto out;
  } else {
   VAR_10->rfbuf_cnt += VAR_13;
   return;
  }
 } else if (VAR_12->to_tsecr != 0) {
  if (FUNC_1(VAR_12->to_tsecr, VAR_10->rfbuf_ts)) {
   if (VAR_10->rfbuf_cnt > (VAR_11->sb_hiwat -
    (VAR_11->sb_hiwat >> 1))) {
    int32_t VAR_16, VAR_17;
    VAR_16 = (VAR_10->rfbuf_cnt << 1)
        - VAR_11->sb_hiwat;





    VAR_17 = VAR_10->t_maxseg << VAR_6;
    if (VAR_16 < VAR_17)
     VAR_16 = VAR_17;

    VAR_16 =
        (VAR_16 / VAR_10->t_maxseg) * VAR_10->t_maxseg;
    FUNC_6(VAR_10, VAR_11,
        VAR_11->sb_hiwat + VAR_16,
        (VAR_10->rfbuf_cnt * 2), VAR_14);
   }

   if (VAR_10->t_bwmeas != ((void*)0) && VAR_10->rfbuf_cnt > 0 &&
       FUNC_2(VAR_9, VAR_10->rfbuf_ts)) {
    u_int32_t VAR_18;
    VAR_18 = VAR_10->rfbuf_cnt /
        (int)(VAR_9 - VAR_10->rfbuf_ts);
    if (VAR_10->t_bwmeas->bw_rcvbw_max == 0) {
     VAR_10->t_bwmeas->bw_rcvbw_max = VAR_18;
    } else {
     VAR_10->t_bwmeas->bw_rcvbw_max = FUNC_4(
         VAR_10->t_bwmeas->bw_rcvbw_max, VAR_18);
    }
   }
   goto out;
  } else {
   VAR_10->rfbuf_cnt += VAR_13;
   return;
  }
 }
out:

 VAR_10->rfbuf_ts = 0;
 VAR_10->rfbuf_cnt = 0;
 return;
}
