
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct zfcp_fsf_req {int seq_no; int req_id; struct zfcp_adapter* adapter; } ;
struct TYPE_3__ {int ls_code; } ;
struct TYPE_4__ {TYPE_1__ els; } ;
struct zfcp_dbf_san_record {TYPE_2__ u; void* d_id; void* s_id; int fsf_seqno; int fsf_reqid; int tag; } ;
struct zfcp_dbf {int san_lock; int san; struct zfcp_dbf_san_record san_buf; } ;
struct zfcp_adapter {struct zfcp_dbf* dbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct zfcp_dbf_san_record*,int) ;
 int FUNC_1 (struct zfcp_dbf_san_record*,int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (int ,struct zfcp_dbf_san_record*,int,int,void*,int ) ;

__attribute__((used)) static void FUNC_7(const char *VAR_2, int VAR_3,
        struct zfcp_fsf_req *VAR_4, u32 VAR_5, u32 VAR_6,
        u8 VAR_7, void *VAR_8, int VAR_9)
{
 struct zfcp_adapter *VAR_10 = VAR_4->adapter;
 struct zfcp_dbf *VAR_11 = VAR_10->dbf;
 struct zfcp_dbf_san_record *VAR_12 = &VAR_11->san_buf;
 unsigned long VAR_13;

 FUNC_3(&VAR_11->san_lock, VAR_13);
 FUNC_1(VAR_12, 0, sizeof(*VAR_12));
 FUNC_5(VAR_12->tag, VAR_2, VAR_1);
 VAR_12->fsf_reqid = VAR_4->req_id;
 VAR_12->fsf_seqno = VAR_4->seq_no;
 VAR_12->s_id = VAR_5;
 VAR_12->d_id = VAR_6;
 VAR_12->u.els.ls_code = VAR_7;
 FUNC_0(VAR_11->san, VAR_3, VAR_12, sizeof(*VAR_12));
 FUNC_6(VAR_11->san, VAR_12, sizeof(*VAR_12), VAR_3,
    VAR_8, FUNC_2(VAR_9, VAR_0));
 FUNC_4(&VAR_11->san_lock, VAR_13);
}
