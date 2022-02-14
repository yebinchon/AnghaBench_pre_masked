
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_hcb {int scsi_mode; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct sym_hcb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char*,char*) ;
 struct sym_hcb* FUNC_2 (struct Scsi_Host*) ;
 char* FUNC_3 (struct sym_hcb*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (struct Scsi_Host*,int) ;

__attribute__((used)) static void FUNC_6(struct Scsi_Host *VAR_2)
{
 struct sym_hcb *VAR_3 = FUNC_2(VAR_2);
 u_char VAR_4 = FUNC_0(VAR_3, VAR_1) & VAR_0;




 FUNC_1("%s: SCSI BUS mode change from %s to %s.\n", FUNC_3(VAR_3),
  FUNC_4(VAR_3->scsi_mode), FUNC_4(VAR_4));





 FUNC_5(VAR_2, 2);
}
