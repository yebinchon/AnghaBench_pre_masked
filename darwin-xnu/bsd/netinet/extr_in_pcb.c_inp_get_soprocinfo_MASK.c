
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ last_pid; int so_flags; scalar_t__ e_pid; int e_uuid; int last_uuid; } ;
struct so_procinfo {scalar_t__ spi_pid; int spi_delegated; scalar_t__ spi_epid; int spi_euuid; int spi_uuid; } ;
struct inpcb {struct socket* inp_socket; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(struct inpcb *VAR_1, struct so_procinfo *VAR_2)
{
 struct socket *VAR_3 = VAR_1->inp_socket;

 VAR_2->spi_pid = VAR_3->last_pid;
 if (VAR_3->last_pid != 0)
  FUNC_0(VAR_2->spi_uuid, VAR_3->last_uuid);



 if (VAR_3->so_flags & VAR_0) {
  VAR_2->spi_delegated = 1;
  VAR_2->spi_epid = VAR_3->e_pid;
  FUNC_0(VAR_2->spi_euuid, VAR_3->e_uuid);
 } else {
  VAR_2->spi_delegated = 0;
  VAR_2->spi_epid = VAR_3->last_pid;
 }
}
