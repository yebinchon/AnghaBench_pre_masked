
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hv_dynmem_device {scalar_t__ next_version; int host_event; int state; TYPE_3__* dev; } ;
struct dm_version_response {scalar_t__ is_accepted; } ;
struct TYPE_5__ {int version; } ;
struct TYPE_4__ {int size; int trans_id; int type; } ;
struct dm_version_request {int is_last_attempt; TYPE_2__ version; TYPE_1__ hdr; } ;
struct TYPE_6__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dm_version_request*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct dm_version_request*,int,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hv_dynmem_device *VAR_5,
   struct dm_version_response *VAR_6)
{
 struct dm_version_request VAR_7;
 int VAR_8;

 if (VAR_6->is_accepted) {





  FUNC_1(&VAR_5->host_event);
  return;
 }







 if (VAR_5->next_version == 0)
  goto version_error;

 VAR_5->next_version = 0;
 FUNC_2(&VAR_7, 0, sizeof(struct dm_version_request));
 VAR_7.hdr.type = VAR_1;
 VAR_7.hdr.size = sizeof(struct dm_version_request);
 VAR_7.hdr.trans_id = FUNC_0(&VAR_4);
 VAR_7.version.version = VAR_2;
 VAR_7.is_last_attempt = 1;

 VAR_8 = FUNC_3(VAR_5->dev->channel, &VAR_7,
    sizeof(struct dm_version_request),
    (unsigned long)((void*)0),
    VAR_3, 0);

 if (VAR_8)
  goto version_error;

 return;

version_error:
 VAR_5->state = VAR_0;
 FUNC_1(&VAR_5->host_event);
}
