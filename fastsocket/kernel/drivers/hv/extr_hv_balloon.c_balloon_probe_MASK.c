
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct hv_vmbus_device_id {int dummy; } ;
struct hv_device {int channel; } ;
struct TYPE_14__ {int balloon; int hot_add; int hot_add_alignment; } ;
struct TYPE_15__ {TYPE_5__ cap_bits; } ;
struct TYPE_13__ {int size; void* trans_id; int type; } ;
struct TYPE_12__ {int version; } ;
struct dm_version_request {int max_page_number; scalar_t__ min_page_cnt; TYPE_6__ caps; TYPE_4__ hdr; scalar_t__ is_last_attempt; TYPE_3__ version; } ;
struct dm_capabilities {int max_page_number; scalar_t__ min_page_cnt; TYPE_6__ caps; TYPE_4__ hdr; scalar_t__ is_last_attempt; TYPE_3__ version; } ;
struct TYPE_11__ {int wrk; } ;
struct TYPE_10__ {int wrk; } ;
struct TYPE_16__ {scalar_t__ state; int host_specified_ha_region; int thread; int host_event; TYPE_2__ ha_wrk; TYPE_1__ balloon_wrk; int ha_region_list; int config_event; int next_version; struct hv_device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 void* FUNC_4 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_7__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (struct hv_device*,TYPE_7__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,TYPE_7__*,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct dm_version_request*,int ,int) ;
 int FUNC_12 (int *) ;
 int VAR_22 ;
 int FUNC_13 (int *) ;
 int VAR_23 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int ,int *,int ,int ,struct hv_device*) ;
 int FUNC_16 (int ,struct dm_version_request*,int,unsigned long,int ,int ) ;
 int FUNC_17 (int *,int) ;

__attribute__((used)) static int FUNC_18(struct hv_device *VAR_24,
   const struct hv_vmbus_device_id *VAR_25)
{
 int VAR_26, VAR_27;
 struct dm_version_request VAR_28;
 struct dm_capabilities VAR_29;

 VAR_18 = VAR_19;





 VAR_22 = FUNC_8(VAR_11, VAR_9);
 if (!VAR_22)
  return -VAR_7;

 VAR_26 = FUNC_15(VAR_24->channel, VAR_16, VAR_16, ((void*)0), 0,
   VAR_13, VAR_24);

 if (VAR_26) {
  goto probe_error0;
  return VAR_26;
 }

 VAR_15.dev = VAR_24;
 VAR_15.state = VAR_2;
 VAR_15.next_version = VAR_5;
 FUNC_6(&VAR_15.host_event);
 FUNC_6(&VAR_15.config_event);
 FUNC_0(&VAR_15.ha_region_list);
 FUNC_1(&VAR_15.balloon_wrk.wrk, VAR_14);
 FUNC_1(&VAR_15.ha_wrk.wrk, VAR_20);
 VAR_15.host_specified_ha_region = 0;

 VAR_15.thread =
   FUNC_9(VAR_17, &VAR_15, "hv_balloon");
 if (FUNC_2(VAR_15.thread)) {
  VAR_26 = FUNC_3(VAR_15.thread);
  goto probe_error1;
 }





 FUNC_5(VAR_24, &VAR_15);






 FUNC_11(&VAR_28, 0, sizeof(struct dm_version_request));
 VAR_28.hdr.type = VAR_4;
 VAR_28.hdr.size = sizeof(struct dm_version_request);
 VAR_28.hdr.trans_id = FUNC_4(&VAR_23);
 VAR_28.version.version = VAR_6;
 VAR_28.is_last_attempt = 0;

 VAR_26 = FUNC_16(VAR_24->channel, &VAR_28,
    sizeof(struct dm_version_request),
    (unsigned long)((void*)0),
    VAR_12, 0);
 if (VAR_26)
  goto probe_error2;

 VAR_27 = FUNC_17(&VAR_15.host_event, 5*VAR_10);
 if (VAR_27 == 0) {
  VAR_26 = -VAR_8;
  goto probe_error2;
 }





 if (VAR_15.state == VAR_3) {
  VAR_26 = -VAR_8;
  goto probe_error2;
 }



 FUNC_11(&VAR_29, 0, sizeof(struct dm_capabilities));
 VAR_29.hdr.type = VAR_0;
 VAR_29.hdr.size = sizeof(struct dm_capabilities);
 VAR_29.hdr.trans_id = FUNC_4(&VAR_23);

 VAR_29.caps.cap_bits.balloon = 1;
 VAR_29.caps.cap_bits.hot_add = 1;





 VAR_29.caps.cap_bits.hot_add_alignment = 7;






 VAR_29.min_page_cnt = 0;
 VAR_29.max_page_number = -1;

 VAR_26 = FUNC_16(VAR_24->channel, &VAR_29,
    sizeof(struct dm_capabilities),
    (unsigned long)((void*)0),
    VAR_12, 0);
 if (VAR_26)
  goto probe_error2;

 VAR_27 = FUNC_17(&VAR_15.host_event, 5*VAR_10);
 if (VAR_27 == 0) {
  VAR_26 = -VAR_8;
  goto probe_error2;
 }





 if (VAR_15.state == VAR_3) {
  VAR_26 = -VAR_8;
  goto probe_error2;
 }

 VAR_15.state = VAR_1;

 return 0;

probe_error2:



 FUNC_10(VAR_15.thread);

probe_error1:
 FUNC_14(VAR_24->channel);
probe_error0:
 FUNC_7(VAR_22);
 return VAR_26;
}
