
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct qeth_card {TYPE_1__ info; } ;
typedef enum qeth_routing_types { ____Placeholder_qeth_routing_types } qeth_routing_types ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;


 int FUNC_0 (struct qeth_card*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct qeth_card *VAR_2,
  enum qeth_routing_types *VAR_3, enum qeth_prot_versions VAR_4)
{
 if (VAR_2->info.type == VAR_1) {
  switch (*VAR_3) {
  case 132:
  case 131:
  case 129:
  case 133:
   return;
  default:
   goto out_inval;
  }
 } else {
  switch (*VAR_3) {
  case 132:
  case 130:
  case 128:
   return;
  case 133:
   if (FUNC_0(VAR_2, VAR_4,
            VAR_0))
    return;
  default:
   goto out_inval;
  }
 }
out_inval:
 *VAR_3 = 132;
}
