
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct TYPE_3__ {unsigned long ref; void* erp_count; void* fcp_lun; int d_id; void* wwpn; void* status; } ;
struct TYPE_4__ {TYPE_1__ target; } ;
struct zfcp_dbf_rec_record {TYPE_2__ u; int id2; int id; } ;
struct zfcp_dbf {int rec_lock; int rec; struct zfcp_dbf_rec_record rec_buf; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,struct zfcp_dbf_rec_record*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct zfcp_dbf_rec_record*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(char *VAR_2, void *VAR_3, struct zfcp_dbf *VAR_4,
    atomic_t *VAR_5, atomic_t *VAR_6, u64 VAR_7,
    u32 VAR_8, u64 VAR_9)
{
 struct zfcp_dbf_rec_record *VAR_10 = &VAR_4->rec_buf;
 unsigned long VAR_11;

 FUNC_4(&VAR_4->rec_lock, VAR_11);
 FUNC_3(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->id = VAR_1;
 FUNC_2(VAR_10->id2, VAR_2, VAR_0);
 VAR_10->u.target.ref = (unsigned long)VAR_3;
 VAR_10->u.target.status = FUNC_0(VAR_5);
 VAR_10->u.target.wwpn = VAR_7;
 VAR_10->u.target.d_id = VAR_8;
 VAR_10->u.target.fcp_lun = VAR_9;
 VAR_10->u.target.erp_count = FUNC_0(VAR_6);
 FUNC_1(VAR_4->rec, 3, VAR_10, sizeof(*VAR_10));
 FUNC_5(&VAR_4->rec_lock, VAR_11);
}
