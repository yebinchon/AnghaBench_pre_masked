
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fu_divert_port; } ;
struct ip6_fw_32 {int fw_nports; int fw_prot; TYPE_1__ fw_un; int timestamp; int fw_out_if; int fw_in_if; int fw_icmp6types; int fw_tcpnf; int fw_tcpf; int fw_ip6nopt; int fw_ip6opt; int fw_pts; int fw_ipflg; int fw_flg; int fw_number; int fw_dmsk; int fw_smsk; int fw_dst; int fw_src; int fw_bcnt; int fw_pcnt; int context; int version; } ;
struct TYPE_4__ {int fu_divert_port; } ;
struct ip6_fw {int fw_nports; int fw_prot; TYPE_2__ fw_un; int timestamp; int fw_out_if; int fw_in_if; int fw_icmp6types; int fw_tcpnf; int fw_tcpf; int fw_ip6nopt; int fw_ip6opt; int fw_pts; int fw_ipflg; int fw_flg; int fw_number; int fw_dmsk; int fw_smsk; int fw_dst; int fw_src; int fw_bcnt; int fw_pcnt; int context; int version; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2( struct ip6_fw_32 *VAR_2, struct ip6_fw *VAR_3)
{
 VAR_2->version = VAR_3->version;
 VAR_2->context = FUNC_0( VAR_1, VAR_3->context);
 VAR_2->fw_pcnt = VAR_3->fw_pcnt;
 VAR_2->fw_bcnt = VAR_3->fw_bcnt;
 VAR_2->fw_src = VAR_3->fw_src;
 VAR_2->fw_dst = VAR_3->fw_dst;
 VAR_2->fw_smsk = VAR_3->fw_smsk;
 VAR_2->fw_dmsk = VAR_3->fw_dmsk;
 VAR_2->fw_number = VAR_3->fw_number;
 VAR_2->fw_flg = VAR_3->fw_flg;
 VAR_2->fw_ipflg = VAR_3->fw_ipflg;
 FUNC_1( VAR_3->fw_pts, VAR_2->fw_pts, VAR_0);
 VAR_2->fw_ip6opt = VAR_3->fw_ip6opt ;
 VAR_2->fw_ip6nopt = VAR_3->fw_ip6nopt;
 VAR_2->fw_tcpf = VAR_3->fw_tcpf;
 VAR_2->fw_tcpnf = VAR_3->fw_tcpnf;
 FUNC_1( VAR_3->fw_icmp6types, VAR_2->fw_icmp6types, sizeof(VAR_3->fw_icmp6types));
 VAR_2->fw_in_if = VAR_3->fw_in_if;
 VAR_2->fw_out_if = VAR_3->fw_out_if;
 VAR_2->timestamp = VAR_3->timestamp;
 VAR_2->fw_un.fu_divert_port = VAR_3->fw_un.fu_divert_port;
 VAR_2->fw_prot = VAR_3->fw_prot;
 VAR_2->fw_nports = VAR_3->fw_nports;
}
