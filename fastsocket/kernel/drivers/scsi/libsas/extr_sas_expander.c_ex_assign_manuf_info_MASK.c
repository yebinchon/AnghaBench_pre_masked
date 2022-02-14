
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sas_rphy {int dummy; } ;
struct sas_expander_device {int component_id; int component_revision_id; int component_vendor_id; int product_rev; int product_id; int vendor_id; } ;
struct domain_device {struct sas_rphy* rphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int ) ;
 struct sas_expander_device* FUNC_1 (struct sas_rphy*) ;

__attribute__((used)) static void FUNC_2(struct domain_device *VAR_4, void
     *VAR_5)
{
 u8 *VAR_6 = VAR_5;
 struct sas_rphy *VAR_7 = VAR_4->rphy;
 struct sas_expander_device *VAR_8 = FUNC_1(VAR_7);

 FUNC_0(VAR_8->vendor_id, VAR_6 + 12, VAR_3);
 FUNC_0(VAR_8->product_id, VAR_6 + 20, VAR_1);
 FUNC_0(VAR_8->product_rev, VAR_6 + 36,
        VAR_2);

 if (VAR_6[8] & 1) {
  FUNC_0(VAR_8->component_vendor_id, VAR_6 + 40,
         VAR_0);
  VAR_8->component_id = VAR_6[48] << 8 | VAR_6[49];
  VAR_8->component_revision_id = VAR_6[50];
 }
}
