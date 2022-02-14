
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct socket {struct flow_divert_pcb* so_fd_pcb; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct inpcb {int dummy; } ;
struct flow_divert_pcb {int dummy; } ;
typedef scalar_t__ mbuf_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,int,scalar_t__,struct sockaddr*,scalar_t__,struct proc*) ;
 int FUNC_1 (struct socket*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct inpcb*) ;
 struct inpcb* FUNC_5 (struct socket*) ;

errno_t
FUNC_6(struct socket *VAR_2, int VAR_3, mbuf_t VAR_4, struct sockaddr *VAR_5, mbuf_t VAR_6, struct proc *VAR_7)
{
        struct flow_divert_pcb *VAR_8 = VAR_2->so_fd_pcb;
 struct inpcb *VAR_9;
        int VAR_10 = 0;

 VAR_9 = FUNC_5(VAR_2);
 if (VAR_9 == ((void*)0)) {
  return (VAR_0);
 }

        if (VAR_8 == ((void*)0)) {
                uint32_t VAR_11 = FUNC_4(VAR_9);
                if (VAR_11 > 0) {
                        VAR_10 = FUNC_1(VAR_2, VAR_11);
                        VAR_8 = VAR_2->so_fd_pcb;
                        if (VAR_10 != 0 || VAR_8 == ((void*)0)) {
                                goto done;
                        }
                } else {
                        VAR_10 = VAR_1;
                        goto done;
                }
        }
        return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

done:
        if (VAR_4) {
                FUNC_3(VAR_4);
        }
        if (VAR_6) {
                FUNC_2(VAR_6);
        }

        return VAR_10;
}
