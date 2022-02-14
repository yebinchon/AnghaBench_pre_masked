
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct socket {TYPE_5__* so_cfil; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_8__ {int s6_addr32; } ;
struct TYPE_7__ {int s6_addr32; } ;
struct inpcb {int inp_vflag; int inp_fport; int inp_lport; TYPE_6__* inp_socket; int inp_flags; TYPE_4__ inp_faddr; TYPE_3__ inp_laddr; TYPE_2__ in6p_faddr; TYPE_1__ in6p_laddr; } ;
typedef int local ;
struct TYPE_12__ {int so_flags; } ;
struct TYPE_11__ {int cfi_sock_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char const*,char*,int ,int ,int ,int ,int ,char*,char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int FUNC_3 (int ,void const*,char*,int) ;
 int FUNC_4 (int ) ;
 struct inpcb* FUNC_5 (struct socket*) ;

__attribute__((used)) static void
FUNC_6(int VAR_4, struct socket *VAR_5, const char* VAR_6)
{
    struct inpcb *VAR_7 = ((void*)0);
    char VAR_8[VAR_3+6];
    char VAR_9[VAR_3+6];
    const void *VAR_10;

    if (VAR_5 == ((void*)0)) {
        return;
    }

    VAR_7 = FUNC_5(VAR_5);
    if (VAR_7 == ((void*)0)) {
        return;
    }

    VAR_8[0] = VAR_9[0] = 0x0;
    {
        VAR_10 = &VAR_7->inp_laddr.s_addr;
        FUNC_3(VAR_0, VAR_10, VAR_8, sizeof(VAR_8));
        VAR_10 = &VAR_7->inp_faddr.s_addr;
        FUNC_3(VAR_0, VAR_10, VAR_9, sizeof(VAR_8));
    }

 if (VAR_5->so_cfil != ((void*)0))
  FUNC_0(VAR_4, "<%s>: <%s so %llx - flags 0x%x 0x%x, sockID %llu> lport %d fport %d laddr %s faddr %s",
     VAR_6, FUNC_1(VAR_5) ? "UDP" : "TCP",
     (uint64_t)FUNC_2(VAR_5), VAR_7->inp_flags, VAR_7->inp_socket->so_flags, VAR_5->so_cfil->cfi_sock_id,
     FUNC_4(VAR_7->inp_lport), FUNC_4(VAR_7->inp_fport), VAR_8, VAR_9);
 else
  FUNC_0(VAR_4, "<%s>: <%s so %llx - flags 0x%x 0x%x> lport %d fport %d laddr %s faddr %s",
     VAR_6, FUNC_1(VAR_5) ? "UDP" : "TCP",
     (uint64_t)FUNC_2(VAR_5), VAR_7->inp_flags, VAR_7->inp_socket->so_flags,
     FUNC_4(VAR_7->inp_lport), FUNC_4(VAR_7->inp_fport), VAR_8, VAR_9);
}
