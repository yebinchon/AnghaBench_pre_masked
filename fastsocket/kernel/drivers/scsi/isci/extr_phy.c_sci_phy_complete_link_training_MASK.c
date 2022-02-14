
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isci_phy {int max_negotiated_speed; int sm; } ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct isci_phy *VAR_0,
        enum sas_linkrate VAR_1,
        u32 VAR_2)
{
 VAR_0->max_negotiated_speed = VAR_1;

 FUNC_0(&VAR_0->sm, VAR_2);
}
