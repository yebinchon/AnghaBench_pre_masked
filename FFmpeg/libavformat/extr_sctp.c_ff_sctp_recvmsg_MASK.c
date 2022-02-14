
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct sctp_sndrcvinfo {int dummy; } ;
struct msghdr {int msg_iovlen; char* msg_control; int msg_controllen; int msg_flags; int msg_namelen; struct iovec* msg_iov; struct sockaddr* msg_name; int member_0; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int socklen_t ;
typedef int incmsg ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct sctp_sndrcvinfo*,int ,int) ;
 int FUNC_5 (int,struct msghdr*,int) ;

__attribute__((used)) static int FUNC_6(int VAR_2, void *VAR_3, size_t VAR_4, struct sockaddr *VAR_5,
                           socklen_t *VAR_6, struct sctp_sndrcvinfo *VAR_7,
                           int *VAR_8)
{
    int VAR_9;
    struct iovec VAR_10;
    char VAR_11[FUNC_3(sizeof(struct sctp_sndrcvinfo))];
    struct msghdr VAR_12 = { 0 };
    struct cmsghdr *VAR_13 = ((void*)0);

    VAR_10.iov_base = VAR_3;
    VAR_10.iov_len = VAR_4;

    VAR_12.msg_name = VAR_5;
    VAR_12.msg_namelen = VAR_6 ? *VAR_6 : 0;
    VAR_12.msg_iov = &VAR_10;
    VAR_12.msg_iovlen = 1;
    VAR_12.msg_control = VAR_11;
    VAR_12.msg_controllen = sizeof(VAR_11);

    if ((VAR_9 = FUNC_5(VAR_2, &VAR_12, VAR_8 ? *VAR_8 : 0)) < 0)
        return VAR_9;

    if (VAR_6)
        *VAR_6 = VAR_12.msg_namelen;
    if (VAR_8)
        *VAR_8 = VAR_12.msg_flags;

    for (VAR_13 = FUNC_1(&VAR_12); VAR_13;
         VAR_13 = FUNC_2(&VAR_12, VAR_13)) {
        if ((VAR_0 == VAR_13->cmsg_level) &&
            (VAR_1 == VAR_13->cmsg_type))
            break;
    }


    if (VAR_13)
        FUNC_4(VAR_7, FUNC_0(VAR_13), sizeof(struct sctp_sndrcvinfo));

    return VAR_9;
}
