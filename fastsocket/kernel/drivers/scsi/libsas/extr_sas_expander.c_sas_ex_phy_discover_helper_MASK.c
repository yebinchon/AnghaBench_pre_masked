
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct discover_resp {int attached_sas_addr; } ;
struct smp_resp {struct discover_resp disc; } ;
struct domain_device {int sas_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct domain_device*,int,int*) ;
 int FUNC_3 (struct domain_device*,int*,int ,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct domain_device *VAR_3, u8 *VAR_4,
          u8 *VAR_5, int VAR_6)
{
 struct discover_resp *VAR_7;
 int VAR_8;

 VAR_4[9] = VAR_6;

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_0,
          VAR_5, VAR_1);
 if (VAR_8)
  return VAR_8;
 VAR_7 = &((struct smp_resp *)VAR_5)->disc;
 if (FUNC_0(VAR_3->sas_addr, VAR_7->attached_sas_addr, VAR_2) == 0) {
  FUNC_1("Found loopback topology, just ignore it!\n");
  return 0;
 }
 FUNC_2(VAR_3, VAR_6, VAR_5);
 return 0;
}
