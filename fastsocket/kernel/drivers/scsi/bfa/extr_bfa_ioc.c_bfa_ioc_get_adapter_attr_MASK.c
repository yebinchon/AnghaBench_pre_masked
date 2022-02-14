
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_attr_s {int * uuid; int mfg_year; int mfg_month; int mfg_day; int asic_rev; int pcie_lanes_orig; int pcie_lanes; int pcie_gen; int pwwn; int adapter_prop; int card_type; int vpd; } ;
struct bfa_mfg_vpd_s {int dummy; } ;
struct bfa_ioc_s {struct bfi_ioc_attr_s* attr; } ;
struct bfa_adapter_attr_s {int nports; int prototype; int trunk_capable; int * uuid; int mfg_year; int mfg_month; int mfg_day; int is_mezz; int cna_capable; int hw_ver; int asic_rev; int pcie_lanes_orig; int pcie_lanes; int pcie_gen; int mac; int pwwn; int card_type; int model_descr; int model; int max_speed; int vpd; int manufacturer; int optrom_ver; int fw_ver; int serial_num; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_ioc_s*,int ) ;
 int FUNC_2 (struct bfa_ioc_s*,int ) ;
 int FUNC_3 (struct bfa_ioc_s*,int ) ;
 int FUNC_4 (struct bfa_ioc_s*,int ) ;
 int FUNC_5 (struct bfa_ioc_s*,int ) ;
 int FUNC_6 (struct bfa_ioc_s*) ;
 int FUNC_7 (struct bfa_ioc_s*) ;
 int FUNC_8 (struct bfa_ioc_s*,int ) ;
 int FUNC_9 (struct bfa_ioc_s*) ;
 int FUNC_10 (struct bfa_ioc_s*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *,int) ;

void
FUNC_13(struct bfa_ioc_s *VAR_1,
    struct bfa_adapter_attr_s *VAR_2)
{
 struct bfi_ioc_attr_s *VAR_3;

 VAR_3 = VAR_1->attr;

 FUNC_5(VAR_1, VAR_2->serial_num);
 FUNC_1(VAR_1, VAR_2->fw_ver);
 FUNC_4(VAR_1, VAR_2->optrom_ver);
 FUNC_2(VAR_1, VAR_2->manufacturer);
 FUNC_12(&VAR_2->vpd, &VAR_3->vpd,
        sizeof(struct bfa_mfg_vpd_s));

 VAR_2->nports = FUNC_7(VAR_1);
 VAR_2->max_speed = FUNC_10(VAR_1);

 FUNC_3(VAR_1, VAR_2->model);

 FUNC_3(VAR_1, VAR_2->model_descr);

 VAR_2->card_type = VAR_3->card_type;
 VAR_2->is_mezz = FUNC_11(VAR_3->card_type);

 if (FUNC_0(VAR_3->adapter_prop))
  VAR_2->prototype = 1;
 else
  VAR_2->prototype = 0;

 VAR_2->pwwn = VAR_1->attr->pwwn;
 VAR_2->mac = FUNC_6(VAR_1);

 VAR_2->pcie_gen = VAR_3->pcie_gen;
 VAR_2->pcie_lanes = VAR_3->pcie_lanes;
 VAR_2->pcie_lanes_orig = VAR_3->pcie_lanes_orig;
 VAR_2->asic_rev = VAR_3->asic_rev;

 FUNC_8(VAR_1, VAR_2->hw_ver);

 VAR_2->cna_capable = FUNC_9(VAR_1);
 VAR_2->trunk_capable = (VAR_2->nports > 1) &&
      !FUNC_9(VAR_1) && !VAR_2->is_mezz;
 VAR_2->mfg_day = VAR_3->mfg_day;
 VAR_2->mfg_month = VAR_3->mfg_month;
 VAR_2->mfg_year = VAR_3->mfg_year;
 FUNC_12(VAR_2->uuid, VAR_3->uuid, VAR_0);
}
