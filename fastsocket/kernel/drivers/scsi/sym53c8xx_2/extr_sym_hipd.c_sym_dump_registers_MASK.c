
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct sym_hcb {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sym_hcb* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*,int ,int ) ;

void FUNC_4(struct Scsi_Host *VAR_2)
{
 struct sym_hcb *VAR_3 = FUNC_2(VAR_2);
 u_short VAR_4;
 u_char VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 FUNC_3(VAR_2, VAR_4, VAR_5);
}
