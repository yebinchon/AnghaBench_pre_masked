
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct zfcp_unit {int fcp_lun; int status; } ;
struct zfcp_port {int wwpn; int status; } ;
struct TYPE_3__ {unsigned long ref; unsigned long action; int fcp_lun; void* us; int wwpn; void* ps; void* as; void* need; void* want; } ;
struct TYPE_4__ {TYPE_1__ trigger; } ;
struct zfcp_dbf_rec_record {TYPE_2__ u; int id2; int id; } ;
struct zfcp_dbf {int rec_lock; int rec; struct zfcp_dbf_rec_record rec_buf; } ;
struct zfcp_adapter {int status; struct zfcp_dbf* dbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,struct zfcp_dbf_rec_record*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct zfcp_dbf_rec_record*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(char *VAR_2, void *VAR_3, u8 VAR_4, u8 VAR_5, void *VAR_6,
     struct zfcp_adapter *VAR_7, struct zfcp_port *VAR_8,
     struct zfcp_unit *VAR_9)
{
 struct zfcp_dbf *VAR_10 = VAR_7->dbf;
 struct zfcp_dbf_rec_record *VAR_11 = &VAR_10->rec_buf;
 unsigned long VAR_12;

 FUNC_4(&VAR_10->rec_lock, VAR_12);
 FUNC_3(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->id = VAR_1;
 FUNC_2(VAR_11->id2, VAR_2, VAR_0);
 VAR_11->u.trigger.ref = (unsigned long)VAR_3;
 VAR_11->u.trigger.want = VAR_4;
 VAR_11->u.trigger.need = VAR_5;
 VAR_11->u.trigger.action = (unsigned long)VAR_6;
 VAR_11->u.trigger.as = FUNC_0(&VAR_7->status);
 if (VAR_8) {
  VAR_11->u.trigger.ps = FUNC_0(&VAR_8->status);
  VAR_11->u.trigger.wwpn = VAR_8->wwpn;
 }
 if (VAR_9) {
  VAR_11->u.trigger.us = FUNC_0(&VAR_9->status);
  VAR_11->u.trigger.fcp_lun = VAR_9->fcp_lun;
 }
 FUNC_1(VAR_10->rec, VAR_6 ? 1 : 4, VAR_11, sizeof(*VAR_11));
 FUNC_5(&VAR_10->rec_lock, VAR_12);
}
