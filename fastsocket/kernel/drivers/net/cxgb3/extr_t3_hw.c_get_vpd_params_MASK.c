
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vpd ;
typedef int u8 ;
struct vpd_params {int* port_type; int* eth_base; void** xauicfg; int sn; void* mem_timing; void* mdc; void* uclk; void* mclk; void* cclk; } ;
struct t3_vpd {int id_tag; int * na_data; int xaui1cfg_data; int xaui0cfg_data; int * port1_data; int * port0_data; int sn_data; int mt_data; int mdc_data; int uclk_data; int mclk_data; int cclk_data; } ;
struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {TYPE_1__ params; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct adapter*,int,int *) ;
 scalar_t__ FUNC_4 (struct adapter*) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_2, struct vpd_params *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct t3_vpd VAR_7;





 VAR_6 = FUNC_3(VAR_2, VAR_1, (__le32 *)&VAR_7);
 if (VAR_6)
  return VAR_6;
 VAR_5 = VAR_7.id_tag == 0x82 ? VAR_1 : 0;

 for (VAR_4 = 0; VAR_4 < sizeof(VAR_7); VAR_4 += 4) {
  VAR_6 = FUNC_3(VAR_2, VAR_5 + VAR_4,
          (__le32 *)((u8 *)&VAR_7 + VAR_4));
  if (VAR_6)
   return VAR_6;
 }

 VAR_3->cclk = FUNC_2(VAR_7.cclk_data, ((void*)0), 10);
 VAR_3->mclk = FUNC_2(VAR_7.mclk_data, ((void*)0), 10);
 VAR_3->uclk = FUNC_2(VAR_7.uclk_data, ((void*)0), 10);
 VAR_3->mdc = FUNC_2(VAR_7.mdc_data, ((void*)0), 10);
 VAR_3->mem_timing = FUNC_2(VAR_7.mt_data, ((void*)0), 10);
 FUNC_1(VAR_3->sn, VAR_7.sn_data, VAR_0);


 if (VAR_2->params.rev == 0 && !VAR_7.port0_data[0]) {
  VAR_3->port_type[0] = FUNC_4(VAR_2) ? 1 : 2;
  VAR_3->port_type[1] = FUNC_4(VAR_2) ? 6 : 2;
 } else {
  VAR_3->port_type[0] = FUNC_0(VAR_7.port0_data[0]);
  VAR_3->port_type[1] = FUNC_0(VAR_7.port1_data[0]);
  VAR_3->xauicfg[0] = FUNC_2(VAR_7.xaui0cfg_data, ((void*)0), 16);
  VAR_3->xauicfg[1] = FUNC_2(VAR_7.xaui1cfg_data, ((void*)0), 16);
 }

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  VAR_3->eth_base[VAR_4] = FUNC_0(VAR_7.na_data[2 * VAR_4]) * 16 +
     FUNC_0(VAR_7.na_data[2 * VAR_4 + 1]);
 return 0;
}
