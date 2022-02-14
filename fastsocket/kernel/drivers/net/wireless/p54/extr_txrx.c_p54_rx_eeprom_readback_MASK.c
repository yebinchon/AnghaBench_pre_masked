
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct p54_hdr {int req_id; scalar_t__ data; } ;
struct TYPE_4__ {int len; int data; } ;
struct TYPE_3__ {int len; int data; } ;
struct p54_eeprom_lm86 {TYPE_2__ v1; TYPE_1__ v2; } ;
struct p54_common {int fw_var; int eeprom_comp; int * eeprom; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 struct sk_buff* FUNC_4 (struct p54_common*,int ) ;

__attribute__((used)) static void FUNC_5(struct p54_common *VAR_0,
       struct sk_buff *VAR_1)
{
 struct p54_hdr *VAR_2 = (struct p54_hdr *) VAR_1->data;
 struct p54_eeprom_lm86 *VAR_3 = (struct p54_eeprom_lm86 *) VAR_2->data;
 struct sk_buff *VAR_4;

 if (!VAR_0->eeprom)
  return ;

 if (VAR_0->fw_var >= 0x509) {
  FUNC_3(VAR_0->eeprom, VAR_3->v2.data,
         FUNC_2(VAR_3->v2.len));
 } else {
  FUNC_3(VAR_0->eeprom, VAR_3->v1.data,
         FUNC_2(VAR_3->v1.len));
 }

 VAR_0->eeprom = ((void*)0);
 VAR_4 = FUNC_4(VAR_0, VAR_2->req_id);
 FUNC_1(VAR_4);
 FUNC_0(&VAR_0->eeprom_comp);
}
