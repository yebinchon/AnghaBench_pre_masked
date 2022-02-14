
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlink_skb_parms {int dummy; } ;
struct TYPE_3__ {scalar_t__ operation; } ;
struct hv_vss_msg {int error; TYPE_1__ vss_hdr; } ;
struct cn_msg {scalar_t__ data; } ;
struct TYPE_4__ {int active; int * recv_channel; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct cn_msg *VAR_2, struct netlink_skb_parms *VAR_3)
{
 struct hv_vss_msg *VAR_4;

 VAR_4 = (struct hv_vss_msg *)VAR_2->data;

 if (VAR_4->vss_hdr.operation == VAR_0) {
  FUNC_1("VSS daemon registered\n");
  VAR_1.active = 0;
  if (VAR_1.recv_channel != ((void*)0))
   FUNC_0(VAR_1.recv_channel);
  return;

 }
 FUNC_2(VAR_4->error);
}
