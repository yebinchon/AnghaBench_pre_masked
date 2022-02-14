
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_7__ {int operation; } ;
struct hv_vss_msg {TYPE_2__ vss_hdr; } ;
struct TYPE_6__ {int val; int idx; } ;
struct cn_msg {int len; TYPE_1__ id; scalar_t__ data; } ;
struct TYPE_10__ {TYPE_4__* msg; } ;
struct TYPE_8__ {int operation; } ;
struct TYPE_9__ {TYPE_3__ vss_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cn_msg*,int ,int ) ;
 int FUNC_1 (struct cn_msg*) ;
 struct cn_msg* FUNC_2 (int,int ) ;
 TYPE_5__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_4)
{
 int VAR_5 = VAR_3.msg->vss_hdr.operation;
 struct cn_msg *VAR_6;
 struct hv_vss_msg *VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6) + sizeof(*VAR_7), VAR_2);
 if (!VAR_6)
  return;

 VAR_7 = (struct hv_vss_msg *)VAR_6->data;

 VAR_6->id.idx = VAR_0;
 VAR_6->id.val = VAR_1;

 VAR_7->vss_hdr.operation = VAR_5;
 VAR_6->len = sizeof(struct hv_vss_msg);

 FUNC_0(VAR_6, 0, VAR_2);
 FUNC_1(VAR_6);

 return;
}
