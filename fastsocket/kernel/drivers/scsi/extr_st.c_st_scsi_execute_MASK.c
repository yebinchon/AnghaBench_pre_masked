
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_request {int sense; int bio; TYPE_3__* stp; } ;
struct rq_map_data {int null_mapped; } ;
struct request {int timeout; int retries; int q; struct st_request* end_io_data; scalar_t__ sense_len; int sense; int cmd_len; int cmd; int bio; int cmd_flags; int cmd_type; } ;
struct TYPE_6__ {TYPE_2__* device; TYPE_1__* buffer; } ;
struct TYPE_5__ {int request_queue; } ;
struct TYPE_4__ {struct rq_map_data map_data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,struct request*,int,int ) ;
 struct request* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (int ,struct request*,struct rq_map_data*,int *,unsigned int,int ) ;
 int FUNC_5 (int ,unsigned char const*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct st_request *VAR_7, const unsigned char *VAR_8,
      int VAR_9, void *VAR_10, unsigned VAR_11,
      int VAR_12, int VAR_13)
{
 struct request *VAR_14;
 struct rq_map_data *VAR_15 = &VAR_7->stp->buffer->map_data;
 int VAR_16 = 0;
 int VAR_17 = (VAR_9 == VAR_1);

 VAR_14 = FUNC_2(VAR_7->stp->device->request_queue, VAR_17,
         VAR_3);
 if (!VAR_14)
  return VAR_2 << 24;

 VAR_14->cmd_type = VAR_5;
 VAR_14->cmd_flags |= VAR_4;

 VAR_15->null_mapped = 1;

 if (VAR_11) {
  VAR_16 = FUNC_4(VAR_14->q, VAR_14, VAR_15, ((void*)0), VAR_11,
          VAR_3);
  if (VAR_16) {
   FUNC_3(VAR_14);
   return VAR_2 << 24;
  }
 }

 VAR_7->bio = VAR_14->bio;
 VAR_14->cmd_len = FUNC_0(VAR_8[0]);
 FUNC_6(VAR_14->cmd, 0, VAR_0);
 FUNC_5(VAR_14->cmd, VAR_8, VAR_14->cmd_len);
 VAR_14->sense = VAR_7->sense;
 VAR_14->sense_len = 0;
 VAR_14->timeout = VAR_12;
 VAR_14->retries = VAR_13;
 VAR_14->end_io_data = VAR_7;

 FUNC_1(VAR_14->q, ((void*)0), VAR_14, 1, VAR_6);
 return 0;
}
