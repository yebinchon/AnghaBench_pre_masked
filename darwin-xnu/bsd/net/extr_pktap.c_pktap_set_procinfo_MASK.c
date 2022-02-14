
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct so_procinfo {scalar_t__ spi_pid; scalar_t__ spi_delegated; scalar_t__ spi_epid; int spi_euuid; int spi_uuid; } ;
struct pktap_header {scalar_t__ pth_pid; scalar_t__* pth_comm; scalar_t__ pth_epid; scalar_t__* pth_ecomm; int pth_euuid; int pth_flags; int pth_uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct pktap_header *VAR_2, struct so_procinfo *VAR_3)
{
 VAR_2->pth_pid = VAR_3->spi_pid;
 if (VAR_2->pth_comm[0] == 0)
  FUNC_0(VAR_3->spi_pid, VAR_2->pth_comm, VAR_0);
 if (VAR_3->spi_pid != 0)
  FUNC_1(VAR_2->pth_uuid, VAR_3->spi_uuid);

 if (VAR_3->spi_delegated != 0) {
  VAR_2->pth_flags |= VAR_1;
  VAR_2->pth_epid = VAR_3->spi_epid;
  if (VAR_2->pth_ecomm[0] == 0)
  FUNC_0(VAR_3->spi_epid, VAR_2->pth_ecomm, VAR_0);
  FUNC_1(VAR_2->pth_euuid, VAR_3->spi_euuid);
 }
}
