
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
struct socket {TYPE_3__* sk; TYPE_2__* ops; } ;
struct sockaddr_in6 {unsigned short sin6_port; } ;
struct sockaddr_in {unsigned short sin_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int ss_family; } ;
struct TCP_Server_Info {scalar_t__ tcp_nodelay; scalar_t__ noautotune; struct socket* ssocket; TYPE_1__ dstaddr; } ;
struct TYPE_6__ {int sk_rcvtimeo; int sk_sndtimeo; int sk_sndbuf; int sk_rcvbuf; int sk_allocation; } ;
struct TYPE_5__ {int (* connect ) (struct socket*,struct sockaddr*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct TCP_Server_Info*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;
 unsigned short FUNC_5 (int ) ;
 int FUNC_6 (struct TCP_Server_Info*) ;
 int FUNC_7 (struct socket*,int ,int ,char*,int) ;
 int FUNC_8 (int,int ,int ,struct socket**) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*,struct sockaddr*,int,int ) ;

__attribute__((used)) static int
FUNC_11(struct TCP_Server_Info *VAR_9)
{
 int VAR_10 = 0;
 unsigned short int VAR_11;
 int VAR_12, VAR_13;
 struct socket *VAR_14 = VAR_9->ssocket;
 struct sockaddr *VAR_15;

 VAR_15 = (struct sockaddr *) &VAR_9->dstaddr;

 if (VAR_9->dstaddr.ss_family == VAR_1) {
  VAR_11 = ((struct sockaddr_in6 *) VAR_15)->sin6_port;
  VAR_12 = sizeof(struct sockaddr_in6);
  VAR_13 = VAR_1;
 } else {
  VAR_11 = ((struct sockaddr_in *) VAR_15)->sin_port;
  VAR_12 = sizeof(struct sockaddr_in);
  VAR_13 = VAR_0;
 }

 if (VAR_14 == ((void*)0)) {
  VAR_10 = FUNC_8(VAR_13, VAR_6,
          VAR_4, &VAR_14);
  if (VAR_10 < 0) {
   FUNC_1(1, "Error %d creating socket", VAR_10);
   VAR_9->ssocket = ((void*)0);
   return VAR_10;
  }


  FUNC_2(1, "Socket created");
  VAR_9->ssocket = VAR_14;
  VAR_14->sk->sk_allocation = VAR_2;
  if (VAR_13 == VAR_1)
   FUNC_4(VAR_14);
  else
   FUNC_3(VAR_14);
 }

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = VAR_14->ops->connect(VAR_14, VAR_15, VAR_12, 0);
 if (VAR_10 < 0) {
  FUNC_2(1, "Error %d connecting to server", VAR_10);
  FUNC_9(VAR_14);
  VAR_9->ssocket = ((void*)0);
  return VAR_10;
 }






 VAR_14->sk->sk_rcvtimeo = 7 * VAR_3;
 VAR_14->sk->sk_sndtimeo = 5 * VAR_3;


 if (VAR_9->noautotune) {
  if (VAR_14->sk->sk_sndbuf < (200 * 1024))
   VAR_14->sk->sk_sndbuf = 200 * 1024;
  if (VAR_14->sk->sk_rcvbuf < (140 * 1024))
   VAR_14->sk->sk_rcvbuf = 140 * 1024;
 }

 if (VAR_9->tcp_nodelay) {
  int VAR_16 = 1;
  VAR_10 = FUNC_7(VAR_14, VAR_7, VAR_8,
    (char *)&VAR_16, sizeof(VAR_16));
  if (VAR_10)
   FUNC_2(1, "set TCP_NODELAY socket option error %d", VAR_10);
 }

  FUNC_2(1, "sndbuf %d rcvbuf %d rcvtimeo 0x%lx",
   VAR_14->sk->sk_sndbuf,
   VAR_14->sk->sk_rcvbuf, VAR_14->sk->sk_rcvtimeo);

 if (VAR_11 == FUNC_5(VAR_5))
  VAR_10 = FUNC_6(VAR_9);

 return VAR_10;
}
