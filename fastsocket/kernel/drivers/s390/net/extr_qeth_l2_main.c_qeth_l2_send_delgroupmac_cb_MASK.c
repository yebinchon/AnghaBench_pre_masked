
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_6__ {scalar_t__ return_code; } ;
struct TYPE_4__ {int * mac; } ;
struct TYPE_5__ {TYPE_1__ setdelmac; } ;
struct qeth_ipa_cmd {TYPE_3__ hdr; TYPE_2__ data; } ;
struct qeth_card {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int,char*,int *,int ,scalar_t__) ;
 int FUNC_2 (int ,int,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_1,
    struct qeth_reply *VAR_2,
    unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4;
 __u8 *VAR_5;

 FUNC_2(VAR_0, 2, "L2Dgmacb");
 VAR_4 = (struct qeth_ipa_cmd *) VAR_3;
 VAR_5 = &VAR_4->data.setdelmac.mac[0];
 if (VAR_4->hdr.return_code)
  FUNC_1(2, "Could not delete group MAC %pM on %s: %x\n",
     VAR_5, FUNC_0(VAR_1), VAR_4->hdr.return_code);
 return 0;
}
