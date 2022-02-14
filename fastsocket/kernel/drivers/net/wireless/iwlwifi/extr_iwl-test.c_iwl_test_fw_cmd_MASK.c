
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct iwl_test {int trans; } ;
struct iwl_rx_packet {int hdr; int len_n_flags; } ;
struct iwl_host_cmd {int flags; struct iwl_rx_packet* resp_pkt; int * len; int id; int * dataflags; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct iwl_host_cmd*) ;
 struct sk_buff* FUNC_3 (struct iwl_test*,int) ;
 int FUNC_4 (struct iwl_test*,struct sk_buff*) ;
 int FUNC_5 (struct iwl_test*,struct iwl_host_cmd*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct sk_buff*) ;
 void* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct iwl_host_cmd*,int ,int) ;
 int FUNC_11 (struct nlattr*) ;
 int FUNC_12 (struct nlattr*) ;
 int FUNC_13 (struct nlattr*) ;
 int FUNC_14 (struct nlattr*) ;
 scalar_t__ FUNC_15 (struct sk_buff*,int ,int,void*) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct iwl_test *VAR_14, struct nlattr **VAR_15)
{
 struct iwl_host_cmd VAR_16;
 struct iwl_rx_packet *VAR_17;
 struct sk_buff *VAR_18;
 void *VAR_19;
 u32 VAR_20;
 int VAR_21;
 bool VAR_22;

 FUNC_10(&VAR_16, 0, sizeof(struct iwl_host_cmd));

 if (!VAR_15[VAR_10] ||
     !VAR_15[VAR_9]) {
  FUNC_1(VAR_14->trans, "Missing fw command mandatory fields\n");
  return -VAR_4;
 }

 VAR_16.flags = VAR_0 | VAR_1;
 VAR_22 = FUNC_12(VAR_15[VAR_11]);
 if (VAR_22)
  VAR_16.flags |= VAR_2;

 VAR_16.id = FUNC_13(VAR_15[VAR_10]);
 VAR_16.data[0] = FUNC_11(VAR_15[VAR_9]);
 VAR_16.len[0] = FUNC_14(VAR_15[VAR_9]);
 VAR_16.dataflags[0] = VAR_7;
 FUNC_0(VAR_14->trans, "test fw cmd=0x%x, flags 0x%x, len %d\n",
         VAR_16.id, VAR_16.flags, VAR_16.len[0]);

 VAR_21 = FUNC_5(VAR_14, &VAR_16);
 if (VAR_21) {
  FUNC_1(VAR_14->trans, "Failed to send hcmd\n");
  return VAR_21;
 }
 if (!VAR_22)
  return VAR_21;


 VAR_17 = VAR_16.resp_pkt;
 if (!VAR_17) {
  FUNC_1(VAR_14->trans, "HCMD received a null response packet\n");
  return VAR_21;
 }

 VAR_20 = FUNC_9(VAR_17->len_n_flags) & VAR_5;
 VAR_18 = FUNC_3(VAR_14, VAR_20 + 20);
 VAR_19 = FUNC_8(&VAR_17->hdr, VAR_20, VAR_6);
 if (!VAR_18 || !VAR_19) {
  FUNC_7(VAR_18);
  FUNC_6(VAR_19);
  return -VAR_3;
 }


 FUNC_2(&VAR_16);

 if (FUNC_16(VAR_18, VAR_8,
   VAR_13) ||
     FUNC_15(VAR_18, VAR_12, VAR_20, VAR_19))
  goto nla_put_failure;
 return FUNC_4(VAR_14, VAR_18);

nla_put_failure:
 FUNC_0(VAR_14->trans, "Failed creating NL attributes\n");
 FUNC_6(VAR_19);
 FUNC_7(VAR_18);
 return -VAR_4;
}
