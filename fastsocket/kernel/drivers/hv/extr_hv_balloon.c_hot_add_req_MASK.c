
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_10__ {unsigned long start_page; unsigned long page_cnt; } ;
struct TYPE_11__ {TYPE_3__ finfo; } ;
struct TYPE_8__ {unsigned long start_page; unsigned long page_cnt; } ;
struct TYPE_9__ {TYPE_1__ finfo; } ;
struct TYPE_12__ {TYPE_4__ ha_region_range; TYPE_2__ ha_page_range; } ;
struct hv_dynmem_device {TYPE_7__* dev; int state; int host_specified_ha_region; TYPE_5__ ha_wrk; } ;
struct TYPE_13__ {int size; int trans_id; int type; } ;
struct dm_hot_add_response {scalar_t__ page_count; int result; TYPE_6__ hdr; } ;
struct TYPE_14__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct hv_dynmem_device VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct dm_hot_add_response*,int ,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_6 ;
 int FUNC_4 (int ,struct dm_hot_add_response*,int,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_7)
{
 struct dm_hot_add_response VAR_8;




 struct hv_dynmem_device *VAR_9 = &VAR_4;

 FUNC_1(&VAR_8, 0, sizeof(struct dm_hot_add_response));
 VAR_8.hdr.type = VAR_1;
 VAR_8.hdr.size = sizeof(struct dm_hot_add_response);
 if (VAR_8.page_count > 0)
  VAR_8.result = 1;
 else if (!VAR_5)
  VAR_8.result = 1;
 else
  VAR_8.result = 0;

 if (!VAR_5 || (VAR_8.page_count == 0))
  FUNC_2("Memory hot add failed\n");

 VAR_9->state = VAR_0;
 VAR_8.hdr.trans_id = FUNC_0(&VAR_6);
 FUNC_4(VAR_9->dev->channel, &VAR_8,
   sizeof(struct dm_hot_add_response),
   (unsigned long)((void*)0),
   VAR_3, 0);
}
