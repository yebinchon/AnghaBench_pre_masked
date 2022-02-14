
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {size_t board_name_index; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int buffer ;


 char* VAR_0 ;
 char* VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_3(struct Scsi_Host *VAR_3)
{
  static char VAR_4[256];
  char *VAR_5;
  struct aic7xxx_host *VAR_6;

  VAR_5 = &VAR_4[0];
  VAR_6 = (struct aic7xxx_host *)VAR_3->hostdata;
  FUNC_0(VAR_5, 0, sizeof(VAR_4));
  FUNC_2(VAR_5, "Adaptec AHA274x/284x/294x (EISA/VLB/PCI-Fast SCSI) ");
  FUNC_1(VAR_5, VAR_0);
  FUNC_1(VAR_5, "/");
  FUNC_1(VAR_5, VAR_1);
  FUNC_1(VAR_5, "\n");
  FUNC_1(VAR_5, "       <");
  FUNC_1(VAR_5, VAR_2[VAR_6->board_name_index]);
  FUNC_1(VAR_5, ">");

  return(VAR_5);
}
