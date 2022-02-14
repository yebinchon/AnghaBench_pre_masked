
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_fsf_req {scalar_t__ data; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int scsi_host; } ;
struct TYPE_2__ {int * data; } ;
struct fsf_status_read_buffer {TYPE_1__ payload; int d_id; scalar_t__ length; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,struct zfcp_fsf_req*,int ,int ,int ,void*,int) ;

void FUNC_2(struct zfcp_fsf_req *VAR_0)
{
 struct zfcp_adapter *VAR_1 = VAR_0->adapter;
 struct fsf_status_read_buffer *VAR_2 =
   (struct fsf_status_read_buffer *)VAR_0->data;
 int VAR_3 = (int)VAR_2->length -
       (int)((void *)&VAR_2->payload - (void *)VAR_2);

 FUNC_1("iels", 1, VAR_0, VAR_2->d_id,
          FUNC_0(VAR_1->scsi_host),
          VAR_2->payload.data[0], (void *)VAR_2->payload.data,
          VAR_3);
}
