
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_6__ {scalar_t__ return_code; } ;
struct TYPE_7__ {TYPE_2__ hdr; } ;
struct TYPE_8__ {TYPE_3__ setadapterparms; } ;
struct TYPE_5__ {scalar_t__ return_code; } ;
struct qeth_ipa_cmd {TYPE_4__ data; TYPE_1__ hdr; } ;
struct qeth_card {int dummy; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;

int FUNC_1(struct qeth_card *VAR_1,
  struct qeth_reply *VAR_2, unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4;

 FUNC_0(VAR_0, 4, "defadpcb");

 VAR_4 = (struct qeth_ipa_cmd *) VAR_3;
 if (VAR_4->hdr.return_code == 0)
  VAR_4->hdr.return_code =
   VAR_4->data.setadapterparms.hdr.return_code;
 return 0;
}
