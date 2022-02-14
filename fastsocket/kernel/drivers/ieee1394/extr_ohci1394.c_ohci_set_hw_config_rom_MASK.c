
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int csr_config_rom_cpu; } ;
struct hpsb_host {struct ti_ohci* hostdata; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct ti_ohci*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hpsb_host *VAR_3, __be32 *VAR_4)
{
 struct ti_ohci *VAR_5 = VAR_3->hostdata;

 FUNC_2(VAR_5, VAR_1, FUNC_0(VAR_4[0]));
 FUNC_2(VAR_5, VAR_0, FUNC_0(VAR_4[2]));

 FUNC_1(VAR_5->csr_config_rom_cpu, VAR_4, VAR_2);
}
