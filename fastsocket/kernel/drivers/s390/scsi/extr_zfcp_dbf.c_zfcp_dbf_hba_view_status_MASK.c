
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_dbf_hba_record_status {int payload_size; int payload; int queue_designator; int status_subtype; int status_type; int failed; } ;
struct fsf_queue_designator {int dummy; } ;


 int FUNC_0 (char**,char*,char*,int ) ;
 int FUNC_1 (char**,char*,char*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(char **VAR_0,
         struct zfcp_dbf_hba_record_status *VAR_1)
{
 FUNC_0(VAR_0, "failed", "0x%02x", VAR_1->failed);
 FUNC_0(VAR_0, "status_type", "0x%08x", VAR_1->status_type);
 FUNC_0(VAR_0, "status_subtype", "0x%08x", VAR_1->status_subtype);
 FUNC_1(VAR_0, "queue_designator", (char *)&VAR_1->queue_designator,
        sizeof(struct fsf_queue_designator), 0,
        sizeof(struct fsf_queue_designator));
 FUNC_1(VAR_0, "payload", (char *)&VAR_1->payload, VAR_1->payload_size, 0,
        VAR_1->payload_size);
}
