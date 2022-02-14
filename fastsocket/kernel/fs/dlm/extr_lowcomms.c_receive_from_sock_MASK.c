
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sctp_sndrcvinfo {int dummy; } ;
struct msghdr {char* msg_control; int msg_controllen; int msg_flags; } ;
struct kvec {unsigned int iov_len; scalar_t__ iov_base; } ;
struct TYPE_6__ {scalar_t__ base; int len; } ;
struct connection {scalar_t__ nodeid; int sock_mutex; int rwork; int flags; int * rx_page; TYPE_1__ cb; int * sock; } ;
typedef int incmsg ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (struct connection*,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_11 (int *,struct msghdr*,struct kvec*,int,unsigned int,int) ;
 int FUNC_12 (char*,scalar_t__,scalar_t__,int ,unsigned int,scalar_t__,int) ;
 int FUNC_13 (char**,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (struct connection*,struct msghdr*,scalar_t__) ;
 int FUNC_18 (int ,int *) ;
 int VAR_8 ;
 int FUNC_19 (int ,int *) ;

__attribute__((used)) static int FUNC_20(struct connection *VAR_9)
{
 int VAR_10 = 0;
 struct msghdr VAR_11 = {};
 struct kvec VAR_12[2];
 unsigned VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 char VAR_17[FUNC_1(sizeof(struct sctp_sndrcvinfo))];

 FUNC_14(&VAR_9->sock_mutex);

 if (VAR_9->sock == ((void*)0)) {
  VAR_10 = -VAR_1;
  goto out_close;
 }

 if (VAR_9->rx_page == ((void*)0)) {




  VAR_9->rx_page = FUNC_3(VAR_3);
  if (VAR_9->rx_page == ((void*)0))
   goto out_resched;
  FUNC_8(&VAR_9->cb, VAR_7);
 }


 FUNC_13(&VAR_17, 0, sizeof(VAR_17));
 VAR_11.msg_control = VAR_17;
 VAR_11.msg_controllen = sizeof(VAR_17);





 VAR_12[0].iov_len = VAR_9->cb.base - FUNC_5(&VAR_9->cb);
 VAR_12[0].iov_base = FUNC_16(VAR_9->rx_page) + FUNC_5(&VAR_9->cb);
 VAR_12[1].iov_len = 0;
 VAR_16 = 1;





 if (FUNC_5(&VAR_9->cb) >= VAR_9->cb.base) {
  VAR_12[0].iov_len = VAR_7 - FUNC_5(&VAR_9->cb);
  VAR_12[1].iov_len = VAR_9->cb.base;
  VAR_12[1].iov_base = FUNC_16(VAR_9->rx_page);
  VAR_16 = 2;
 }
 VAR_13 = VAR_12[0].iov_len + VAR_12[1].iov_len;

 VAR_14 = VAR_10 = FUNC_11(VAR_9->sock, &VAR_11, VAR_12, VAR_16, VAR_13,
          VAR_4 | VAR_5);
 if (VAR_10 <= 0)
  goto out_close;


 if (VAR_11.msg_flags & VAR_6) {
  VAR_11.msg_control = VAR_17;
  VAR_11.msg_controllen = sizeof(VAR_17);

  FUNC_17(VAR_9, &VAR_11,
    FUNC_16(VAR_9->rx_page) + VAR_9->cb.base);
  FUNC_15(&VAR_9->sock_mutex);
  return 0;
 }
 FUNC_0(VAR_9->nodeid == 0);

 if (VAR_10 == VAR_13)
  VAR_15 = 1;
 FUNC_4(&VAR_9->cb, VAR_10);
 VAR_10 = FUNC_10(VAR_9->nodeid,
       FUNC_16(VAR_9->rx_page),
       VAR_9->cb.base, VAR_9->cb.len,
       VAR_7);
 if (VAR_10 == -VAR_2) {
  FUNC_12("lowcomms: addr=%p, base=%u, len=%u, "
     "iov_len=%u, iov_base[0]=%p, read=%d",
     FUNC_16(VAR_9->rx_page), VAR_9->cb.base, VAR_9->cb.len,
     VAR_13, VAR_12[0].iov_base, VAR_14);
 }
 if (VAR_10 < 0)
  goto out_close;
 FUNC_6(&VAR_9->cb, VAR_10);

 if (FUNC_7(&VAR_9->cb) && !VAR_15) {
  FUNC_2(VAR_9->rx_page);
  VAR_9->rx_page = ((void*)0);
 }

 if (VAR_15)
  goto out_resched;
 FUNC_15(&VAR_9->sock_mutex);
 return 0;

out_resched:
 if (!FUNC_19(VAR_0, &VAR_9->flags))
  FUNC_18(VAR_8, &VAR_9->rwork);
 FUNC_15(&VAR_9->sock_mutex);
 return -VAR_1;

out_close:
 FUNC_15(&VAR_9->sock_mutex);
 if (VAR_10 != -VAR_1) {
  FUNC_9(VAR_9, 0);

 }

 if (VAR_10 == 0)
  VAR_10 = -VAR_1;

 return VAR_10;
}
