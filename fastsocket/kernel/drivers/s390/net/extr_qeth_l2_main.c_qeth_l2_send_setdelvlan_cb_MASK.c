
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_4__ {scalar_t__ return_code; scalar_t__ command; } ;
struct TYPE_6__ {int vlan_id; } ;
struct TYPE_5__ {TYPE_3__ setdelvlan; } ;
struct qeth_ipa_cmd {TYPE_1__ hdr; TYPE_2__ data; } ;
struct qeth_card {int dummy; } ;


 scalar_t__ FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (int,char*,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ,int,char*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_1,
   struct qeth_reply *VAR_2, unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4;

 FUNC_3(VAR_0, 2, "L2sdvcb");
 VAR_4 = (struct qeth_ipa_cmd *) VAR_3;
 if (VAR_4->hdr.return_code) {
  FUNC_2(2, "Error in processing VLAN %i on %s: 0x%x. "
     "Continuing\n", VAR_4->data.setdelvlan.vlan_id,
     FUNC_1(VAR_1), VAR_4->hdr.return_code);
  FUNC_4(VAR_0, 2, "L2VL%4x", VAR_4->hdr.command);
  FUNC_4(VAR_0, 2, "L2%s", FUNC_0(VAR_1));
  FUNC_4(VAR_0, 2, "err%d", VAR_4->hdr.return_code);
 }
 return 0;
}
