
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uio_t ;
typedef int uio_buf ;
typedef int u_char ;
struct sockaddr {unsigned int sa_len; } ;
struct msghdr {int msg_iovlen; int msg_flags; int msg_namelen; int msg_controllen; int * msg_control; int * msg_name; struct iovec* msg_iov; } ;
struct mbuf {int m_len; struct mbuf* m_next; } ;
struct iovec {int iov_len; int iov_base; } ;
typedef TYPE_3__* socket_t ;
typedef int mbuf_t ;
typedef int errno_t ;
struct TYPE_8__ {TYPE_2__* so_proto; } ;
struct TYPE_7__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_6__ {int (* pru_soreceive ) (TYPE_3__*,struct sockaddr**,int ,int *,struct mbuf**,int*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (int *,struct sockaddr*,unsigned int) ;
 struct sockaddr* FUNC_6 (struct mbuf*,int ) ;
 int FUNC_7 (TYPE_3__*,struct sockaddr**,int ,int *,struct mbuf**,int*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int,int ,int ,int ,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,size_t) ;

errno_t
FUNC_12(socket_t VAR_6, struct msghdr *VAR_7, mbuf_t *VAR_8,
    int VAR_9, size_t *VAR_10)
{
 uio_t VAR_11;
 struct mbuf *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 int VAR_14 = 0;
 struct sockaddr *VAR_15 = ((void*)0);
 char VAR_16[ FUNC_3((VAR_7 != ((void*)0)) ? VAR_7->msg_iovlen : 0) ];

 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_11 = FUNC_9(((VAR_7 != ((void*)0)) ? VAR_7->msg_iovlen : 0),
     0, VAR_4, VAR_3, &VAR_16[0], sizeof (VAR_16));
 if (VAR_7 != ((void*)0) && VAR_8 == ((void*)0)) {
  int VAR_17;
  struct iovec *VAR_18 = VAR_7->msg_iov;

  for (VAR_17 = 0; VAR_17 < VAR_7->msg_iovlen; VAR_17++) {
   FUNC_8(VAR_11,
       FUNC_0((VAR_18 + VAR_17)->iov_base),
       (VAR_18 + VAR_17)->iov_len);
  }
  if (FUNC_10(VAR_11) < 0)
   return (VAR_0);
 } else if (VAR_10 != ((void*)0)) {
  FUNC_11(VAR_11, (FUNC_10(VAR_11) + *VAR_10));
 }
 VAR_14 = FUNC_10(VAR_11);

 if (VAR_10 != ((void*)0))
  *VAR_10 = 0;


 VAR_13 = VAR_6->so_proto->pr_usrreqs->pru_soreceive(VAR_6, &VAR_15, VAR_11,
     VAR_8, (VAR_7 && VAR_7->msg_control) ? &VAR_12 : ((void*)0), &VAR_9);
 if (VAR_13 != 0)
  goto cleanup;

 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_14 - FUNC_10(VAR_11);
 if (VAR_7 != ((void*)0)) {
  VAR_7->msg_flags = VAR_9;

  if (VAR_7->msg_name != ((void*)0)) {
   int VAR_19;
   VAR_19 = VAR_7->msg_namelen;
   if (VAR_7->msg_namelen > 0 && VAR_15 != ((void*)0)) {
    VAR_19 = FUNC_2(VAR_19, VAR_15->sa_len);
    FUNC_5(VAR_7->msg_name, VAR_15,
        VAR_7->msg_namelen > VAR_15->sa_len ?
        VAR_15->sa_len : VAR_7->msg_namelen);
   }
  }

  if (VAR_7->msg_control != ((void*)0)) {
   struct mbuf *VAR_20 = VAR_12;
   u_char *VAR_21 = VAR_7->msg_control;
   int VAR_22 = VAR_7->msg_controllen;

   VAR_7->msg_controllen = 0;

   while (VAR_20 != ((void*)0) && VAR_22 > 0) {
    unsigned int VAR_23;

    if (VAR_22 >= VAR_20->m_len) {
     VAR_23 = VAR_20->m_len;
    } else {
     VAR_7->msg_flags |= VAR_1;
     VAR_23 = VAR_22;
    }
    FUNC_5(VAR_21, FUNC_6(VAR_20, VAR_5), VAR_23);
    VAR_21 += VAR_23;
    VAR_22 -= VAR_23;
    VAR_20 = VAR_20->m_next;
   }
   VAR_7->msg_controllen =
       (uintptr_t)VAR_21 - (uintptr_t)VAR_7->msg_control;
  }
 }

cleanup:
 if (VAR_12 != ((void*)0))
  FUNC_4(VAR_12);
 if (VAR_15 != ((void*)0))
  FUNC_1(VAR_15, VAR_2);
 return (VAR_13);
}
