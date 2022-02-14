
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int operation; } ;
struct TYPE_5__ {char* version; } ;
struct TYPE_6__ {TYPE_1__ kvp_register; } ;
struct hv_kvp_msg {TYPE_4__ kvp_hdr; TYPE_2__ body; } ;
struct TYPE_7__ {int val; int idx; } ;
struct cn_msg {int len; TYPE_3__ id; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cn_msg*,int ,int ) ;
 int FUNC_1 (struct cn_msg*) ;
 struct cn_msg* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_4)
{

 struct cn_msg *VAR_5;
 struct hv_kvp_msg *VAR_6;
 char *VAR_7;

 VAR_5 = FUNC_2(sizeof(*VAR_5) + sizeof(struct hv_kvp_msg), VAR_2);

 if (VAR_5) {
  VAR_6 = (struct hv_kvp_msg *)VAR_5->data;
  VAR_7 = VAR_6->body.kvp_register.version;
  VAR_5->id.idx = VAR_0;
  VAR_5->id.val = VAR_1;

  VAR_6->kvp_hdr.operation = VAR_4;
  FUNC_3(VAR_7, VAR_3);
  VAR_5->len = sizeof(struct hv_kvp_msg);
  FUNC_0(VAR_5, 0, VAR_2);
  FUNC_1(VAR_5);
 }
}
