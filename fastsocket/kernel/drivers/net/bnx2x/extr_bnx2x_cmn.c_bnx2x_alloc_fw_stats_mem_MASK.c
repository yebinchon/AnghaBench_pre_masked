
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stats_query_header {int dummy; } ;
struct stats_query_cmd_group {int dummy; } ;
struct stats_counter {int dummy; } ;
struct per_queue_stats {int dummy; } ;
struct per_port_stats {int dummy; } ;
struct per_pf_stats {int dummy; } ;
struct fcoe_statistics_params {int dummy; } ;
struct bnx2x_fw_stats_req {int dummy; } ;
struct bnx2x_fw_stats_data {int dummy; } ;
struct bnx2x {int fw_stats_num; int fw_stats_req_sz; int fw_stats_data_sz; scalar_t__ fw_stats_data_mapping; scalar_t__ fw_stats_req_mapping; scalar_t__ fw_stats_mapping; scalar_t__ fw_stats; struct bnx2x_fw_stats_data* fw_stats_data; struct bnx2x_fw_stats_req* fw_stats_req; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (scalar_t__,scalar_t__*,int) ;
 int FUNC_3 (int ,char*,int,int,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (struct bnx2x*) ;

__attribute__((used)) static int FUNC_10(struct bnx2x *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 int VAR_6 = FUNC_5(VAR_3) ? 0 : 1;


 u8 VAR_7 = FUNC_1(VAR_3) + VAR_6;






 VAR_3->fw_stats_num = 2 + VAR_6 + VAR_7;






 if (FUNC_4(VAR_3))
  VAR_5 = FUNC_9(VAR_3);






 VAR_4 =
  (((VAR_3->fw_stats_num + VAR_5) / VAR_2) +
   (((VAR_3->fw_stats_num + VAR_5) % VAR_2) ?
   1 : 0));

 FUNC_3(VAR_0, "stats fw_stats_num %d, vf headroom %d, num_groups %d\n",
    VAR_3->fw_stats_num, VAR_5, VAR_4);
 VAR_3->fw_stats_req_sz = sizeof(struct stats_query_header) +
  VAR_4 * sizeof(struct stats_query_cmd_group);
 VAR_3->fw_stats_data_sz = sizeof(struct per_port_stats) +
  sizeof(struct per_pf_stats) +
  sizeof(struct fcoe_statistics_params) +
  sizeof(struct per_queue_stats) * VAR_7 +
  sizeof(struct stats_counter);

 FUNC_2(VAR_3->fw_stats, &VAR_3->fw_stats_mapping,
   VAR_3->fw_stats_data_sz + VAR_3->fw_stats_req_sz);


 VAR_3->fw_stats_req = (struct bnx2x_fw_stats_req *)VAR_3->fw_stats;
 VAR_3->fw_stats_req_mapping = VAR_3->fw_stats_mapping;
 VAR_3->fw_stats_data = (struct bnx2x_fw_stats_data *)
  ((u8 *)VAR_3->fw_stats + VAR_3->fw_stats_req_sz);
 VAR_3->fw_stats_data_mapping = VAR_3->fw_stats_mapping +
  VAR_3->fw_stats_req_sz;

 FUNC_3(VAR_0, "statistics request base address set to %x %x\n",
    FUNC_6(VAR_3->fw_stats_req_mapping),
    FUNC_7(VAR_3->fw_stats_req_mapping));
 FUNC_3(VAR_0, "statistics data base address set to %x %x\n",
    FUNC_6(VAR_3->fw_stats_data_mapping),
    FUNC_7(VAR_3->fw_stats_data_mapping));
 return 0;

alloc_mem_err:
 FUNC_8(VAR_3);
 FUNC_0("Can't allocate FW stats memory\n");
 return -VAR_1;
}
