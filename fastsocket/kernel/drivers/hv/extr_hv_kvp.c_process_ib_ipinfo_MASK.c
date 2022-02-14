
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int addr_family; scalar_t__ adapter_id; int dhcp_enabled; scalar_t__ dns_addr; scalar_t__ gate_way; scalar_t__ sub_net; scalar_t__ ip_addr; } ;
struct TYPE_5__ {TYPE_1__ kvp_ip_val; } ;
struct hv_kvp_msg {TYPE_2__ body; } ;
struct TYPE_6__ {int addr_family; scalar_t__ adapter_id; int dhcp_enabled; scalar_t__ dns_addr; scalar_t__ gate_way; scalar_t__ sub_net; scalar_t__ ip_addr; } ;
struct hv_kvp_ip_msg {TYPE_3__ kvp_ip_val; } ;
typedef int __u8 ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_4, void *VAR_5, int VAR_6)
{
 struct hv_kvp_ip_msg *VAR_7 = VAR_4;
 struct hv_kvp_msg *VAR_8 = VAR_5;

 switch (VAR_6) {
 case 128:



  FUNC_0((wchar_t *)VAR_7->kvp_ip_val.ip_addr,
    VAR_2,
    VAR_3,
    (__u8 *)VAR_8->body.kvp_ip_val.ip_addr,
    VAR_2);

  FUNC_0((wchar_t *)VAR_7->kvp_ip_val.sub_net,
    VAR_2,
    VAR_3,
    (__u8 *)VAR_8->body.kvp_ip_val.sub_net,
    VAR_2);

  FUNC_0((wchar_t *)VAR_7->kvp_ip_val.gate_way,
    VAR_1,
    VAR_3,
    (__u8 *)VAR_8->body.kvp_ip_val.gate_way,
    VAR_1);

  FUNC_0((wchar_t *)VAR_7->kvp_ip_val.dns_addr,
    VAR_2,
    VAR_3,
    (__u8 *)VAR_8->body.kvp_ip_val.dns_addr,
    VAR_2);

  VAR_8->body.kvp_ip_val.dhcp_enabled = VAR_7->kvp_ip_val.dhcp_enabled;

 default:
  FUNC_0((wchar_t *)VAR_7->kvp_ip_val.adapter_id,
    VAR_0,
    VAR_3,
    (__u8 *)VAR_8->body.kvp_ip_val.adapter_id,
    VAR_0);

  VAR_8->body.kvp_ip_val.addr_family = VAR_7->kvp_ip_val.addr_family;
 }
}
