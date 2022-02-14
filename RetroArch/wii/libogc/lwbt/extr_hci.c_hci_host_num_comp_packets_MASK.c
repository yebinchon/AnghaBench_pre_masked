
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct pbuf {int tot_len; scalar_t__ payload; } ;
typedef int err_t ;
struct TYPE_2__ {int host_num_acl; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pbuf* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct pbuf*) ;
 struct pbuf* FUNC_3 (struct pbuf*,int ,int ,int ) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct pbuf*,int ) ;

err_t FUNC_6(u16_t VAR_8, u16_t VAR_9)
{
 struct pbuf *VAR_10;

 if((VAR_10 = FUNC_1(VAR_6, VAR_4, VAR_5)) == ((void*)0)) {
  FUNC_0("hci_host_num_comp_packets: Could not allocate memory for pbuf\n");
  return VAR_0;
 }

 VAR_10 = FUNC_3(VAR_10, VAR_3, VAR_2, VAR_4);
 ((u8_t*)VAR_10->payload)[4] = 1;
 *(u16_t*)(VAR_10->payload+5) = FUNC_4(VAR_8);
 *(u16_t*)(VAR_10->payload+7) = FUNC_4(VAR_9);

 FUNC_5(VAR_10, VAR_10->tot_len);
 FUNC_2(VAR_10);

 VAR_7->host_num_acl += VAR_9;

 return VAR_1;
}
