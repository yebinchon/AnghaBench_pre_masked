
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_fsf_req {struct fsf_status_read_buffer* data; } ;
struct TYPE_4__ {int berr; } ;
struct zfcp_dbf_hba_record {TYPE_2__ u; int tag; } ;
struct zfcp_dbf {int hba_lock; int hba; struct zfcp_dbf_hba_record hba_buf; } ;
struct fsf_bit_error_payload {int dummy; } ;
struct TYPE_3__ {struct fsf_bit_error_payload bit_error; } ;
struct fsf_status_read_buffer {TYPE_1__ payload; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct zfcp_dbf_hba_record*,int) ;
 int FUNC_1 (int *,struct fsf_bit_error_payload*,int) ;
 int FUNC_2 (struct zfcp_dbf_hba_record*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char*,int ) ;

void FUNC_6(struct zfcp_dbf *VAR_1, struct zfcp_fsf_req *VAR_2)
{
 struct zfcp_dbf_hba_record *VAR_3 = &VAR_1->hba_buf;
 struct fsf_status_read_buffer *VAR_4 = VAR_2->data;
 struct fsf_bit_error_payload *VAR_5 = &VAR_4->payload.bit_error;
 unsigned long VAR_6;

 FUNC_3(&VAR_1->hba_lock, VAR_6);
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 FUNC_5(VAR_3->tag, "berr", VAR_0);
 FUNC_1(&VAR_3->u.berr, VAR_5, sizeof(struct fsf_bit_error_payload));
 FUNC_0(VAR_1->hba, 0, VAR_3, sizeof(*VAR_3));
 FUNC_4(&VAR_1->hba_lock, VAR_6);
}
