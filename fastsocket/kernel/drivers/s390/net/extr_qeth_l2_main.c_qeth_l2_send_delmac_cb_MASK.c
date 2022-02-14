
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_4__ {int return_code; } ;
struct qeth_ipa_cmd {TYPE_2__ hdr; } ;
struct TYPE_3__ {int mac_bits; } ;
struct qeth_card {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_4,
      struct qeth_reply *VAR_5,
      unsigned long VAR_6)
{
 struct qeth_ipa_cmd *VAR_7;

 FUNC_0(VAR_3, 2, "L2Dmaccb");
 VAR_7 = (struct qeth_ipa_cmd *) VAR_6;
 if (VAR_7->hdr.return_code) {
  FUNC_1(VAR_3, 2, "err%d", VAR_7->hdr.return_code);
  if (VAR_7->hdr.return_code == VAR_1) {
   VAR_4->info.mac_bits &= ~VAR_2;
   VAR_7->hdr.return_code = 0;
  } else
   VAR_7->hdr.return_code = -VAR_0;
  return 0;
 }
 VAR_4->info.mac_bits &= ~VAR_2;

 return 0;
}
