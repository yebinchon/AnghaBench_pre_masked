
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {char* pci_name; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef int bfa_buf ;


 char* VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;

__attribute__((used)) static const char *
FUNC_2(struct Scsi_Host *VAR_1)
{
 static char VAR_2[256];
 struct bfad_im_port_s *VAR_3 =
   (struct bfad_im_port_s *) VAR_1->hostdata[0];
 struct bfad_s *VAR_4 = VAR_3->bfad;

 FUNC_0(VAR_2, 0, sizeof(VAR_2));
 FUNC_1(VAR_2, sizeof(VAR_2),
  "Brocade FC/FCOE Adapter, " "hwpath: %s driver: %s",
  VAR_4->pci_name, VAR_0);
 return VAR_2;
}
