
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status_type; int payload_size; int payload; int queue_designator; int status_subtype; int failed; } ;
struct TYPE_6__ {TYPE_2__ status; } ;
struct zfcp_dbf_hba_record {TYPE_3__ u; int tag2; int tag; } ;
struct zfcp_dbf {int hba_lock; int hba; TYPE_1__* adapter; struct zfcp_dbf_hba_record hba_buf; } ;
struct fsf_status_read_buffer {int status_type; int payload; int status_subtype; int queue_designator; } ;
struct fsf_queue_designator {int dummy; } ;
struct fsf_link_down_info {int dummy; } ;
struct TYPE_4__ {int stat_miss; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,struct zfcp_dbf_hba_record*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct zfcp_dbf_hba_record*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,char const*,int ) ;

void FUNC_7(const char *VAR_4, int VAR_5, struct zfcp_dbf *VAR_6,
        struct fsf_status_read_buffer *VAR_7)
{
 struct zfcp_dbf_hba_record *VAR_8 = &VAR_6->hba_buf;
 unsigned long VAR_9;

 FUNC_4(&VAR_6->hba_lock, VAR_9);
 FUNC_3(VAR_8, 0, sizeof(*VAR_8));
 FUNC_6(VAR_8->tag, "stat", VAR_0);
 FUNC_6(VAR_8->tag2, VAR_4, VAR_0);

 VAR_8->u.status.failed = FUNC_0(&VAR_6->adapter->stat_miss);
 if (VAR_7 != ((void*)0)) {
  VAR_8->u.status.status_type = VAR_7->status_type;
  VAR_8->u.status.status_subtype = VAR_7->status_subtype;
  FUNC_2(&VAR_8->u.status.queue_designator,
         &VAR_7->queue_designator,
         sizeof(struct fsf_queue_designator));

  switch (VAR_7->status_type) {
  case 130:
   VAR_8->u.status.payload_size =
       VAR_3;
   break;

  case 133:
   VAR_8->u.status.payload_size =
       VAR_1;
   break;

  case 131:
   switch (VAR_7->status_subtype) {
   case 128:
   case 129:
    VAR_8->u.status.payload_size =
     sizeof(struct fsf_link_down_info);
   }
   break;

  case 132:
   VAR_8->u.status.payload_size =
       VAR_2;
   break;
  }
  FUNC_2(&VAR_8->u.status.payload,
         &VAR_7->payload, VAR_8->u.status.payload_size);
 }

 FUNC_1(VAR_6->hba, VAR_5, VAR_8, sizeof(*VAR_8));
 FUNC_5(&VAR_6->hba_lock, VAR_9);
}
