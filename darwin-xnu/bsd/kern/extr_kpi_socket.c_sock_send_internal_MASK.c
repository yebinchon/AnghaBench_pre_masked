
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * uio_t ;
typedef int uio_buf ;
struct sockaddr {int dummy; } ;
struct msghdr {int msg_iovlen; scalar_t__ msg_name; scalar_t__ msg_controllen; scalar_t__ msg_control; struct iovec* msg_iov; } ;
struct TYPE_7__ {int len; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;
struct iovec {int iov_len; int iov_base; } ;
struct cmsghdr {int dummy; } ;
typedef TYPE_4__* socket_t ;
typedef struct mbuf* mbuf_t ;
typedef int errno_t ;
struct TYPE_10__ {TYPE_3__* so_proto; } ;
struct TYPE_9__ {TYPE_2__* pr_usrreqs; } ;
struct TYPE_8__ {int (* pru_sosend ) (TYPE_4__*,struct sockaddr*,int *,struct mbuf*,struct mbuf*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct mbuf*,int ) ;
 int FUNC_6 (TYPE_4__*,struct sockaddr*,int *,struct mbuf*,struct mbuf*,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int * FUNC_8 (int,int ,int ,int ,char*,int) ;
 int FUNC_9 (int *) ;

errno_t
FUNC_10(socket_t VAR_11, const struct msghdr *VAR_12, mbuf_t VAR_13,
    int VAR_14, size_t *VAR_15)
{
 uio_t VAR_16 = ((void*)0);
 struct mbuf *VAR_17 = ((void*)0);
 int VAR_18 = 0;
 int VAR_19 = 0;
 char VAR_20[ FUNC_1((VAR_12 != ((void*)0) ? VAR_12->msg_iovlen : 1)) ];

 if (VAR_11 == ((void*)0)) {
  VAR_18 = VAR_1;
  goto errorout;
 }

 if (VAR_13 == ((void*)0) && VAR_12 != ((void*)0)) {
  struct iovec *VAR_21 = VAR_12->msg_iov;

  VAR_16 = FUNC_8(VAR_12->msg_iovlen, 0,
      VAR_8, VAR_9, &VAR_20[0], sizeof (VAR_20));
  if (VAR_21 != ((void*)0)) {
   int VAR_22;

   for (VAR_22 = 0; VAR_22 < VAR_12->msg_iovlen; VAR_22++) {
    FUNC_7(VAR_16,
        FUNC_0((VAR_21 + VAR_22)->iov_base),
        (VAR_21 + VAR_22)->iov_len);
   }

   if (FUNC_9(VAR_16) < 0) {
    VAR_18 = VAR_1;
    goto errorout;
   }
  }
 }

 if (VAR_15 != ((void*)0))
  *VAR_15 = 0;

 if (VAR_16 != ((void*)0))
  VAR_19 = FUNC_9(VAR_16);
 else
  VAR_19 = VAR_13->m_pkthdr.len;

 if (VAR_12 != ((void*)0) && VAR_12->msg_control) {
  if ((size_t)VAR_12->msg_controllen < sizeof (struct cmsghdr)) {
   VAR_18 = VAR_1;
   goto errorout;
  }

  if ((size_t)VAR_12->msg_controllen > VAR_5) {
   VAR_18 = VAR_1;
   goto errorout;
  }

  VAR_17 = FUNC_3(VAR_7, VAR_6);
  if (VAR_17 == ((void*)0)) {
   VAR_18 = VAR_2;
   goto errorout;
  }
  FUNC_4(FUNC_5(VAR_17, VAR_10), VAR_12->msg_control,
      VAR_12->msg_controllen);
  VAR_17->m_len = VAR_12->msg_controllen;
 }

 VAR_18 = VAR_11->so_proto->pr_usrreqs->pru_sosend(VAR_11, VAR_12 != ((void*)0) ?
     (struct sockaddr *)VAR_12->msg_name : ((void*)0), VAR_16, VAR_13,
     VAR_17, VAR_14);
 if (VAR_16 != ((void*)0) && FUNC_9(VAR_16) != VAR_19 &&
     (VAR_18 == VAR_3 || VAR_18 == VAR_0 || VAR_18 == VAR_4))
  VAR_18 = 0;

 if (VAR_18 == 0 && VAR_15 != ((void*)0)) {
  if (VAR_16 != ((void*)0))
   *VAR_15 = VAR_19 - FUNC_9(VAR_16);
  else
   *VAR_15 = VAR_19;
 }

 return (VAR_18);






errorout:
 if (VAR_17)
  FUNC_2(VAR_17);
 if (VAR_13)
  FUNC_2(VAR_13);
 if (VAR_15)
  *VAR_15 = 0;
 return (VAR_18);
}
