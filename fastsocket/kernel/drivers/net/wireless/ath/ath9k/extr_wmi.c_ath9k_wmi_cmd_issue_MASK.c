
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmi_cmd_hdr {void* seq_no; void* command_id; } ;
struct wmi {int tx_seq_id; int ctrl_epid; int htc; } ;
struct sk_buff {int dummy; } ;
typedef enum wmi_cmd_id { ____Placeholder_wmi_cmd_id } wmi_cmd_id ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct wmi *VAR_0,
          struct sk_buff *VAR_1,
          enum wmi_cmd_id VAR_2, u16 VAR_3)
{
 struct wmi_cmd_hdr *VAR_4;

 VAR_4 = (struct wmi_cmd_hdr *) FUNC_2(VAR_1, sizeof(struct wmi_cmd_hdr));
 VAR_4->command_id = FUNC_0(VAR_2);
 VAR_4->seq_no = FUNC_0(++VAR_0->tx_seq_id);

 return FUNC_1(VAR_0->htc, VAR_1, VAR_0->ctrl_epid);
}
