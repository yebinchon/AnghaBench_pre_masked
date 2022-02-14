
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union dm_mem_page_range {int dummy; } dm_mem_page_range ;
struct hv_dynmem_device {int state; } ;
struct TYPE_4__ {int size; int trans_id; int type; } ;
struct dm_unballoon_response {TYPE_1__ hdr; } ;
struct dm_unballoon_request {int range_count; int more_pages; union dm_mem_page_range* range_array; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct TYPE_5__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (struct hv_dynmem_device*,union dm_mem_page_range*) ;
 int FUNC_2 (struct dm_unballoon_response*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct dm_unballoon_response*,int,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hv_dynmem_device *VAR_5,
   struct dm_unballoon_request *VAR_6)
{
 union dm_mem_page_range *VAR_7 = VAR_6->range_array;
 int VAR_8 = VAR_6->range_count;
 struct dm_unballoon_response VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
  FUNC_1(VAR_5, &VAR_7[VAR_10]);

 if (VAR_6->more_pages == 1)
  return;

 FUNC_2(&VAR_9, 0, sizeof(struct dm_unballoon_response));
 VAR_9.hdr.type = VAR_1;
 VAR_9.hdr.trans_id = FUNC_0(&VAR_4);
 VAR_9.hdr.size = sizeof(struct dm_unballoon_response);

 FUNC_3(VAR_3.dev->channel, &VAR_9,
    sizeof(struct dm_unballoon_response),
    (unsigned long)((void*)0),
    VAR_2, 0);

 VAR_5->state = VAR_0;
}
