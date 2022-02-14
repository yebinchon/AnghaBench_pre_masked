
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int product_id; int vendor_id; } ;
struct ipr_vpd {int sn; TYPE_1__ vpids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ipr_vpd *VAR_3)
{
 char VAR_4[VAR_2 + VAR_0
      + VAR_1];

 FUNC_1(VAR_4, VAR_3->vpids.vendor_id, VAR_2);
 FUNC_1(VAR_4 + VAR_2, VAR_3->vpids.product_id,
        VAR_0);
 VAR_4[VAR_2 + VAR_0] = '\0';
 FUNC_0("Vendor/Product ID: %s\n", VAR_4);

 FUNC_1(VAR_4, VAR_3->sn, VAR_1);
 VAR_4[VAR_1] = '\0';
 FUNC_0("    Serial Number: %s\n", VAR_4);
}
