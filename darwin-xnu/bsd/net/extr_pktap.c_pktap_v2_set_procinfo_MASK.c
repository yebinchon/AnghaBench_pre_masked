
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct so_procinfo {int spi_pid; scalar_t__ spi_delegated; int spi_epid; int spi_euuid; int spi_uuid; } ;
struct pktap_v2_hdr {int pth_pid; scalar_t__ pth_comm_offset; scalar_t__ pth_uuid_offset; int pth_flags; int pth_e_pid; scalar_t__ pth_e_comm_offset; scalar_t__ pth_e_uuid_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct pktap_v2_hdr *VAR_2,
    struct so_procinfo *VAR_3)
{
 VAR_2->pth_pid = VAR_3->spi_pid;

 if (VAR_3->spi_pid != 0 && VAR_3->spi_pid != -1) {
  if (VAR_2->pth_comm_offset != 0) {
   char *VAR_4 = ((char *)VAR_2) +
       VAR_2->pth_comm_offset;

   FUNC_0(VAR_3->spi_pid,
       VAR_4, VAR_0);
  }
  if (VAR_2->pth_uuid_offset != 0) {
   uuid_t *VAR_5 = (uuid_t *) (((char *)VAR_2) +
       VAR_2->pth_uuid_offset);

   FUNC_1(*VAR_5, VAR_3->spi_uuid);
  }
 }

 if (!(VAR_2->pth_flags & VAR_1))
  return;




 if (VAR_3->spi_delegated != 0) {
  VAR_2->pth_flags |= VAR_1;
  VAR_2->pth_e_pid = VAR_3->spi_epid;

  if (VAR_3->spi_pid != 0 && VAR_3->spi_pid != -1 &&
      VAR_2->pth_e_comm_offset != 0) {
   char *VAR_6 = ((char *)VAR_2) +
       VAR_2->pth_e_comm_offset;

   FUNC_0(VAR_3->spi_epid,
       VAR_6, VAR_0);
  }
  if (VAR_2->pth_e_uuid_offset != 0) {
   uuid_t *VAR_7 = (uuid_t *) (((char *)VAR_2) +
       VAR_2->pth_e_uuid_offset);

   FUNC_1(*VAR_7, VAR_3->spi_euuid);
  }
 }
}
