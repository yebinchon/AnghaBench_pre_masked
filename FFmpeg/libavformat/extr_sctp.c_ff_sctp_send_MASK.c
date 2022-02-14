
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_sndrcvinfo {int dummy; } ;
struct msghdr {int msg_iovlen; int msg_controllen; char* msg_control; scalar_t__ msg_flags; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; int member_0; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct cmsghdr {int cmsg_len; int cmsg_type; int cmsg_level; } ;
typedef int outcmsg ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,struct sctp_sndrcvinfo const*,int) ;
 int FUNC_5 (int,struct msghdr*,int) ;

__attribute__((used)) static int FUNC_6(int VAR_3, const void *VAR_4, size_t VAR_5,
                        const struct sctp_sndrcvinfo *VAR_6, int VAR_7)
{
    struct msghdr VAR_8 = { 0 };
    struct iovec VAR_9;

    VAR_8.msg_name = ((void*)0);
    VAR_8.msg_namelen = 0;
    VAR_8.msg_iov = &VAR_9;
    VAR_9.iov_base = (void*)VAR_4;
    VAR_9.iov_len = VAR_5;
    VAR_8.msg_iovlen = 1;
    VAR_8.msg_controllen = 0;

    if (VAR_6) {
        char VAR_10[FUNC_3(sizeof(struct sctp_sndrcvinfo))];
        struct cmsghdr *VAR_11;

        VAR_8.msg_control = VAR_10;
        VAR_8.msg_controllen = sizeof(VAR_10);
        VAR_8.msg_flags = 0;

        VAR_11 = FUNC_1(&VAR_8);
        VAR_11->cmsg_level = VAR_0;
        VAR_11->cmsg_type = VAR_2;
        VAR_11->cmsg_len = FUNC_2(sizeof(struct sctp_sndrcvinfo));

        VAR_8.msg_controllen = VAR_11->cmsg_len;
        FUNC_4(FUNC_0(VAR_11), VAR_6, sizeof(struct sctp_sndrcvinfo));
    }

    return FUNC_5(VAR_3, &VAR_8, VAR_7 | VAR_1);
}
